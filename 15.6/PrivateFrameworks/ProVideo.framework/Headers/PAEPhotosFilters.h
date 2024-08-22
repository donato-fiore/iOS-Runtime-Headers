// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PAEPHOTOSFILTERS_H
#define PAEPHOTOSFILTERS_H

@class NSMutableDictionary, NSURL, NSData;


#import "PAEFilterDefaultBase.h"

@interface PAEPhotosFilters : PAEFilterDefaultBase {
    PCMutex cacheMutex;
    NSMutableDictionary *LUTcache;
    NSURL *LUTCubeURL;
    NSURL *LUTScubeURL;
    NSURL *LUTCcubeURL;
    int whichFilter;
    NSData *cool16BitLUT;
}




-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg0 withInput:(id)arg1 withInfo:(struct ? )arg2 ;
-(BOOL)frameSetup:(struct ? )arg0 inputInfo:(struct ? )arg1 hardware:(*BOOL)arg2 software:(*BOOL)arg3 ;
-(BOOL)read:(id)arg0 red:(*float)arg1 green:(*float)arg2 blue:(*float)arg3 ;
-(BOOL)readCubeLine:(id)arg0 intoLUTEntries:(*void)arg1 ;
-(BOOL)variesOverTime;
-(id)LUTFromCache:(int)arg0 atPath:(id)arg1 ;
-(id)initWithAPIManager:(id)arg0 ;
-(id)lutFromCcubeFile:(id)arg0 ;
-(id)lutFromCubeFile:(id)arg0 ;
-(id)lutFromScubeFile:(id)arg0 ;
-(id)properties;
-(id)readCubeData:(id)arg0 error:(*id)arg1 ;
-(struct HGRef<HGBitmap> )lutBitmapForFilter:(int)arg0 lutDimensions:(*int)arg1 ;
-(void)dealloc;


@end


#endif
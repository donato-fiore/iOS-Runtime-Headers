// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PAECHROMAKEYERIOS_H
#define PAECHROMAKEYERIOS_H



#import "PAEFilterDefaultBase.h"
#import "PAEKeyerMatteTools.h"
#import "PAEKeyerPreprocess.h"

@interface PAEChromaKeyeriOS : PAEFilterDefaultBase {
    PAEKeyerMatteTools *_matteTools;
    PAEKeyerPreprocess *_preprocessTools;
    *void _lutsBitmapLoaderCache;
}




-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg0 withInput:(id)arg1 withInfo:(struct ? )arg2 ;
-(BOOL)frameSetup:(struct ? )arg0 inputInfo:(struct ? )arg1 hardware:(*BOOL)arg2 software:(*BOOL)arg3 ;
-(id)initWithAPIManager:(id)arg0 ;
-(id)properties;
-(void)createLutForNode:(*void)arg0 input:(int)arg1 rect:(struct HGRect *)arg2 omKeyer:(*void)arg3 ;
-(void)dealloc;


@end


#endif
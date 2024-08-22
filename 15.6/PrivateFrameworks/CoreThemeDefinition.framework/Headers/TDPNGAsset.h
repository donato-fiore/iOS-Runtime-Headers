// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TDPNGASSET_H
#define TDPNGASSET_H

@class NSSet;


#import "TDAsset.h"

@interface TDPNGAsset : TDAsset {
    int _exifOrientation;
    unsigned int _fileScaleFactor;
}


@property (nonatomic) BOOL rawData;
@property (retain, nonatomic) NSSet *renditions;


-(BOOL)hasCursorProduction;
-(BOOL)hasProduction;
-(id)sourceImageWithDocument:(id)arg0 ;
-(int)exifOrientation;
-(struct CGSize )sourceImageSizeWithDocument:(id)arg0 ;
-(unsigned int)fileScaleFactor;
-(void)_logError:(id)arg0 ;
-(void)setFileScaleFactor:(unsigned int)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CITILE2FILTER_H
#define CITILE2FILTER_H

@class NSNumber;


#import "CITileFilter.h"

@interface CITile2Filter : CITileFilter

@property (retain, nonatomic) NSNumber *inputAcuteAngle; // ivar: inputAcuteAngle


+(id)customAttributes;
-(CGFloat)_roiArea;
-(id)_singlePixelImage;
-(id)outputImage;
-(struct CGRect )_roiRect;
-(struct vec2 )_roiCenter;


@end


#endif
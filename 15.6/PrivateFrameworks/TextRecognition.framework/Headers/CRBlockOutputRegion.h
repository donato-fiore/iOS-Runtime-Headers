// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRBLOCKOUTPUTREGION_H
#define CRBLOCKOUTPUTREGION_H



#import "CRCompositeOutputRegion.h"

@interface CRBlockOutputRegion : CRCompositeOutputRegion



+(id)blockWithBlock:(id)arg0 children:(id)arg1 ;
+(id)blockWithLines:(id)arg0 confidence:(int)arg1 quad:(id)arg2 baselineAngle:(CGFloat)arg3 ;
+(id)blockWithTextFeature:(id)arg0 children:(id)arg1 imageSize:(struct CGSize )arg2 confidenceThresholdProvider:(id)arg3 ;
-(NSUInteger)type;
-(id)joiningDelimeter;
-(id)regionsSuitableForDataDetectorOutput;


@end


#endif
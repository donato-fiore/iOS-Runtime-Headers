// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTUICOLLECTIONCELLANALOGCLOCKVIEW_H
#define MTUICOLLECTIONCELLANALOGCLOCKVIEW_H



#import "MTUIAnalogClockView.h"

@interface MTUICollectionCellAnalogClockView : MTUIAnalogClockView



+(BOOL)shouldCacheImageOnDiskForType:(int)arg0 dayTime:(BOOL)arg1 ;
+(CGFloat)faceRadius;
+(CGFloat)hourHandLength;
+(CGFloat)hourHandWidth;
+(CGFloat)minuteHandLength;
+(CGFloat)minuteHandWidth;
+(CGFloat)overHourHandDotSize;
+(CGFloat)overSecondHandDotSize;
+(CGFloat)secondHandMainLength;
+(CGFloat)secondHandOverhangLength;
+(CGFloat)secondHandWidth;
+(NSInteger)style;
+(id)makeClockFaceForDaytime:(BOOL)arg0 ;
+(struct CGPoint )handRotationalCenterForHand:(NSInteger)arg0 ;
-(CGFloat)coarseUpdateInterval;
-(CGFloat)updateInterval;


@end


#endif
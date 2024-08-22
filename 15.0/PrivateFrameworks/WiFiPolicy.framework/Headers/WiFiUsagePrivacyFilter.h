// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WIFIUSAGEPRIVACYFILTER_H
#define WIFIUSAGEPRIVACYFILTER_H


#import <Foundation/Foundation.h>


@interface WiFiUsagePrivacyFilter : NSObject



+(BOOL)canPerformActionWithSampleRate:(NSUInteger)arg0 ;
+(id)getBinFor:(NSUInteger)arg0 In:(id)arg1 WithLowestEdge:(id)arg2 As:(NSUInteger)arg3 ;
+(id)getBinTimeInterval:(CGFloat)arg0 As:(NSUInteger)arg1 ;
+(id)getHumanSeconds:(id)arg0 ;
+(id)localTimestamp:(id)arg0 ;
+(id)numberWithByteCount:(NSUInteger)arg0 ;
+(id)numberWithDuration:(CGFloat)arg0 ;
+(id)numberWithFrameCount:(NSUInteger)arg0 ;
+(id)numberWithInstances:(NSUInteger)arg0 ;
+(id)timePercentage:(CGFloat)arg0 overTotalDuration:(CGFloat)arg1 ;
+(id)toHEXString:(char *)arg0 length:(NSUInteger)arg1 ;
+(id)twoSigFig:(NSUInteger)arg0 ;


@end


#endif
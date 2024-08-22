// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFIUSAGEPRIVACYFILTER_H
#define WIFIUSAGEPRIVACYFILTER_H


#import <Foundation/Foundation.h>


@interface WiFiUsagePrivacyFilter : NSObject



+(BOOL)canPerformActionWithSampleRate:(NSUInteger)arg0 ;
+(BOOL)isInternalInstall;
+(NSInteger)getSumAllBands:(struct ? )arg0 ;
+(id)bandAsString:(int)arg0 ;
+(id)getBinEvery10Over100:(NSUInteger)arg0 As:(NSUInteger)arg1 ;
+(id)getBinFor:(NSInteger)arg0 In:(id)arg1 WithLowestEdge:(id)arg2 As:(NSUInteger)arg3 ;
+(id)getBinTimeInterval:(CGFloat)arg0 As:(NSUInteger)arg1 ;
+(id)getHumanSeconds:(id)arg0 ;
+(id)getLabelForBandUsageDuration:(struct ? )arg0 overTotalDuration:(CGFloat)arg1 ;
+(id)getLabelForIntegerByBand:(struct ? )arg0 ;
+(id)getLabelForIntegerByBand:(struct ? )arg0 In:(id)arg1 WithLowestEdge:(id)arg2 As:(NSUInteger)arg3 ;
+(id)getLabelForIntegerByBand:(struct ? )arg0 withCap:(BOOL)arg1 ;
+(id)getLabelForIntegerByBandTransition:(struct ? )arg0 In:(id)arg1 WithLowestEdge:(id)arg2 As:(NSUInteger)arg3 ;
+(id)getLabelForNeighborsByBand:(id)arg0 ;
+(id)getLabelForPercIntegerByBand:(struct ? )arg0 ;
+(id)getLabelForRssiByBand:(struct ? )arg0 ;
+(id)getLabelForRssiDeltaByBand:(struct ? )arg0 ;
+(id)getLabelForRssiDeltaByBandTransition:(struct ? )arg0 ;
+(id)getSumArrayCountAllBand:(id)arg0 ;
+(id)localTimestamp:(id)arg0 ;
+(id)numberWithByteCount:(NSUInteger)arg0 ;
+(id)numberWithDuration:(CGFloat)arg0 ;
+(id)numberWithDurationMillisecond:(CGFloat)arg0 ;
+(id)numberWithFrameCount:(NSUInteger)arg0 ;
+(id)numberWithInstances:(NSUInteger)arg0 ;
+(id)oui:(id)arg0 ;
+(id)reformatMACAddress:(id)arg0 ;
+(id)sanitizedOUI:(id)arg0 ;
+(id)timePercentage:(CGFloat)arg0 overTotalDuration:(CGFloat)arg1 ;
+(id)toHEXString:(char *)arg0 length:(NSUInteger)arg1 ;
+(id)twoSigFig:(NSUInteger)arg0 ;
+(int)bandFrom:(id)arg0 Or:(id)arg1 ;
+(struct ? )getModeCountersByCandidatesByBand:(id)arg0 ;
+(struct ? )getPercForFloatByBand:(struct ? )arg0 Over:(CGFloat)arg1 ;
+(struct ? )getPercForIntegerByBand:(struct ? )arg0 Over:(NSUInteger)arg1 ;
+(void)initialize;


@end


#endif
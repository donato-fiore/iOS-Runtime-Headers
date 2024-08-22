// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCCALLLINKCONGESTIONDETECTOR_H
#define VCCALLLINKCONGESTIONDETECTOR_H


#import <Foundation/Foundation.h>


@interface VCCallLinkCongestionDetector : NSObject {
    CGFloat rttThreshold;
    CGFloat lossRateThreshold;
}


@property (nonatomic) BOOL isLinkCongested; // ivar: isLinkCongested


-(id)initWithRTTThreshold:(CGFloat)arg0 lossRateThreshold:(CGFloat)arg1 ;
-(void)addNewRTT:(CGFloat)arg0 packetLossRate:(CGFloat)arg1 timestamp:(CGFloat)arg2 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WK_RTCVIDEOENCODERQPTHRESHOLDS_H
#define WK_RTCVIDEOENCODERQPTHRESHOLDS_H


#import <Foundation/Foundation.h>


@interface WK_RTCVideoEncoderQpThresholds : NSObject

@property (readonly, nonatomic) NSInteger high; // ivar: _high
@property (readonly, nonatomic) NSInteger low; // ivar: _low


-(id)initWithThresholdsLow:(NSInteger)arg0 high:(NSInteger)arg1 ;


@end


#endif
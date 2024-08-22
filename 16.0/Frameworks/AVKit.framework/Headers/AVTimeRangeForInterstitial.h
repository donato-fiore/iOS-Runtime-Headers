// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTIMERANGEFORINTERSTITIAL_H
#define AVTIMERANGEFORINTERSTITIAL_H



#import "AVTimeRange.h"
#import "AVInterstitialTimeRange.h"

@interface AVTimeRangeForInterstitial : AVTimeRange

@property (readonly) AVInterstitialTimeRange *interstice; // ivar: _interstice


-(id)initWithInterstice:(id)arg0 ;


@end


#endif
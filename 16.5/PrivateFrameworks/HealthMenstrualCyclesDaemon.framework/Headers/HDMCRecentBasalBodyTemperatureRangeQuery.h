// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDMCRECENTBASALBODYTEMPERATURERANGEQUERY_H
#define HDMCRECENTBASALBODYTEMPERATURERANGEQUERY_H

@class HDProfile;

#import <Foundation/Foundation.h>


@interface HDMCRecentBasalBodyTemperatureRangeQuery : NSObject {
    HDProfile *_profile;
    NSInteger _sampleLimit;
    CGFloat _upperQuantileBound;
    CGFloat _lowerQuantileBound;
}




+(id)recentRangeForAnalysisWithProfile:(id)arg0 ;
-(id)initWithProfile:(id)arg0 sampleLimit:(NSInteger)arg1 upperQuantileBound:(CGFloat)arg2 lowerQuantileBound:(CGFloat)arg3 ;
-(id)rangeWithError:(*id)arg0 ;


@end


#endif
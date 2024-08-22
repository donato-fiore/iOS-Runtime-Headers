// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVINTERSTITIALDATERANGE_H
#define AVINTERSTITIALDATERANGE_H

@class NSDate;


#import "AVInterstitialTimeRange.h"

@interface AVInterstitialDateRange : AVInterstitialTimeRange {
    ? _mappedTimeRange;
}


@property (readonly) NSDate *endDate; // ivar: _endDate
@property (readonly) NSDate *startDate; // ivar: _startDate


-(BOOL)isEqualToInterstitialTimeRange:(id)arg0 ;
-(id)_initWithTimeRange:(struct ? )arg0 ;
-(id)description;
-(id)initWithStart:(id)arg0 end:(id)arg1 ;
-(id)initWithTimeRange:(struct ? )arg0 ;
-(struct ? )timeRange;
-(void)_setPlayerInterstitialEvent:(id)arg0 ;
-(void)_updateMappedStartTime;


@end


#endif
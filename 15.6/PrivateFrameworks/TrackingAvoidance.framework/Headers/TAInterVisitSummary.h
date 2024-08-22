// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TAINTERVISITSUMMARY_H
#define TAINTERVISITSUMMARY_H

@class NSArray, NSDateInterval;

#import <Foundation/Foundation.h>

#import "TASPAdvertisement.h"

@interface TAInterVisitSummary : NSObject

@property (readonly, nonatomic) NSArray *deviceLocationHistory; // ivar: _deviceLocationHistory
@property (readonly, nonatomic) NSDateInterval *deviceObservationInterval; // ivar: _deviceObservationInterval
@property (readonly, nonatomic) TASPAdvertisement *latestObservation; // ivar: _latestObservation


-(id)initWithObservationInterval:(id)arg0 andLocationHistory:(id)arg1 andLastObservation:(id)arg2 ;


@end


#endif
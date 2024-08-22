// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPFLIGHTEVENTSAGGREGATOR_H
#define PPFLIGHTEVENTSAGGREGATOR_H



#import "PPEventsAggregator.h"

@interface PPFlightEventsAggregator : PPEventsAggregator



-(BOOL)isEvent:(id)arg0 dupeOfEvent:(id)arg1 ;
-(id)_multiDestinationsFlights;
-(id)_returningFlightForFlight:(id)arg0 inPool:(id)arg1 ;
-(id)_simpleRoundTripFlights;
-(id)tripCandidatesFromEventsPool;


@end


#endif
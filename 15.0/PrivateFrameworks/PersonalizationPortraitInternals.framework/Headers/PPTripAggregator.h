// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPTRIPAGGREGATOR_H
#define PPTRIPAGGREGATOR_H


#import <Foundation/Foundation.h>


@interface PPTripAggregator : NSObject



+(id)_eventsFromCategory:(unsigned char)arg0 inPool:(id)arg1 ;
+(id)keyForCategory:(unsigned char)arg0 ;
+(id)mergeTripCandidates:(id)arg0 ;
+(id)tripCandidatesWithEvents:(id)arg0 ;
+(id)tripEventsFromCandidates:(id)arg0 ;
+(id)tripEventsWithEvents:(id)arg0 from:(id)arg1 to:(id)arg2 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPEVENTSAGGREGATOR_H
#define PPEVENTSAGGREGATOR_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PPEventsAggregator : NSObject

@property (retain, nonatomic) NSArray *eventsPool; // ivar: _eventsPool


-(BOOL)isEvent:(id)arg0 dupeOfEvent:(id)arg1 ;
-(id)initWithEventsPool:(id)arg0 ;
-(id)tripCandidatesFromEventsPool;
-(void)dedupeEventsInPool;


@end


#endif
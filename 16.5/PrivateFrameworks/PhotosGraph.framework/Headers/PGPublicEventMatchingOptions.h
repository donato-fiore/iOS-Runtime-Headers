// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGPUBLICEVENTMATCHINGOPTIONS_H
#define PGPUBLICEVENTMATCHINGOPTIONS_H

@class NSDateInterval, NSArray;
@protocol CLSTimeLocationTuple;

#import <Foundation/Foundation.h>

#import "PGMeaningfulEventMatchingCriteria.h"
#import "PGMeaningfulEventProcessorCache.h"
#import "PGGraphMomentNode.h"

@interface PGPublicEventMatchingOptions : NSObject

@property (readonly, nonatomic) NSDateInterval *actualAttendanceDateInterval; // ivar: _actualAttendanceDateInterval
@property (readonly, nonatomic) CLLocationCoordinate2D coordinates; // ivar: _coordinates
@property (readonly, nonatomic) NSDateInterval *expandedAttendanceDateInterval; // ivar: _expandedAttendanceDateInterval
@property (readonly, nonatomic) PGMeaningfulEventMatchingCriteria *matchingCriteria; // ivar: _matchingCriteria
@property (readonly, nonatomic) PGMeaningfulEventProcessorCache *meaningfulEventProcessorCache; // ivar: _meaningfulEventProcessorCache
@property (readonly, nonatomic) PGGraphMomentNode *momentNode; // ivar: _momentNode
@property (readonly, nonatomic) NSArray *temporalClusterEvents; // ivar: _temporalClusterEvents
@property (readonly, nonatomic) NSObject<CLSTimeLocationTuple> *timeLocationTuple; // ivar: _timeLocationTuple


-(id)_readTemporalClusterEvents;
-(id)initWithTimeLocationTuple:(id)arg0 momentNode:(id)arg1 meaningfulEventProcessorCache:(id)arg2 ;
-(void)_createAttendanceDateIntervals;


@end


#endif
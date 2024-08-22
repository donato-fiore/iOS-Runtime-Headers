// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GEOTRANSITNEARBYSCHEDULEGROUP_H
#define _GEOTRANSITNEARBYSCHEDULEGROUP_H

@class NSString, NSArray;
@protocol GEOTransitNearbyScheduleGroup;

#import <Foundation/Foundation.h>

#import "GEOPDTransitScheduleGroup.h"

@interface _GEOTransitNearbyScheduleGroup : NSObject <GEOTransitNearbyScheduleGroup>

 {
    GEOPDTransitScheduleGroup *_transitScheduleGroup;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSInteger groupType;
@property (readonly, nonatomic) BOOL hasWalkingDetails;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *incidents; // ivar: _incidents
@property (readonly, nonatomic) NSArray *lineCells; // ivar: _lineCells
@property (readonly, nonatomic) NSUInteger maxWalkingDistance;
@property (readonly, nonatomic) NSUInteger maxWalkingTime;
@property (readonly, nonatomic) NSUInteger minWalkingDistance;
@property (readonly, nonatomic) NSUInteger minWalkingTime;
@property (readonly, nonatomic) NSString *pinnedDisplayName;
@property (readonly) Class superclass;


+(id)lineSectionsForNearbyTransitGroup:(id)arg0 departureSequenceContainers:(id)arg1 departureSequences:(id)arg2 ;
-(id)initWithTransitScheduleGroup:(id)arg0 departureSequenceContainers:(id)arg1 scheduledDepartureSequences:(id)arg2 incidentsMap:(id)arg3 ;


@end


#endif
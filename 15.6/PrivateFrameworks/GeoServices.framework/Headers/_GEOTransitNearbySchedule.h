// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GEOTRANSITNEARBYSCHEDULE_H
#define _GEOTRANSITNEARBYSCHEDULE_H

@class NSArray, NSString;
@protocol GEOTransitNearbySchedule;

#import <Foundation/Foundation.h>


@interface _GEOTransitNearbySchedule : NSObject <GEOTransitNearbySchedule>



@property (readonly, nonatomic) NSArray *categories; // ivar: _categories
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)nearbyScheduleCategoriesFromSchedule:(id)arg0 departureSequenceContainers:(id)arg1 scheduledDepartureSequences:(id)arg2 incidents:(id)arg3 ;
-(id)initWithNearbySchedule:(id)arg0 departureSequenceContainers:(id)arg1 scheduledDepartureSequences:(id)arg2 incidents:(id)arg3 stopInfo:(id)arg4 ;


@end


#endif
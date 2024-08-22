// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GEOTRANSITNEARBYSCHEDULECATEGORY_H
#define _GEOTRANSITNEARBYSCHEDULECATEGORY_H

@class NSString, NSArray;
@protocol GEOTransitNearbyScheduleCategory;

#import <Foundation/Foundation.h>


@interface _GEOTransitNearbyScheduleCategory : NSObject <GEOTransitNearbyScheduleCategory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSArray *groups; // ivar: _groups
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithTransitScheduleCategory:(id)arg0 nearbyScheduleGroups:(id)arg1 ;


@end


#endif
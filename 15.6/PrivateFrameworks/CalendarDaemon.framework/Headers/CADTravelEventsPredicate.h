// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CADTRAVELEVENTSPREDICATE_H
#define CADTRAVELEVENTSPREDICATE_H



#import "EKPredicate.h"

@interface CADTravelEventsPredicate : EKPredicate



+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_fetchTravelEventsWithDatabase:(struct CalDatabase *)arg0 ;
-(id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultPropertiesToLoad;
-(id)initWithCalendarIDs:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)predicateFormat;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
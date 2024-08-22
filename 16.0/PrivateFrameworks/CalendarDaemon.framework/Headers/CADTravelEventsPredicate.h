// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CADTRAVELEVENTSPREDICATE_H
#define CADTRAVELEVENTSPREDICATE_H



#import "EKPredicate.h"

@interface CADTravelEventsPredicate : EKPredicate



+(BOOL)supportsSecureCoding;
-(?)_fetchTravelEventsWithDatabase;
-(?)copyMatchingItemsWithDatabase;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultPropertiesToLoad;
-(id)initWithCalendarIDs:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)predicateFormat;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADUPNEXTEVENTSPREDICATE_H
#define CADUPNEXTEVENTSPREDICATE_H



#import "EKPredicate.h"

@interface CADUpNextEventsPredicate : EKPredicate

@property (nonatomic) CGFloat startDateRestrictionThreshold; // ivar: _startDateRestrictionThreshold


+(BOOL)_occurrencePassesFilter:(struct CalEventOccurrence *)arg0 event:(*void)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)_descriptionForOccurrence:(struct CalEventOccurrence *)arg0 ofEvent:(*void)arg1 ;
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
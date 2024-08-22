// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CADCONTACTEVENTSPREDICATE_H
#define CADCONTACTEVENTSPREDICATE_H

@class NSSet;


#import "EKPredicate.h"

@interface CADContactEventsPredicate : EKPredicate

@property (retain) NSSet *contactEmailAddresses; // ivar: _contactEmailAddresses
@property (retain) NSSet *contactNameComponents; // ivar: _contactNameComponents


+(BOOL)supportsSecureCoding;
-(BOOL)_isCandidate:(*void)arg0 allowAllDayEvent:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultPropertiesToLoad;
-(id)initWithCalendarIDs:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 contacts:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)predicateFormat;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
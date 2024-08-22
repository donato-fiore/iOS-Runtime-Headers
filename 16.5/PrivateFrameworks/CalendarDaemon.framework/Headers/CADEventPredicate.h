// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADEVENTPREDICATE_H
#define CADEVENTPREDICATE_H

@class NSString, NSTimeZone;
@protocol NSSecureCoding;


#import "EKPredicate.h"

@interface CADEventPredicate : EKPredicate <NSSecureCoding>



@property (readonly, nonatomic) NSString *eventUUID;
@property (nonatomic) BOOL excludeAllDayEvents; // ivar: _excludeAllDayEvents
@property (nonatomic) BOOL excludeDeclined; // ivar: _excludeDeclined
@property (nonatomic) BOOL excludeDeclinedUnlessProposed; // ivar: _excludeDeclinedUnlessProposed
@property (nonatomic) BOOL excludeProposed; // ivar: _excludeProposed
@property (nonatomic) BOOL excludeTimedEvents; // ivar: _excludeTimedEvents
@property (readonly, nonatomic) NSUInteger propertyLoadMode; // ivar: _propertyLoadMode
@property (readonly, nonatomic) BOOL shouldLoadProposedTimesInRange; // ivar: _shouldLoadProposedTimesInRange
@property (readonly, nonatomic) NSTimeZone *timeZone;


+(BOOL)supportsSecureCoding;
+(id)predicateWithStartDate:(id)arg0 endDate:(id)arg1 timeZone:(id)arg2 calendars:(id)arg3 ;
+(id)predicateWithStartDate:(id)arg0 endDate:(id)arg1 timeZone:(id)arg2 calendars:(id)arg3 propertyLoadMode:(NSUInteger)arg4 ;
+(id)predicateWithStartDate:(id)arg0 endDate:(id)arg1 timeZone:(id)arg2 eventUUID:(id)arg3 calendars:(id)arg4 ;
+(id)predicateWithStartDate:(id)arg0 title:(id)arg1 calendars:(id)arg2 ;
-(?)copyMatchingItemsWithDatabase;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultPropertiesToLoad;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 timeZone:(id)arg2 calendars:(id)arg3 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 timeZone:(id)arg2 calendars:(id)arg3 propertyLoadMode:(NSUInteger)arg4 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 timeZone:(id)arg2 eventUUID:(id)arg3 calendars:(id)arg4 ;
-(id)initWithStartDate:(id)arg0 title:(id)arg1 calendars:(id)arg2 ;
-(id)predicateFormat;
-(id)relatedObjectPropertiesToLoad;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
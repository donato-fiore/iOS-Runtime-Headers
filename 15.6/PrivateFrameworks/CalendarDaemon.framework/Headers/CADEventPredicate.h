// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CADEVENTPREDICATE_H
#define CADEVENTPREDICATE_H

@class NSString, NSTimeZone;
@protocol EKDefaultPropertiesLoading, NSSecureCoding;


#import "EKPredicate.h"

@interface CADEventPredicate : EKPredicate <EKDefaultPropertiesLoading, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *eventUUID;
@property (nonatomic) BOOL excludeAllDayEvents; // ivar: _excludeAllDayEvents
@property (nonatomic) BOOL excludeDeclined; // ivar: _excludeDeclined
@property (nonatomic) BOOL excludeDeclinedUnlessProposed; // ivar: _excludeDeclinedUnlessProposed
@property (nonatomic) BOOL excludeProposed; // ivar: _excludeProposed
@property (nonatomic) BOOL excludeTimedEvents; // ivar: _excludeTimedEvents
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL shouldLoadDefaultProperties; // ivar: _shouldLoadDefaultProperties
@property (readonly, nonatomic) BOOL shouldLoadProposedTimesInRange; // ivar: _shouldLoadProposedTimesInRange
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSTimeZone *timeZone;


+(BOOL)supportsSecureCoding;
+(id)predicateWithStartDate:(id)arg0 endDate:(id)arg1 timeZone:(id)arg2 calendars:(id)arg3 ;
+(id)predicateWithStartDate:(id)arg0 endDate:(id)arg1 timeZone:(id)arg2 calendars:(id)arg3 loadDefaultProperties:(BOOL)arg4 ;
+(id)predicateWithStartDate:(id)arg0 endDate:(id)arg1 timeZone:(id)arg2 eventUUID:(id)arg3 calendars:(id)arg4 ;
+(id)predicateWithStartDate:(id)arg0 title:(id)arg1 calendars:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultPropertiesToLoad;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 timeZone:(id)arg2 calendars:(id)arg3 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 timeZone:(id)arg2 calendars:(id)arg3 loadDefaultProperties:(BOOL)arg4 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 timeZone:(id)arg2 eventUUID:(id)arg3 calendars:(id)arg4 ;
-(id)initWithStartDate:(id)arg0 title:(id)arg1 calendars:(id)arg2 ;
-(id)predicateFormat;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
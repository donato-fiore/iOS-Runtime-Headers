// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSDISCOVERABILITYUSAGEEVENT_H
#define TPSDISCOVERABILITYUSAGEEVENT_H

@class NSString, NSDate, NSArray;

#import <Foundation/Foundation.h>


@interface TPSDiscoverabilityUsageEvent : NSObject

@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *contentIdentifier; // ivar: _contentIdentifier
@property (copy, nonatomic) NSString *context; // ivar: _context
@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic) NSUInteger displayType; // ivar: _displayType
@property (copy, nonatomic) NSArray *eligibleContext; // ivar: _eligibleContext
@property (nonatomic) NSUInteger flags; // ivar: _flags
@property (nonatomic) NSInteger ineligibleReason; // ivar: _ineligibleReason
@property (nonatomic) NSInteger state; // ivar: _state


+(id)_eventWithContentIdentifier:(id)arg0 bundleIdentifier:(id)arg1 displayType:(NSUInteger)arg2 eligibleContext:(id)arg3 context:(id)arg4 state:(NSInteger)arg5 date:(id)arg6 ;
+(id)contentViewedEventWithContentIdentifer:(id)arg0 bundleIdentifier:(id)arg1 type:(NSUInteger)arg2 date:(id)arg3 ;
+(id)eligibleEventWithContentIdentifer:(id)arg0 bundleIdentifier:(id)arg1 type:(NSUInteger)arg2 eligibleContext:(id)arg3 date:(id)arg4 ;
+(id)eligibleEventWithContentIdentifer:(id)arg0 bundleIdentifier:(id)arg1 type:(NSUInteger)arg2 flags:(NSUInteger)arg3 eligibleContext:(id)arg4 date:(id)arg5 ;
+(id)hintDisplayedEventWithContentIdentifer:(id)arg0 bundleIdentifier:(id)arg1 type:(NSUInteger)arg2 context:(id)arg3 date:(id)arg4 ;
+(id)hintDisplayedEventWithContentIdentifer:(id)arg0 bundleIdentifier:(id)arg1 type:(NSUInteger)arg2 flags:(NSUInteger)arg3 context:(id)arg4 date:(id)arg5 ;
+(id)ineligibleEventWithContentIdentifer:(id)arg0 bundleIdentifier:(id)arg1 type:(NSUInteger)arg2 context:(id)arg3 reason:(NSInteger)arg4 date:(id)arg5 ;
+(id)performedOutcomeEventWithContentIdentifer:(id)arg0 bundleIdentifier:(id)arg1 type:(NSUInteger)arg2 context:(id)arg3 date:(id)arg4 ;
-(id)debugDescription;
-(id)initWithContentIdentifier:(id)arg0 bundleIdentifier:(id)arg1 displayType:(NSUInteger)arg2 eligibleContext:(id)arg3 context:(id)arg4 state:(NSInteger)arg5 date:(id)arg6 ;


@end


#endif
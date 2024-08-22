// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTTRIGGER_H
#define MTTRIGGER_H

@class NSString, NSDate;
@protocol BSDescriptionProviding, NAEquatable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MTTrigger : NSObject <BSDescriptionProviding, NAEquatable, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isBedtimeRelated;
@property (readonly, nonatomic) BOOL isEvent;
@property (readonly, nonatomic) BOOL isForAlert;
@property (readonly, nonatomic) BOOL isForGoToBed;
@property (readonly, nonatomic) BOOL isForNotification;
@property (readonly, nonatomic) BOOL isForSnooze;
@property (readonly, nonatomic) BOOL isPastOverrideEvent; // ivar: _isPastOverrideEvent
@property (readonly, nonatomic) BOOL isScheduled;
@property (readonly, nonatomic) BOOL isWakeUpRelated;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *triggerDate; // ivar: _triggerDate
@property (nonatomic) NSUInteger triggerType; // ivar: _triggerType


+(BOOL)supportsSecureCoding;
+(id)_stringForType:(NSUInteger)arg0 ;
+(id)triggerWithDate:(id)arg0 triggerType:(NSUInteger)arg1 ;
+(id)triggerWithDate:(id)arg0 triggerType:(NSUInteger)arg1 isPastOverrideEvent:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTrigger:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 type:(NSUInteger)arg1 ;
-(id)initWithDate:(id)arg0 type:(NSUInteger)arg1 isPastOverrideEvent:(BOOL)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSBEHAVIOR_H
#define CSBEHAVIOR_H

@class NSString;
@protocol BSDescriptionProviding, CSBehaviorProviding, SBFIdleTimerBehaviorProviding, NSCopying;

#import <Foundation/Foundation.h>


@interface CSBehavior : NSObject <BSDescriptionProviding, CSBehaviorProviding, SBFIdleTimerBehaviorProviding, NSCopying>



@property (readonly, nonatomic) CGFloat customIdleExpirationTimeout;
@property (readonly, nonatomic) CGFloat customIdleWarningTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger idleTimerDuration; // ivar: _idleTimerDuration
@property (nonatomic) NSInteger idleTimerMode; // ivar: _idleTimerMode
@property (nonatomic) NSInteger idleWarnMode; // ivar: _idleWarnMode
@property (nonatomic) NSInteger notificationBehavior; // ivar: _notificationBehavior
@property (nonatomic) NSInteger proximityDetectionMode; // ivar: _proximityDetectionMode
@property (nonatomic) NSUInteger restrictedCapabilities; // ivar: _restrictedCapabilities
@property (nonatomic) NSInteger scrollingStrategy; // ivar: _scrollingStrategy
@property (readonly) Class superclass;


+(id)behavior;
+(id)behaviorForProvider:(id)arg0 ;
-(BOOL)areRestrictedCapabilities:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToBehavior:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)addRestrictedCapabilities:(NSUInteger)arg0 ;
-(void)conformsToCSBehaviorProviding;
-(void)removeRestrictedCapabilities:(NSUInteger)arg0 ;
-(void)reset;
-(void)unionBehavior:(id)arg0 ;


@end


#endif
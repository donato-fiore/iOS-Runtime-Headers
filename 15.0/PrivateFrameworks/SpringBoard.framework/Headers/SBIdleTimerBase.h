// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBIDLETIMERBASE_H
#define SBIDLETIMERBASE_H

@class NSString, NSHashTable;
@protocol SBIdleTimerActivation, SBIdleTimer;

#import <Foundation/Foundation.h>


@interface SBIdleTimerBase : NSObject <SBIdleTimerActivation, SBIdleTimer>



@property (nonatomic, getter=isActivated) BOOL activated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly) Class superclass;


-(BOOL)isEqualToTimer:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_enumerateObserversRespondingToSelector:(SEL)arg0 usingBlock:(id)arg1 ;
-(void)_logExpirationTimeout:(CGFloat)arg0 ;
-(void)_makeObserversPerformSelector:(SEL)arg0 ;
-(void)addIdleTimerObserver:(id)arg0 ;
-(void)conformsToSBIdleTimerActivation;
-(void)removeAllIdleTimerObservers;
-(void)removeIdleTimerObserver:(id)arg0 ;
-(void)reset;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSTARTUPTRANSITIONCONTROLLER_H
#define SBSTARTUPTRANSITIONCONTROLLER_H

@class BSTransactionBlockObserver, NSSet, NSString, BSTransaction<SBStartupTransition>;
@protocol BSTransactionObserver, BSDescriptionProviding, BSTransactionObserver;

#import <Foundation/Foundation.h>

#import "SBInitialRestartState.h"
#import "SBStartupTransitionContextPersistence.h"
#import "SBStartupTransitionFactory.h"

@interface SBStartupTransitionController : NSObject <BSTransactionObserver, BSDescriptionProviding, BSTransactionObserver>

 {
    SBInitialRestartState *_initialRestartState;
    BSTransactionBlockObserver *_transitionObserver;
    BOOL _ranOnce;
    NSSet *_renderOverlayDismissActions;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BSTransaction<SBStartupTransition> *startupTransition; // ivar: _transition
@property (readonly) Class superclass;
@property (retain, nonatomic, getter=_transitionContextPersistence, setter=_setTransitionContextPersistence:) SBStartupTransitionContextPersistence *transitionContextPersistence; // ivar: _transitionContextPersistence
@property (retain, nonatomic, getter=_transitionFactory, setter=_setTransitionFactory:) SBStartupTransitionFactory *transitionFactory; // ivar: _transitionFactory


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithInitialRestartState:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_saveContextFromTransitionContext:(id)arg0 ;
-(void)initializeAndRunStartupTransition:(id)arg0 ;
-(void)transactionDidBegin:(id)arg0 ;
-(void)transactionDidComplete:(id)arg0 ;


@end


#endif
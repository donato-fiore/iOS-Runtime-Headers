// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCOFFERPRESENTER_H
#define ASCOFFERPRESENTER_H

@class NSString;
@protocol ASCAppOfferStateMachineDelegate, ASCOfferPresenterObserver, ASCOffer, ASCOfferPresenterView;

#import <Foundation/Foundation.h>

#import "ASCPresenterContext.h"
#import "ASCAppOfferStateMachine.h"
#import "ASCOfferPresenterViewState.h"

@interface ASCOfferPresenter : NSObject <ASCAppOfferStateMachineDelegate>



@property (readonly, nonatomic) ASCPresenterContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *mostRecentAppState; // ivar: _mostRecentAppState
@property (weak, nonatomic) NSObject<ASCOfferPresenterObserver> *observer; // ivar: _observer
@property (copy, nonatomic) NSObject<ASCOffer> *offer; // ivar: _offer
@property (retain, nonatomic) ASCAppOfferStateMachine *offerStateMachine; // ivar: _offerStateMachine
@property (retain, nonatomic) ASCOfferPresenterViewState *savedStateForConfirm; // ivar: _savedStateForConfirm
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) NSObject<ASCOfferPresenterView> *view; // ivar: _view


-(BOOL)clearConfirmForNewStateIfNeeded;
-(BOOL)confirmOfferActionIfNeeded;
-(id)initWithView:(id)arg0 ;
-(id)initWithView:(id)arg0 context:(id)arg1 ;
-(void)offerStateDidChange:(id)arg0 withMetadata:(id)arg1 isActionable:(BOOL)arg2 ;
-(void)offerStatusTextDidChange:(id)arg0 ;
-(void)performOfferAction;


@end


#endif
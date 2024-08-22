// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCAPPOFFERSTATEMACHINE_H
#define ASCAPPOFFERSTATEMACHINE_H

@class NSMutableArray, NSString;
@protocol ASCOffer;

#import <Foundation/Foundation.h>

#import "ASCAppOfferSavedState.h"
#import "ASCAppOfferStateCenter.h"

@interface ASCAppOfferStateMachine : NSObject

@property (readonly, nonatomic) NSMutableArray *delegates; // ivar: _delegates
@property (retain, nonatomic) ASCAppOfferSavedState *mostRecentState; // ivar: _mostRecentState
@property (copy, nonatomic) NSString *mostRecentStatusText; // ivar: _mostRecentStatusText
@property (readonly, nonatomic) NSObject<ASCOffer> *offer; // ivar: _offer
@property (readonly, weak, nonatomic) ASCAppOfferStateCenter *stateCenter; // ivar: _stateCenter


-(id)initWithOffer:(id)arg0 stateCenter:(id)arg1 ;
-(id)performActionWithActivity:(id)arg0 ;
-(void)addDelegate:(id)arg0 ;
-(void)dealloc;
-(void)enumerateDelegatesUsingBlock:(id)arg0 ;
-(void)offerStateDidChange:(id)arg0 withMetadata:(id)arg1 flags:(NSInteger)arg2 ;
-(void)offerStatusTextDidChange:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;


@end


#endif
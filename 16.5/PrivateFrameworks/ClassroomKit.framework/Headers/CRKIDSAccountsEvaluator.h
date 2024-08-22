// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKIDSACCOUNTSEVALUATOR_H
#define CRKIDSACCOUNTSEVALUATOR_H

@class NSArray;
@protocol CRKIDSLocalPrimitives;

#import <Foundation/Foundation.h>

#import "CRKIDSAccountsState.h"

@interface CRKIDSAccountsEvaluator : NSObject

@property (readonly, nonatomic) NSObject<CRKIDSLocalPrimitives> *IDSLocalPrimitives; // ivar: _IDSLocalPrimitives
@property (copy, nonatomic) NSArray *observedAccounts; // ivar: _observedAccounts
@property (retain, nonatomic) CRKIDSAccountsState *state; // ivar: _state


-(id)initWithIDSLocalPrimitives:(id)arg0 ;
-(void)beginObservingAccounts:(id)arg0 ;
-(void)beginObservingKnownAccountChanges;
-(void)dealloc;
-(void)endObservingAccounts:(id)arg0 ;
-(void)endObservingKnownAccountChanges;
-(void)knownAccountsDidChange;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)observedAccountDidChange:(id)arg0 ;
-(void)updateState;


@end


#endif
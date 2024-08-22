// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FAPEERPAYMENTHOOK_H
#define FAPEERPAYMENTHOOK_H

@class NSString, RUIObjectModel, RUIServerHookResponse;
@protocol AAUIServerHook, RUIServerHookDelegate;

#import <Foundation/Foundation.h>

#import "FAAppleCashPresentationHandler.h"

@interface FAPeerPaymentHook : NSObject <AAUIServerHook>



@property (retain, nonatomic) FAAppleCashPresentationHandler *appleCashPresentationHandler; // ivar: _appleCashPresentationHandler
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RUIServerHookDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RUIObjectModel *objectModel;
@property (retain, nonatomic) RUIServerHookResponse *serverHookResponse;
@property (readonly) Class superclass;


-(BOOL)shouldMatchElement:(id)arg0 ;
-(BOOL)shouldMatchModel:(id)arg0 ;
-(void)_handlePeerPaymentActionWithAttributes:(id)arg0 completion:(id)arg1 ;
-(void)processElement:(id)arg0 attributes:(id)arg1 objectModel:(id)arg2 completion:(id)arg3 ;
-(void)processObjectModel:(id)arg0 completion:(id)arg1 ;


@end


#endif
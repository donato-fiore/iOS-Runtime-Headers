// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKFIDOHOOK_H
#define AKFIDOHOOK_H

@class ACAccount, NSString, RUIObjectModel, RUIServerHookResponse;
@protocol RUIServerHook, RUIServerHookDelegate;

#import <Foundation/Foundation.h>


@interface AKFidoHook : NSObject <RUIServerHook>



@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RUIServerHookDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RUIObjectModel *objectModel;
@property (retain, nonatomic) RUIServerHookResponse *serverHookResponse; // ivar: _serverHookResponse
@property (readonly) Class superclass;


-(BOOL)_isUserCancelError:(id)arg0 ;
-(BOOL)shouldMatchElement:(id)arg0 ;
-(BOOL)shouldMatchModel:(id)arg0 ;
-(id)initWithAccount:(id)arg0 ;
-(void)_startFidoRegistrationWithAttributes:(id)arg0 completion:(id)arg1 ;
-(void)_startFidoVerificationWithAttributes:(id)arg0 completion:(id)arg1 ;
-(void)processElement:(id)arg0 attributes:(id)arg1 objectModel:(id)arg2 completion:(id)arg3 ;
-(void)processObjectModel:(id)arg0 completion:(id)arg1 ;


@end


#endif
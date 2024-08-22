// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FAINVOKEMESSAGEHOOK_H
#define FAINVOKEMESSAGEHOOK_H

@class FAInviteContext, NSString, RUIObjectModel, AAUIServerHookResponse;
@protocol FAInviteControllerDelegate, AAUIServerHook, FAInviteConfigurationController, AAUIServerHookDelegate;

#import <Foundation/Foundation.h>

#import "FACircleRemoteUIDelegate.h"

@interface FAInvokeMessageHook : NSObject <FAInviteControllerDelegate, AAUIServerHook>

 {
    NSObject<FAInviteConfigurationController> *_messageConfigurationController;
    FAInviteContext *_testContext;
    id *_completion;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUIServerHookDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RUIObjectModel *objectModel; // ivar: _objectModel
@property (weak, nonatomic) FACircleRemoteUIDelegate *remoteUIDelegate; // ivar: _remoteUIDelegate
@property (retain, nonatomic) AAUIServerHookResponse *serverHookResponse; // ivar: _serverHookResponse
@property (readonly) Class superclass;


-(BOOL)shouldMatchElement:(id)arg0 ;
-(BOOL)shouldMatchModel:(id)arg0 ;
-(NSInteger)transportWithActionString:(id)arg0 ;
-(id)_stringForCompletionStatus:(NSUInteger)arg0 ;
-(void)_presentMessagesInviteWithServerAttributes:(id)arg0 transport:(NSInteger)arg1 sourceView:(id)arg2 completion:(id)arg3 ;
-(void)dismissWithUserInfo:(id)arg0 ;
-(void)inviteController:(id)arg0 didFinishWithStatus:(NSUInteger)arg1 recipients:(id)arg2 userInfo:(id)arg3 error:(id)arg4 ;
-(void)inviteControllerDidEndAsyncLoading:(id)arg0 ;
-(void)inviteControllerDidStartAsyncLoading:(id)arg0 ;
-(void)processElement:(id)arg0 attributes:(id)arg1 objectModel:(id)arg2 completion:(id)arg3 ;
-(void)processObjectModel:(id)arg0 completion:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUIINVITEMESSAGEFLOWCONTROLLER_H
#define AAUIINVITEMESSAGEFLOWCONTROLLER_H

@class AAMessagesInviteContext, NSString, UINavigationController;
@protocol AAUIInviteControllerDelegate, AAUIOBWelcomeControllerViewModelProtocol, AAUIInviteMessageFlowControllerDelegate;

#import <Foundation/Foundation.h>

#import "AAUIMessagesInviteConfigurationController.h"
#import "AAUISpinnerManager.h"

@interface AAUIInviteMessageFlowController : NSObject <AAUIInviteControllerDelegate>

 {
    NSUInteger _flow;
    AAMessagesInviteContext *_context;
    NSString *_recipientHandle;
    id<AAUIOBWelcomeControllerViewModelProtocol> *_defaultMessageViewModel;
    id<AAUIOBWelcomeControllerViewModelProtocol> *_messageSentViewModel;
    AAUIMessagesInviteConfigurationController *_messageComposer;
    AAUISpinnerManager *_spinnerManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUIInviteMessageFlowControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideCancel; // ivar: _hideCancel
@property (retain, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (readonly) Class superclass;


-(id)_bubbleImageForFlow:(NSUInteger)arg0 ;
-(id)initWithContext:(id)arg0 flow:(NSUInteger)arg1 navigationController:(id)arg2 defaultMessageViewModel:(id)arg3 messageSentViewModel:(id)arg4 ;
-(void)_cancelMessageInvitationFlow;
-(void)_finishMessageInvitationFlow;
-(void)_hideActivitySpinnerInNavigationBar;
-(void)_invitationWasSent;
-(void)_messageSentSecondaryActionTapped;
-(void)_sendDefaultMessage;
-(void)_showActivitySpinnerInNavigationBar;
-(void)_showDefaultMessageView;
-(void)_showInvitationSent;
-(void)_showMessagesComposeController;
-(void)inviteController:(id)arg0 didFinishWithStatus:(NSUInteger)arg1 recipients:(id)arg2 userInfo:(id)arg3 error:(id)arg4 ;
-(void)start;


@end


#endif
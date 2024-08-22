// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAUIMESSAGESINVITECONFIGURATIONCONTROLLER_H
#define AAUIMESSAGESINVITECONFIGURATIONCONTROLLER_H

@class MFMessageComposeViewController, LPLinkMetadata, UIViewController, NSArray, AAMessagesInviteContext, NSString;
@protocol MFMessageComposeViewControllerInternalDelegate, AAUIOBWelcomeControllerDelegate, AAUIInviteConfigurationController, AAUIInviteControllerDelegate;

#import <Foundation/Foundation.h>


@interface AAUIMessagesInviteConfigurationController : NSObject <MFMessageComposeViewControllerInternalDelegate, AAUIOBWelcomeControllerDelegate, AAUIInviteConfigurationController>

 {
    NSUInteger _flow;
    MFMessageComposeViewController *_messageComposeViewController;
    LPLinkMetadata *_linkMetadata;
    UIViewController *_presentingViewController;
    NSArray *_recipientAddresses;
}


@property (readonly, nonatomic) AAMessagesInviteContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUIInviteControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isAvailable;
-(id)_bubbleImageForFlow:(NSUInteger)arg0 ;
-(id)_messageComposeViewController;
-(id)initWithInviteContext:(id)arg0 flow:(NSUInteger)arg1 presentingController:(id)arg2 ;
-(void)_presentInviteControllerWithCompletion:(id)arg0 ;
-(void)messageComposeViewController:(id)arg0 didFinishWithResult:(NSInteger)arg1 ;
-(void)messageComposeViewController:(id)arg0 shouldSendMessage:(id)arg1 toRecipients:(id)arg2 completion:(id)arg3 ;
-(void)presentWhenReadyWithCompletion:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FAMESSAGESINVITECONFIGURATIONCONTROLLER_H
#define FAMESSAGESINVITECONFIGURATIONCONTROLLER_H

@class MFMessageComposeViewController, LPLinkMetadata, UIViewController, NSArray, FAInviteContext, NSString;
@protocol MFMessageComposeViewControllerInternalDelegate, FAInviteConfigurationController, FAInviteControllerDelegate;

#import <Foundation/Foundation.h>


@interface FAMessagesInviteConfigurationController : NSObject <MFMessageComposeViewControllerInternalDelegate, FAInviteConfigurationController>

 {
    MFMessageComposeViewController *_messageComposeViewController;
    LPLinkMetadata *_linkMetadata;
    UIViewController *_presentationContext;
    NSArray *_recipientAddresses;
}


@property (readonly, nonatomic) FAInviteContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FAInviteControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isAvailable;
-(id)_messageComposeViewController;
-(id)initWithInviteContext:(id)arg0 presentingController:(id)arg1 ;
-(void)_presentInviteControllerWithCompletion:(id)arg0 ;
-(void)messageComposeViewController:(id)arg0 didFinishWithResult:(NSInteger)arg1 ;
-(void)messageComposeViewController:(id)arg0 shouldSendMessage:(id)arg1 toRecipients:(id)arg2 completion:(id)arg3 ;
-(void)presentWhenReadyWithCompletion:(id)arg0 ;


@end


#endif
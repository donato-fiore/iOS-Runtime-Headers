// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FAMAILINVITECONFIGURATIONCONTROLLER_H
#define FAMAILINVITECONFIGURATIONCONTROLLER_H

@class MFMailComposeViewController, UIViewController, LPLinkMetadata, NSArray, NSString, FAInviteContext;
@protocol MFMailComposeViewControllerDelegate, FAInviteConfigurationController, FAInviteControllerDelegate;

#import <Foundation/Foundation.h>

#import "FAInviteRecipientEvaluator.h"

@interface FAMailInviteConfigurationController : NSObject <MFMailComposeViewControllerDelegate, FAInviteConfigurationController>

 {
    MFMailComposeViewController *_mailComposeViewController;
    UIViewController *_presentationContext;
    LPLinkMetadata *_linkMetadata;
    NSArray *_recipientAddresses;
    FAInviteRecipientEvaluator *_inviteRecipientEvaluator;
    NSString *_familySuggestionEmailAddress;
}


@property (readonly, nonatomic) FAInviteContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FAInviteControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isAvailable;
-(id)_mailComposeViewController;
-(id)initWithInviteContext:(id)arg0 presentingController:(id)arg1 email:(id)arg2 ;
-(void)_presentInviteControllerWithCompletion:(id)arg0 ;
-(void)mailComposeController:(id)arg0 didFinishWithResult:(NSInteger)arg1 error:(id)arg2 ;
-(void)mailComposeController:(id)arg0 shouldSendMail:(id)arg1 toRecipients:(id)arg2 completion:(id)arg3 ;
-(void)presentWhenReadyWithCompletion:(id)arg0 ;


@end


#endif
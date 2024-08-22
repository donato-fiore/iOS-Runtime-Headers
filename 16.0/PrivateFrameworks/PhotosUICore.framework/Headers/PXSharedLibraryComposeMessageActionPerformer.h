// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYCOMPOSEMESSAGEACTIONPERFORMER_H
#define PXSHAREDLIBRARYCOMPOSEMESSAGEACTIONPERFORMER_H

@class NSURL, NSString, NSArray, MFMessageComposeViewController;
@protocol MFMessageComposeViewControllerDelegate;


#import "PXActionPerformer.h"

@interface PXSharedLibraryComposeMessageActionPerformer : PXActionPerformer <MFMessageComposeViewControllerDelegate>

 {
    NSURL *_invitationURL;
    NSString *_displayName;
    NSArray *_recipients;
    MFMessageComposeViewController *_messageComposeViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)messageComposeViewController:(id)arg0 didFinishWithResult:(NSInteger)arg1 ;
-(void)performActionWithInvitationURL:(id)arg0 originatorDisplayName:(id)arg1 recipients:(id)arg2 completionHandler:(id)arg3 ;
-(void)performUserInteractionTask;


@end


#endif
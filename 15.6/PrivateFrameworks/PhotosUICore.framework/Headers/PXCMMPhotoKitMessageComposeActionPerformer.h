// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCMMPHOTOKITMESSAGECOMPOSEACTIONPERFORMER_H
#define PXCMMPHOTOKITMESSAGECOMPOSEACTIONPERFORMER_H

@class MFMessageComposeViewController, NSString;
@protocol MFMessageComposeViewControllerDelegate;


#import "PXCMMShowMessageComposeActionPerformer.h"

@interface PXCMMPhotoKitMessageComposeActionPerformer : PXCMMShowMessageComposeActionPerformer <MFMessageComposeViewControllerDelegate>

 {
    MFMessageComposeViewController *_messageComposeViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)messageComposeViewController:(id)arg0 didFinishWithResult:(NSInteger)arg1 ;
-(void)performUserInteractionTask;


@end


#endif
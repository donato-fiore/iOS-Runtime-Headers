// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTMESSAGECOMPOSECONTROLLER_H
#define PKPEERPAYMENTMESSAGECOMPOSECONTROLLER_H

@class UIViewController, NSString, MSMessage;
@protocol MFMessageComposeViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface PKPeerPaymentMessageComposeController : NSObject <MFMessageComposeViewControllerDelegate>

 {
    id *_completionHandler;
}


@property (weak, nonatomic) UIViewController *currentHostController; // ivar: _currentHostController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MSMessage *message; // ivar: _message
@property (readonly, copy, nonatomic) NSString *recipientAddress; // ivar: _recipientAddress
@property (readonly) Class superclass;


-(id)initWithMessage:(id)arg0 recipientAddress:(id)arg1 ;
-(void)messageComposeViewController:(id)arg0 didFinishWithResult:(NSInteger)arg1 ;
// -(void)presentMessageOverController:(id)arg0 presentationHandler:(id)arg1 completionHandler:(unk)arg2  ;


@end


#endif
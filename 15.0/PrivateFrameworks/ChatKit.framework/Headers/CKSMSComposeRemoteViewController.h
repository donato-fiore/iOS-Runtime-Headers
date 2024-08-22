// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKSMSCOMPOSEREMOTEVIEWCONTROLLER_H
#define CKSMSCOMPOSEREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol CKSMSComposeRemoteViewControllerDelegate;



@interface CKSMSComposeRemoteViewController : UIRemoteViewController <CKSMSComposeRemoteViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKSMSComposeRemoteViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)requestViewControllerWithConnectionHandler:(id)arg0 ;
+(id)serviceViewControllerInterface;
-(BOOL)_canShowWhileLocked;
-(void)dealloc;
-(void)smsComposeControllerAppeared;
-(void)smsComposeControllerCancelled;
-(void)smsComposeControllerDataInserted;
-(void)smsComposeControllerEntryViewContentInserted;
-(void)smsComposeControllerSendStartedWithText:(id)arg0 ;
-(void)smsComposeControllerShouldSendMessageWithText:(id)arg0 toRecipients:(id)arg1 completion:(id)arg2 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif
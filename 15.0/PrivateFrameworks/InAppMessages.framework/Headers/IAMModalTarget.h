// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IAMMODALTARGET_H
#define IAMMODALTARGET_H

@class NSString, NSDictionary;
@protocol IAMWebMessagePresentationCoordinatorDelegate, IAMMessageGroupInternalDelegate, IAMMessageTarget;

#import <Foundation/Foundation.h>

#import "IAMMessageCoordinator.h"
#import "IAMWebMessagePresentationCoordinator.h"
#import "IAMPresentingModalMessageContext.h"

@interface IAMModalTarget : NSObject <IAMWebMessagePresentationCoordinatorDelegate, IAMMessageGroupInternalDelegate, IAMMessageTarget>

 {
    IAMMessageCoordinator *_messageCoordinator;
    IAMWebMessagePresentationCoordinator *_webMessagePresentationCoordinator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *messageGroupsByGroupIdentifier; // ivar: _messageGroupsByGroupIdentifier
@property (retain, nonatomic) IAMPresentingModalMessageContext *presentingMessageContext; // ivar: _presentingMessageContext
@property (readonly, nonatomic) BOOL shouldBeNotifiedOfNilPriorityMessageAfterRegistration;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *targetIdentifier; // ivar: _targetIdentifier


+(BOOL)isAnyModalTargetPresentingMessage;
+(void)initialize;
-(id)_applicationViewControllerForModalPresentation;
-(id)initWithMessageCoordinator:(id)arg0 targetIdentifier:(id)arg1 ;
-(id)viewControllerForModalPresentationUsingCoordinator:(id)arg0 ;
-(void)_handlePresentation:(id)arg0 ;
-(void)_handlePresentingMessageContextDidExpireBeforePresentation;
-(void)_presentMessage:(id)arg0 messageEntry:(id)arg1 fromViewController:(id)arg2 withCompletion:(id)arg3 ;
-(void)_presentWebModalMessageEntry:(id)arg0 withCompletion:(id)arg1 ;
-(void)_reportMessageDidAppearWithIdentifier:(id)arg0 ;
-(void)_reportMessageDidDisappearWithIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)messageCoordinator:(id)arg0 didUpdatePriorityMessage:(id)arg1 forTarget:(id)arg2 ;
-(void)messageCoordinator:(id)arg0 didUpdatePriorityMessage:(id)arg1 fromMessageEntry:(id)arg2 forTarget:(id)arg3 withCompletion:(id)arg4 ;
-(void)messageGroup:(id)arg0 didReportModalMessagePresentationFailedWithIdentifier:(id)arg1 ;
-(void)messageGroup:(id)arg0 didReportModalMessageWasDismissedWithIdentifier:(id)arg1 ;
-(void)messageGroup:(id)arg0 didReportModalMessageWasPresentedWithIdentifier:(id)arg1 ;
-(void)messageGroup:(id)arg0 didReportModalMessageWithIdentifier:(id)arg1 actionWasPerformedWithIdentifier:(id)arg2 ;
-(void)presentationControllerDismissalTransitionDidEnd:(id)arg0 ;
-(void)webMessagePresentationCoordinatorWebMessageDidFail:(id)arg0 ;
-(void)webMessagePresentationCoordinatorWebMessageDidFinishPresentation:(id)arg0 ;
-(void)webMessagePresentationCoordinatorWebMessageDidLoad:(id)arg0 ;
-(void)webMessagePresentationCoordinatorWebMessageDidReportEvent:(id)arg0 event:(id)arg1 ;
-(void)webMessagePresentationCoordinatorWebMessageDidRequestAction:(id)arg0 actionConfiguration:(id)arg1 ;


@end


#endif
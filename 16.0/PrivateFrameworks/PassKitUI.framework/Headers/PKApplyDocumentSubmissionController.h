// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAPPLYDOCUMENTSUBMISSIONCONTROLLER_H
#define PKAPPLYDOCUMENTSUBMISSIONCONTROLLER_H

@class UIViewController, PKApplyDocumentUploadPage;


#import "PKPaymentDocumentSubmissionController.h"
#import "PKApplyController.h"
#import "PKBusinessChatController.h"

@interface PKApplyDocumentSubmissionController : PKPaymentDocumentSubmissionController {
    PKApplyController *_applyController;
    UIViewController *_nextViewController;
    PKBusinessChatController *_businessChatController;
    PKApplyDocumentUploadPage *_documentPage;
    BOOL _isLoading;
    BOOL _isCancelling;
}




-(id)initWithController:(id)arg0 setupDelegate:(id)arg1 documentPage:(id)arg2 ;
-(id)nextViewController;
-(void)_cancelledConfirmed;
-(void)_featureApplicationUpdated;
-(void)contactApplePressed;
-(void)dealloc;
-(void)removeApplicationUpdateObserver;
-(void)reportAnalyticsEvent:(id)arg0 pageTag:(id)arg1 ;
-(void)uploadID;
-(void)userWantsToCancel;


@end


#endif
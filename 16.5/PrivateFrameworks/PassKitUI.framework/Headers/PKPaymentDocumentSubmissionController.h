// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTDOCUMENTSUBMISSIONCONTROLLER_H
#define PKPAYMENTDOCUMENTSUBMISSIONCONTROLLER_H

@class UIImage, UIViewController<PKPaymentDocumentSubmissionControllerDelegate>, NSBundle, NSString, PKDocumentRequest;
@protocol PKPaymentSetupViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface PKPaymentDocumentSubmissionController : NSObject

@property (retain, nonatomic) UIImage *backID; // ivar: _backID
@property (nonatomic) NSInteger context; // ivar: _context
@property (weak, nonatomic) UIViewController<PKPaymentDocumentSubmissionControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger featureIdentifier; // ivar: _featureIdentifier
@property (retain, nonatomic) UIImage *frontID; // ivar: _frontID
@property (readonly, nonatomic) NSBundle *localizationBundle; // ivar: _localizationBundle
@property (readonly, nonatomic) NSString *preferredLanguage; // ivar: _preferredLanguage
@property (retain, nonatomic) PKDocumentRequest *selectedDocument; // ivar: _selectedDocument
@property (weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *setupDelegate; // ivar: _setupDelegate
@property (nonatomic) NSInteger side; // ivar: _side
@property (nonatomic) NSInteger state; // ivar: _state


-(id)initWithSetupDelegate:(id)arg0 context:(NSInteger)arg1 acceptableDocuments:(id)arg2 featureIdentifier:(NSUInteger)arg3 localizationBundle:(id)arg4 preferredLanguage:(id)arg5 ;
-(id)nextViewController;
-(void)captureFailedWithError:(id)arg0 ;
-(void)capturedImage:(id)arg0 ;
-(void)contactApplePressed;
-(void)reportAnalyticsEvent:(id)arg0 pageTag:(id)arg1 ;
-(void)scanAgain;
-(void)terminateSetupFlow;
-(void)tryUploadAgain;
-(void)uploadID;
-(void)userApprovedCapturedID;
-(void)userRejectedCapturedID;
-(void)userWantsToCancel;
-(void)userWantsToContinue;


@end


#endif
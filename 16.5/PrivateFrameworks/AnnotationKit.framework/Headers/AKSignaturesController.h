// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKSIGNATURESCONTROLLER_H
#define AKSIGNATURESCONTROLLER_H

@class NSString;
@protocol UIPopoverPresentationControllerDelegate, AKSignaturesViewControllerDelegate, AKSignatureCreationControllerDelegate, AKSignaturesControllerDelegate;

#import <Foundation/Foundation.h>

#import "AKController.h"
#import "AKSignaturesPresentationContext.h"
#import "AKSignaturesViewController_iOS.h"
#import "AKSignatureCreationViewController_iOS.h"

@interface AKSignaturesController : NSObject <UIPopoverPresentationControllerDelegate, AKSignaturesViewControllerDelegate, AKSignatureCreationControllerDelegate>



@property (weak, nonatomic) AKController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AKSignaturesControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AKSignaturesPresentationContext *presentationContext; // ivar: _presentationContext
@property (retain, nonatomic) AKSignaturesViewController_iOS *signaturesAlertViewController; // ivar: _signaturesAlertViewController
@property (retain, nonatomic) AKSignatureCreationViewController_iOS *signaturesCreationViewController; // ivar: _signaturesCreationViewController
@property (retain, nonatomic) AKSignaturesViewController_iOS *signaturesSheetViewController; // ivar: _signaturesSheetViewController
@property (readonly) Class superclass;


-(id)initWithController:(id)arg0 ;
-(void)_continueToCreateSignature;
-(void)_continueToManageSignatures;
-(void)_notifyDidSelectSignature;
-(void)presentSignaturesViewController;
-(void)signatureCreationControllerDidCreateSignature:(id)arg0 ;
-(void)signatureCreationControllerDidDismiss:(id)arg0 ;
-(void)signaturesViewControllerContinueToCreateSignature:(id)arg0 ;
-(void)signaturesViewControllerDidCancel:(id)arg0 ;
-(void)signaturesViewControllerDidSelectSignature:(id)arg0 ;


@end


#endif
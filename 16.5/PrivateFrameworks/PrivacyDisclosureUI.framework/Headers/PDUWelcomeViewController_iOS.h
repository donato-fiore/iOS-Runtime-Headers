// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDUWELCOMEVIEWCONTROLLER_IOS_H
#define PDUWELCOMEVIEWCONTROLLER_IOS_H

@class OBWelcomeController, NSString;
@protocol PDUDisclosureReviewViewControllerDelegate, PDCApplicationIdentity, PDCApplicationRecord, PDUWelcomeViewControllerDelegate;



@interface PDUWelcomeViewController_iOS : OBWelcomeController <PDUDisclosureReviewViewControllerDelegate>

 {
    id<PDCApplicationIdentity> *_applicationIdentity;
    id<PDCApplicationRecord> *_applicationRecord;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PDUWelcomeViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(NSInteger)preferredUserInterfaceStyle;
-(id)_requestIconForApplication:(id)arg0 ;
-(id)initWithApplicationIdentity:(id)arg0 ;
-(void)cancelPressed;
-(void)continuePressed;
-(void)disclosureReviewViewControllerDidDismiss:(id)arg0 ;
-(void)learnMorePressed;
-(void)viewDidLoad;


@end


#endif
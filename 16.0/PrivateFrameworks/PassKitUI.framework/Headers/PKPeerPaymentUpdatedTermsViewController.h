// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENTUPDATEDTERMSVIEWCONTROLLER_H
#define PKPEERPAYMENTUPDATEDTERMSVIEWCONTROLLER_H

@class NSString;
@protocol PKExplanationViewControllerDelegate, PKPeerPaymentUpdatedTermsViewControllerDelegate;


#import "PKExplanationViewController.h"

@interface PKPeerPaymentUpdatedTermsViewController : PKExplanationViewController <PKExplanationViewControllerDelegate>

 {
    NSString *_uniqueID;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPeerPaymentUpdatedTermsViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPassUniqueID:(id)arg0 ;
-(void)explanationViewControllerDidSelectCancel:(id)arg0 ;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)loadView;
-(void)showSpinner:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif
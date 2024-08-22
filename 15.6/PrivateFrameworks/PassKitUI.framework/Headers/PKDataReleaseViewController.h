// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDATARELEASEVIEWCONTROLLER_H
#define PKDATARELEASEVIEWCONTROLLER_H

@class NSString;
@protocol PKDataReleaseContentViewControllerDelegate, PKDataReleaseViewControllerDelegate;


#import "PKPaymentAuthorizationServiceCompactNavigationContainerController.h"
#import "PKDataReleaseContentViewController.h"

@interface PKDataReleaseViewController : PKPaymentAuthorizationServiceCompactNavigationContainerController <PKDataReleaseContentViewControllerDelegate>

 {
    id<PKDataReleaseViewControllerDelegate> *_dataReleaseDelegate;
    PKDataReleaseContentViewController *_vc;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithRequest:(id)arg0 delegate:(id)arg1 ;
-(void)_updatePhysicalButtonWithVC:(id)arg0 ;
-(void)dataReleaseCompletedWithError:(id)arg0 ;
-(void)dataReleaseContentViewController:(id)arg0 didAuthorizeWithExternalAuthorizationData:(id)arg1 dataToRelease:(id)arg2 ;
-(void)dataReleaseContentViewController:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)dataReleaseContentViewController:(id)arg0 didResolveToMerchant:(id)arg1 ;
-(void)dataReleaseContentViewControllerDidChangePhysicalButtonState:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif
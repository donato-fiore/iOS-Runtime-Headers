// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIREDEEMVIEWCONTROLLERLEGACY_H
#define SKUIREDEEMVIEWCONTROLLERLEGACY_H

@class UINavigationController, UIBarButtonItem, NSString, NSOperationQueue;
@protocol SKUIRedeemIdDelegate, SKUIRedeemStepDelegate, SKUIRedeemViewCameraOverrideDelegate;


#import "SKUIRedeemPreflightOperation.h"
#import "SKUIRedeemStepViewController.h"
#import "SKUIClientContext.h"
#import "SKUIRedeemConfiguration.h"

@interface SKUIRedeemViewControllerLegacy : UINavigationController <SKUIRedeemIdDelegate, SKUIRedeemStepDelegate>

 {
    char _cameraRedeemEnabled;
    SKUIRedeemPreflightOperation *_preflightOperation;
    SKUIRedeemStepViewController *_inputViewController;
    NSInteger _initialBarStyle;
}


@property (nonatomic) BOOL attempsAutomaticRedeem; // ivar: _attempsAutomaticRedeem
@property (weak, nonatomic) NSObject<SKUIRedeemViewCameraOverrideDelegate> *cameraDelegate; // ivar: _cameraDelegate
@property (nonatomic) BOOL cameraRedeemVisible; // ivar: _cameraRedeemVisible
@property (retain, nonatomic) UIBarButtonItem *cancelButtonItem; // ivar: _cancelButtonItem
@property (readonly, nonatomic) NSInteger category; // ivar: _category
@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *initialCode; // ivar: _initialCode
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (retain, nonatomic) SKUIRedeemConfiguration *redeemConfiguration; // ivar: _redeemConfiguration
@property (nonatomic) BOOL shouldPerformInitialOperationOnAppear; // ivar: _shouldPerformInitialOperationOnAppear
@property (readonly) Class superclass;


+(BOOL)redeemRequiresNationalId:(id)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_newInputViewController;
-(id)initWithRedeemCategory:(NSInteger)arg0 ;
-(struct CGSize )preferredContentSize;
-(void)_attemptAutomaticRedeemWithMetadata:(id)arg0 ;
-(void)_cancelButtonAction:(id)arg0 ;
-(void)_executeIdValidationOperationWithFields:(id)arg0 ;
-(void)_executePreflightOperationForcesAuthentication:(BOOL)arg0 ;
-(void)_executeRequiresIdValidationOperation;
-(void)_finishPreflightWithResult:(id)arg0 ;
-(void)_loadInputViewController;
-(void)_performInitialRedeemOperation;
-(void)_showInputViewController;
-(void)_showNationalIdLoadingPage;
-(void)_showNationalIdVerificationPage;
-(void)dismissAnimated:(BOOL)arg0 ;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)redeemAgainAnimated:(BOOL)arg0 ;
-(void)redeemIdViewController:(id)arg0 submittedWithFields:(id)arg1 ;
-(void)redeemIdViewControllerDidCancel:(id)arg0 ;
-(void)redeemStepViewControllerShouldValidateNationalID:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif
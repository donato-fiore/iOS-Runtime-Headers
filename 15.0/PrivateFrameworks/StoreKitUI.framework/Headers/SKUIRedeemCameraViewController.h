// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIREDEEMCAMERAVIEWCONTROLLER_H
#define SKUIREDEEMCAMERAVIEWCONTROLLER_H

@class CRCodeRedeemerController, UIBarButtonItem, NSString;
@protocol CRCodeRedeemerControllerDelegate, SKUIRedeemCameraViewDelegate, SKUIRedeemCameraViewControllerDelegate, SKUIRedeemViewCameraOverrideDelegate;


#import "SKUIRedeemStepViewController.h"
#import "SKUIRedeem.h"

@interface SKUIRedeemCameraViewController : SKUIRedeemStepViewController <CRCodeRedeemerControllerDelegate, SKUIRedeemCameraViewDelegate, SKUIRedeemCameraViewControllerDelegate>

 {
    BOOL _alreadyPushed;
    CRCodeRedeemerController *_camera;
    UIBarButtonItem *_redeemButton;
    UIBarButtonItem *_flipButton;
    UIBarButtonItem *_activityBarButtonItem;
    SKUIRedeem *_successfulRedeem;
    BOOL _fullscreen;
}


@property (weak, nonatomic) NSObject<SKUIRedeemViewCameraOverrideDelegate> *cameraOverrideDelegate; // ivar: _cameraOverrideDelegate
@property (readonly, nonatomic) NSInteger category; // ivar: _category
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIRedeemCameraViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *initialCode; // ivar: _initialCode
@property (readonly) Class superclass;


-(BOOL)_enabled;
-(BOOL)disablesAutomaticKeyboardDismissal;
-(id)contentScrollView;
-(id)initWithRedeemCategory:(NSInteger)arg0 ;
-(id)initWithRedeemCategoryFullscreen:(NSInteger)arg0 ;
-(id)redeemerViewForSKUIRedeemCameraView:(id)arg0 ;
-(void)SKUIRedeemCameraView:(id)arg0 textFieldDidChange:(id)arg1 ;
-(void)SKUIRedeemCameraView:(id)arg0 textFieldDidRedeem:(id)arg1 ;
-(void)SKUIRedeemPreflightImagesDidLoad:(id)arg0 ;
-(void)_cameraRedeemDidFinish:(id)arg0 error:(id)arg1 ;
-(void)_cancelAction:(id)arg0 ;
-(void)_flipAction:(id)arg0 ;
-(void)_performRedeemOperationWithCode:(id)arg0 cameraRecognized:(BOOL)arg1 allowOverride:(BOOL)arg2 completion:(id)arg3 ;
-(void)_redeemAction:(id)arg0 ;
-(void)_redeemDidFinish:(id)arg0 error:(id)arg1 ;
-(void)_setEnabled:(BOOL)arg0 ;
-(void)_updateRightBarButtonItemsForRedeemInputState:(NSInteger)arg0 ;
-(void)cancelRedeemerViewForSKUIRedeemCameraView:(id)arg0 ;
-(void)codeRedeemerController:(id)arg0 didEndWithInfo:(id)arg1 ;
-(void)codeRedeemerControllerDidCancel:(id)arg0 ;
-(void)codeRedeemerControllerDidDisplayMessage:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)performRedeemOperationWithCode:(id)arg0 cameraRecognized:(BOOL)arg1 completion:(id)arg2 ;
-(void)presentFullScreenCameraViewForSKUIRedeemCameraView:(id)arg0 ;
-(void)redeemCameraViewController:(id)arg0 didFinishWithRedeem:(id)arg1 ;
-(void)showITunesPassLearnMoreForSKUIRedeemCameraView:(id)arg0 ;
-(void)startRedeemerViewForSKUIRedeemCameraView:(id)arg0 ;


@end


#endif
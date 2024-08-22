// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUCODEREDEEMERCONTROLLER_H
#define SUCODEREDEEMERCONTROLLER_H

@class UIViewController, CRCodeRedeemerController, NSString, UIVisualEffectView;
@protocol CRCodeRedeemerControllerDelegate, SUCodeRedeemerControllerDelegate;



@interface SUCodeRedeemerController : UIViewController <CRCodeRedeemerControllerDelegate>



@property (nonatomic) BOOL cameraflipDirection; // ivar: _cameraflipDirection
@property (retain, nonatomic) CRCodeRedeemerController *codeRedeemerController; // ivar: _codeRedeemerController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SUCodeRedeemerControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIVisualEffectView *visualEffectView; // ivar: _visualEffectView


+(BOOL)cameraSupported;
-(id)init;
-(void)_disableBlur;
-(void)_enableBlur;
-(void)_setChildViewController:(id)arg0 ;
-(void)_setup;
-(void)_setupCodeRedeemerController;
-(void)_setupFlipVisualEffectView;
-(void)cancel;
-(void)codeRedeemerController:(id)arg0 didEndWithInfo:(id)arg1 ;
-(void)codeRedeemerControllerDidCancel:(id)arg0 ;
-(void)recognitionError;
-(void)recognitionSuccess;
-(void)startSession;
-(void)toggleCameraWithCompletion:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif
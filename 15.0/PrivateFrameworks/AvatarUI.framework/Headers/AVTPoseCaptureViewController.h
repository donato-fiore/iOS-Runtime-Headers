// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTPOSECAPTUREVIEWCONTROLLER_H
#define AVTPOSECAPTUREVIEWCONTROLLER_H

@class UIViewController, AVTStickerConfiguration, UIView, UIColor, NSLayoutConstraint, NSString, UIBarButtonItem, UIImageView, UITapGestureRecognizer;
@protocol AVTFaceTrackingManagerDelegate, AVTUIControllerPresentationDelegate, AVTAvatarRecord, AVTPoseCaptureViewControllerDelegate;


#import "AVTViewSession.h"
#import "AVTViewSessionProvider.h"
#import "AVTRecordingButton.h"
#import "AVTCircularButton.h"

@interface AVTPoseCaptureViewController : UIViewController <AVTFaceTrackingManagerDelegate, AVTUIControllerPresentationDelegate>



@property (retain, nonatomic) AVTStickerConfiguration *adHocConfiguration; // ivar: _adHocConfiguration
@property (nonatomic) BOOL allowFacetracking; // ivar: _allowFacetracking
@property (retain, nonatomic) NSObject<AVTAvatarRecord> *avatarRecord; // ivar: _avatarRecord
@property (weak, nonatomic) UIView *avtViewContainer; // ivar: _avtViewContainer
@property (retain, nonatomic) AVTViewSession *avtViewSession; // ivar: _avtViewSession
@property (readonly, nonatomic) AVTViewSessionProvider *avtViewSessionProvider; // ivar: _avtViewSessionProvider
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) UIView *borderMaskView; // ivar: _borderMaskView
@property (nonatomic) NSInteger bottomPadding; // ivar: _bottomPadding
@property (retain, nonatomic) AVTRecordingButton *captureButton; // ivar: _captureButton
@property (retain, nonatomic) NSLayoutConstraint *captureButtonBottomAnchor; // ivar: _captureButtonBottomAnchor
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVTPoseCaptureViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AVTCircularButton *discardButton; // ivar: _discardButton
@property (retain, nonatomic) UIBarButtonItem *doneButton; // ivar: _doneButton
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *headerHeightConstraint; // ivar: _headerHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *headerTopAnchor; // ivar: _headerTopAnchor
@property (retain, nonatomic) UIView *headerView; // ivar: _headerView
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (copy, nonatomic) id *postSessionDidBecomeActiveHandler; // ivar: _postSessionDidBecomeActiveHandler
@property (nonatomic) BOOL shouldHideUserInfoView; // ivar: _shouldHideUserInfoView
@property (retain, nonatomic) UIImageView *snapshotImageView; // ivar: _snapshotImageView
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (nonatomic) NSInteger topPadding; // ivar: _topPadding


+(struct CGRect )borderMaskRectForContentRect:(struct CGRect )arg0 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isModalInPresentation;
-(NSInteger)interfaceOrientationForFaceTrackingManager:(id)arg0 ;
-(id)initWithSelectedRecord:(id)arg0 avtViewSessionProvider:(id)arg1 ;
-(void)beginAVTViewSessionWithDidBeginBlock:(id)arg0 ;
-(void)beginUsingAVTViewFromSession:(id)arg0 ;
-(void)configureAVTViewSession:(id)arg0 withAvatarRecord:(id)arg1 completionBlock:(id)arg2 ;
-(void)configureUserInfoLabel;
-(void)controllerPresentationWillObstructView:(id)arg0 ;
-(void)createCaptureButtonIfNeeded;
-(void)createDiscardButtonIfNeeded;
-(void)didTapAvatarView:(id)arg0 ;
-(void)didTapCancel:(id)arg0 ;
-(void)didTapCaptureButton:(id)arg0 ;
-(void)didTapDiscardButton:(id)arg0 ;
-(void)didTapDone:(id)arg0 ;
-(void)switchToCaptureMode;
-(void)switchToReviewMode;
-(void)updateAVTViewContainerFrame;
-(void)updateHeaderHeightConstraint;
-(void)updatePaddingConstant;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif
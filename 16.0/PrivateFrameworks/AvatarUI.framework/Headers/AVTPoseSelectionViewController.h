// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTPOSESELECTIONVIEWCONTROLLER_H
#define AVTPOSESELECTIONVIEWCONTROLLER_H

@class UIViewController, UIView, NSString, UIBarButtonItem, NSLayoutConstraint, NSArray;
@protocol AVTPoseSelectionGridViewControllerDelegate, AVTAvatarRecord, AVTPoseSelectionViewControllerDelegate;


#import "AVTRecordingButton.h"
#import "AVTCircularButton.h"
#import "AVTPoseSelectionGridViewController.h"
#import "AVTAnimojiPoseSelectionHeaderViewController.h"

@interface AVTPoseSelectionViewController : UIViewController <AVTPoseSelectionGridViewControllerDelegate>



@property (retain, nonatomic) NSObject<AVTAvatarRecord> *avatarRecord; // ivar: _avatarRecord
@property (retain, nonatomic) UIView *borderMaskView; // ivar: _borderMaskView
@property (retain, nonatomic) AVTRecordingButton *captureButton; // ivar: _captureButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVTPoseSelectionViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AVTCircularButton *discardButton; // ivar: _discardButton
@property (retain, nonatomic) UIBarButtonItem *doneButton; // ivar: _doneButton
@property (retain, nonatomic) AVTPoseSelectionGridViewController *gridViewController; // ivar: _gridViewController
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *headerDropShadowView; // ivar: _headerDropShadowView
@property (retain, nonatomic) NSLayoutConstraint *headerHeightConstraint; // ivar: _headerHeightConstraint
@property (retain, nonatomic) AVTAnimojiPoseSelectionHeaderViewController *headerViewController; // ivar: _headerViewController
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (nonatomic) NSUInteger poseTypes; // ivar: _poseTypes
@property (nonatomic) BOOL shouldNotifyDelegateOnSelection; // ivar: _shouldNotifyDelegateOnSelection
@property (retain, nonatomic) NSArray *stickerConfigurations; // ivar: _stickerConfigurations
@property (readonly) Class superclass;


+(id)poseConfigurationsForTypes:(NSUInteger)arg0 avatarRecord:(id)arg1 ;
+(struct CGRect )borderMaskRectForContentRect:(struct CGRect )arg0 ;
-(BOOL)canBecomeFirstResponder;
-(id)initWithSelectedRecord:(id)arg0 ;
-(id)initWithSelectedRecord:(id)arg0 poseConfigurations:(id)arg1 ;
-(id)initWithSelectedRecord:(id)arg0 poseTypes:(NSUInteger)arg1 ;
-(id)keyCommands;
-(void)createCaptureButtonIfNeeded;
-(void)createDiscardButtonIfNeeded;
-(void)didTapCancel:(id)arg0 ;
-(void)didTapCaptureButton:(id)arg0 ;
-(void)didTapDiscardButton:(id)arg0 ;
-(void)didTapDone:(id)arg0 ;
-(void)notifyDelegateOfSelectedPose;
-(void)poseSelectionGridController:(id)arg0 didSelectConfiguration:(id)arg1 ;
-(void)poseSelectionGridControllerDidSelectCameraItem:(id)arg0 ;
-(void)returnPressed:(id)arg0 ;
-(void)updateForPoseConfiguration:(id)arg0 animated:(BOOL)arg1 ;
-(void)updateHeaderHeightConstraint;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif
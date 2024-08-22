// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAVATARCAPTUREVIEWCONTROLLER_H
#define CNAVATARCAPTUREVIEWCONTROLLER_H

@class UIViewController, AVTView, NSLayoutConstraint, UIButton, UIView, UIImage, UILabel;
@protocol AVTAvatarRecord, CNAvatarCaptureViewControllerDelegate;


#import "CNCaptureButtonView.h"

@interface CNAvatarCaptureViewController : UIViewController

@property (retain, nonatomic) NSObject<AVTAvatarRecord> *avatarRecord; // ivar: _avatarRecord
@property (retain, nonatomic) AVTView *avtView; // ivar: _avtView
@property (nonatomic) NSLayoutConstraint *avtViewHeightConstraint; // ivar: _avtViewHeightConstraint
@property (retain, nonatomic) UIButton *cancelButton; // ivar: _cancelButton
@property (retain, nonatomic) CNCaptureButtonView *captureButtonView; // ivar: _captureButtonView
@property (retain, nonatomic) UIView *captureFooter; // ivar: _captureFooter
@property (retain, nonatomic) UIImage *capturedImage; // ivar: _capturedImage
@property (weak, nonatomic) NSObject<CNAvatarCaptureViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UILabel *promptLabel; // ivar: _promptLabel


-(BOOL)shouldUseLandscapeLayout;
-(id)initWithAvatarRecord:(id)arg0 ;
-(void)addPromptLabel;
-(void)didTapCancelButton:(id)arg0 ;
-(void)didTapCaptureButton:(id)arg0 ;
-(void)dismissCaptureController;
-(void)layoutFooterView;
-(void)loadAvatarView;
-(void)setupFooterView;
-(void)updateAvtViewAspectRatioConstraint;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKCLOUDKITSYNCPROGRESSVIEWCONTROLLER_H
#define CKCLOUDKITSYNCPROGRESSVIEWCONTROLLER_H

@class UIViewController, UIButton, IMCloudKitSyncProgress, UIColor, UIProgressView, UILabel, UIToolbar;
@protocol CKCloudKitSyncProgressViewControllerDelegate;



@interface CKCloudKitSyncProgressViewController : UIViewController

@property (readonly, nonatomic) UIButton *actionButton; // ivar: _actionButton
@property (nonatomic) BOOL actionButtonEnabled;
@property (weak, nonatomic) NSObject<CKCloudKitSyncProgressViewControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (retain, nonatomic) IMCloudKitSyncProgress *lastProgress; // ivar: _lastProgress
@property (copy, nonatomic) UIColor *originalProgressTintColor; // ivar: _originalProgressTintColor
@property (readonly, nonatomic) UIProgressView *progressBar; // ivar: _progressBar
@property (readonly, nonatomic) UILabel *progressLabel; // ivar: _progressLabel
@property (nonatomic) BOOL progressLabelIsWrapping; // ivar: _progressLabelIsWrapping
@property (weak, nonatomic) UIToolbar *toolbar; // ivar: _toolbar
@property (readonly, nonatomic) UILabel *userMessageLabel; // ivar: _userMessageLabel


-(BOOL)_isProgressLabelWrapping;
-(id)_createLabel;
-(id)init;
-(void)_actionButtonWasPressed:(id)arg0 ;
-(void)_addActionButton;
-(void)_addProgressLabel;
-(void)_addProgressView;
-(void)_addUserMessageLabel;
-(void)addToToolbar:(id)arg0 ;
-(void)loadView;
-(void)showProgressBarWithIndeterminateProgress:(BOOL)arg0 percentComplete:(CGFloat)arg1 ;
-(void)showUserMessageWithString:(id)arg0 showActionButton:(BOOL)arg1 withActionButtonLabel:(id)arg2 ;
-(void)updateWithCloudKitProgress:(id)arg0 ;
-(void)updateWithCloudKitProgress:(id)arg0 forceShow:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBLOGOUTPROGRESSVIEW_H
#define SBLOGOUTPROGRESSVIEW_H

@class UIView, UIImageView, NSLayoutConstraint, UILabel, UIActivityIndicatorView, _UILegibilitySettings, NSArray, CNContact;


#import "SBWindowSceneStatusBarSettingsAssertion.h"

@interface SBLogoutProgressView : UIView {
    UIImageView *_userAvatarView;
    NSLayoutConstraint *_userAvatarVerticalConstraint;
    UILabel *_goodbyeLabel;
    NSLayoutConstraint *_goodbyeLabelConstraint;
    UIView *_savingDocumentsActivityAndLabelContainerView;
    UIActivityIndicatorView *_savingDocumentsActivityIndicator;
    UILabel *_savingDocumentsLabel;
    UILabel *_savingDocumentsMoreLabel;
    NSLayoutConstraint *_savingDocumentsMoreLabelConstraint;
    UIView *_blameContainerView;
    UIImageView *_blameAppIconView;
    UILabel *_blameAppNameLabel;
    SBWindowSceneStatusBarSettingsAssertion *_statusBarSettingsAssertion;
}


@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (copy, nonatomic) NSArray *pendingApplications; // ivar: _pendingApplications
@property (nonatomic, getter=isProgressVisible) BOOL progressVisible;
@property (retain, nonatomic) CNContact *userContact; // ivar: _userContact


-(CGFloat)_goodbyeLabelBaselineOffset;
-(CGFloat)_moreDocumentsLabelBaselineOffset;
-(CGFloat)_userAvatarVerticalOffsetFromCenter;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateBlame;
-(void)_updateGoodbye;
-(void)_updateLegibility;
-(void)_updateUserAvatar;
-(void)_updateUserAvatarLegibility;
-(void)_updateViewData;
-(void)updateConstraints;


@end


#endif
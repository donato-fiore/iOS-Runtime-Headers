// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNMECARDSHARINGSETTINGSHEADERVIEWCONTROLLER_H
#define CNMECARDSHARINGSETTINGSHEADERVIEWCONTROLLER_H

@class UIViewController, NSString, UIButton, UIView;
@protocol CNMeCardSharingAvatarViewControllerDelegate, CNMeCardSharingAvatarProvider, CNMeCardSharingSettingsHeaderViewControllerDelegate;


#import "CNMeCardSharingAvatarViewController.h"

@interface CNMeCardSharingSettingsHeaderViewController : UIViewController <CNMeCardSharingAvatarViewControllerDelegate>



@property (retain, nonatomic) NSObject<CNMeCardSharingAvatarProvider> *avatarProvider; // ivar: _avatarProvider
@property (retain, nonatomic) CNMeCardSharingAvatarViewController *avatarViewController; // ivar: _avatarViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNMeCardSharingSettingsHeaderViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIButton *labelButton; // ivar: _labelButton
@property (readonly, nonatomic) CGFloat separatorHeight;
@property (retain, nonatomic) UIView *separatorView; // ivar: _separatorView
@property (readonly) Class superclass;


+(CGFloat)avatarEdgeLengthForTraitCollection:(id)arg0 ;
-(CGFloat)desiredHeightForTraitCollection:(id)arg0 ;
-(id)initWithAvatarProvider:(id)arg0 ;
-(void)avatarViewControllerDidUpdateImage:(id)arg0 ;
-(void)avatarViewControllerWasTapped:(id)arg0 ;
-(void)labelButtonTapped:(id)arg0 ;
-(void)reload;
-(void)updateForChangedImage;
-(void)updateWithAvatarProvider:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif
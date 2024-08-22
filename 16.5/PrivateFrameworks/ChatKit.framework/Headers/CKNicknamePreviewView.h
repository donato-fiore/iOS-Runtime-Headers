// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKNICKNAMEPREVIEWVIEW_H
#define CKNICKNAMEPREVIEWVIEW_H

@class UIView, CKCNSharingProfileAvatarItemProvider, CNSharingProfileAvatarItemProviderConfiguration, NSArray, CNContact, UILabel;


#import "CKTextBalloonView.h"

@interface CKNicknamePreviewView : UIView

@property (retain, nonatomic) CKCNSharingProfileAvatarItemProvider *avatarItemProvider; // ivar: _avatarItemProvider
@property (readonly, nonatomic) CNSharingProfileAvatarItemProviderConfiguration *avatarItemProviderConfiguration;
@property (retain, nonatomic) NSArray *avatarViews; // ivar: _avatarViews
@property (retain, nonatomic) CKTextBalloonView *balloonView; // ivar: _balloonView
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (retain, nonatomic) UILabel *senderLabel; // ivar: _senderLabel
@property (retain, nonatomic) NSArray *senderStrings; // ivar: _senderStrings
@property (nonatomic) BOOL shouldStopAnimation; // ivar: _shouldStopAnimation


-(id)balloonText;
-(id)flipAnimation;
-(id)imageForAvatarType:(NSInteger)arg0 ;
-(id)initWithContact:(id)arg0 avatarRecord:(id)arg1 ;
-(id)senderStringForAvatarType:(NSInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)avatarDidFinishTransitionToAvatarAtIndex:(NSUInteger)arg0 ;
-(void)beginAnimation;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)runFlipAnimationOnAvatarView:(id)arg0 completion:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateBalloonTraitCollection;


@end


#endif
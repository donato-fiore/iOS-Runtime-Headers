// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTUCONVERSATIONBALLOONVIEW_H
#define CKTUCONVERSATIONBALLOONVIEW_H

@class UIImageView, UIButton, NSString, UILabel, NSUUID;


#import "CKColoredBalloonView.h"
#import "CKAvatarView.h"

@interface CKTUConversationBalloonView : CKColoredBalloonView {
    char _orientation;
}


@property (nonatomic) BOOL animating; // ivar: _animating
@property (retain, nonatomic) CKAvatarView *avatarView; // ivar: _avatarView
@property (retain, nonatomic) UIImageView *iconView; // ivar: _iconView
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UIButton *joinButton; // ivar: _joinButton
@property (copy, nonatomic) NSString *joinButtonText_TestingOverride; // ivar: _joinButtonText_TestingOverride
@property (readonly, nonatomic) BOOL shouldRenderJoinButtonAsIcon;
@property (readonly, nonatomic) BOOL shouldUseAXLayout;
@property (nonatomic) NSUInteger state; // ivar: _state
@property (retain, nonatomic) UILabel *subtitleLabel1; // ivar: _subtitleLabel1
@property (retain, nonatomic) UILabel *subtitleLabel2; // ivar: _subtitleLabel2
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSUUID *tuConversationUUID; // ivar: _tuConversationUUID
@property (nonatomic, getter=isUnknownSender) BOOL unknownSender; // ivar: _unknownSender


+(struct CGSize )appIconSize;
-(BOOL)__im_ff_isExpanseEnabled;
-(BOOL)activeCallIsJoinable;
-(BOOL)wantsGradient;
-(CGFloat)stringWidthConstraint;
-(char)color;
-(char)orientation;
-(id)_currentCall;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)tuConversation;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(void)_joinButtonTapped:(id)arg0 ;
-(void)_multiWayCallStateChanged:(id)arg0 ;
-(void)chatParticipantsChanged:(id)arg0 ;
-(void)configureForCurrentState;
-(void)configureForTUConversationChatItem:(id)arg0 ;
-(void)configureIconView;
-(void)configureImageView;
-(void)configureJoinButton;
-(void)configureSubtitle1;
-(void)configureSubtitle2;
-(void)configureTitle;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)didHoverOverCell:(id)arg0 ;
-(void)formatIconViewForActivity;
-(void)formatIconViewForFaceTime;
-(void)formatImageViewForActivity;
-(void)formatImageViewForFaceTime;
-(void)layoutSubviews;
-(void)prepareForDisplay;
-(void)prepareForReuse;
-(void)setOrientation:(char)arg0 ;


@end


#endif
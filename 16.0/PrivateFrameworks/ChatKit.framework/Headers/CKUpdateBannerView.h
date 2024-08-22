// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKUPDATEBANNERVIEW_H
#define CKUPDATEBANNERVIEW_H

@class UIView, UIVisualEffectView, UIButton, NSDictionary, UIImageView, NSString, UITextView;
@protocol UITextViewDelegate, CKBannerUpdatesViewDelegate;


#import "CKAvatarView.h"

@interface CKUpdateBannerView : UIView <UITextViewDelegate>



@property (retain, nonatomic) UIView *avatarCutoutView; // ivar: _avatarCutoutView
@property (retain, nonatomic) CKAvatarView *avatarView; // ivar: _avatarView
@property (nonatomic) CGFloat avatarViewAlignmentX; // ivar: _avatarViewAlignmentX
@property (nonatomic) NSUInteger bannerType; // ivar: _bannerType
@property (retain, nonatomic) UIVisualEffectView *blurView; // ivar: _blurView
@property (retain, nonatomic) UIView *bottomSeparatorView; // ivar: _bottomSeparatorView
@property (retain, nonatomic) UIButton *cancelButton; // ivar: _cancelButton
@property (retain, nonatomic) NSDictionary *contactMap; // ivar: _contactMap
@property (retain, nonatomic) UIImageView *contactsIconView; // ivar: _contactsIconView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL inUpdatesMode; // ivar: _inUpdatesMode
@property (retain, nonatomic) CKAvatarView *secondaryAvatarView; // ivar: _secondaryAvatarView
@property (nonatomic) NSUInteger style; // ivar: _style
@property (retain, nonatomic) UITextView *subtitleLabel; // ivar: _subtitleLabel
@property (readonly) Class superclass;
@property (retain, nonatomic) UITextView *titleLabel; // ivar: _titleLabel
@property (nonatomic) CGFloat titleLabelAlignmentX; // ivar: _titleLabelAlignmentX
@property (retain, nonatomic) UIView *topSeparatorView; // ivar: _topSeparatorView
@property (weak, nonatomic) NSObject<CKBannerUpdatesViewDelegate> *updatesDelegate; // ivar: _updatesDelegate
@property (nonatomic) BOOL useNamedSubtitles; // ivar: _useNamedSubtitles
@property (nonatomic) BOOL useNamedTitles; // ivar: _useNamedTitles


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(CGFloat)maxLabelWidthForSize:(struct CGSize )arg0 ;
-(id)cancelGlyph;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSUInteger)arg1 useNamedTitles:(BOOL)arg2 updates:(id)arg3 inUpdatesMode:(BOOL)arg4 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )layoutMargins;
-(void)_updateAvatarView;
-(void)_updateTitleLabel;
-(void)addSeparators;
-(void)layoutSubviews;
-(void)setupViews;


@end


#endif
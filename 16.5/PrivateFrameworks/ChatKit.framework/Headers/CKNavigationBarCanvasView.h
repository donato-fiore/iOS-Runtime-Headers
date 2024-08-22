// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKNAVIGATIONBARCANVASVIEW_H
#define CKNAVIGATIONBARCANVASVIEW_H

@class UIView, NSMutableArray, NSString, UIButton, UIContextMenuInteraction, UIImageView, UIColor, UIMenu;
@protocol UIContextMenuInteractionDelegate, CKNavigationBarCanvasViewDelegate;


#import "CKNavigationButtonView.h"

@interface CKNavigationBarCanvasView : UIView <UIContextMenuInteractionDelegate>



@property (nonatomic) BOOL audioEnabled; // ivar: _audioEnabled
@property (retain, nonatomic) CKNavigationButtonView *buttonViewFaceTimeAudio; // ivar: _buttonViewFaceTimeAudio
@property (retain, nonatomic) CKNavigationButtonView *buttonViewFaceTimeVideo; // ivar: _buttonViewFaceTimeVideo
@property (retain, nonatomic) CKNavigationButtonView *buttonViewInfo; // ivar: _buttonViewInfo
@property (retain, nonatomic) NSMutableArray *buttonsToDisplay; // ivar: _buttonsToDisplay
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKNavigationBarCanvasViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enforceLeftItemViewsAlignmentToCenter; // ivar: _enforceLeftItemViewsAlignmentToCenter
@property (nonatomic) BOOL expanseEnabled; // ivar: _expanseEnabled
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreNextWidthChange; // ivar: _ignoreNextWidthChange
@property (retain, nonatomic) UIButton *invisibleContextMenuButton; // ivar: _invisibleContextMenuButton
@property (nonatomic) BOOL isAnimatingAvatars; // ivar: _isAnimatingAvatars
@property (nonatomic) BOOL isBusinessChat; // ivar: _isBusinessChat
@property (nonatomic) BOOL isInEditingMode; // ivar: _isInEditingMode
@property (nonatomic) BOOL isShowingControls; // ivar: _isShowingControls
@property (nonatomic) BOOL isTearingDownButtonViews; // ivar: _isTearingDownButtonViews
@property (nonatomic) NSInteger joinButtonStyle; // ivar: _joinButtonStyle
@property (nonatomic) BOOL keepTitleViewCentered; // ivar: _keepTitleViewCentered
@property (retain, nonatomic) UIView *leftItemView; // ivar: _leftItemView
@property (nonatomic) BOOL multiwayAudioButtonHidden; // ivar: _multiwayAudioButtonHidden
@property (nonatomic) CGFloat preferredHeight; // ivar: _preferredHeight
@property (retain, nonatomic) UIView *rightItemView; // ivar: _rightItemView
@property (retain, nonatomic) UIContextMenuInteraction *secondaryTitleInteraction; // ivar: _secondaryTitleInteraction
@property (nonatomic) BOOL shouldAnimateAvatarLayoutChanges; // ivar: _shouldAnimateAvatarLayoutChanges
@property (retain, nonatomic) UIImageView *statusIndicatorImageView; // ivar: _statusIndicatorImageView
@property (nonatomic) NSInteger statusIndicatorType; // ivar: _statusIndicatorType
@property (readonly) Class superclass;
@property (retain, nonatomic) UIColor *titleDefaultBackgroundColor; // ivar: _titleDefaultBackgroundColor
@property (retain, nonatomic) UIView *titleView; // ivar: _titleView
@property (retain, nonatomic) UIMenu *titleViewContextMenu; // ivar: _titleViewContextMenu
@property (nonatomic) BOOL videoEnabled; // ivar: _videoEnabled


+(CGFloat)heightWithButtonViews;
+(CGFloat)heightWithButtonViewsContactless;
+(CGFloat)heightWithoutButtonViewsContactless;
+(CGFloat)maxHeight;
+(CGFloat)minHeight;
+(CGFloat)preferredLandscapeHeightForCompactWidth;
+(CGFloat)preferredLandscapeHeightForRegularWidth;
-(BOOL)_canShowAvatarView;
-(CGFloat)_calculateYOriginForButtonWithHeight:(CGFloat)arg0 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 preferredHeight:(CGFloat)arg1 ;
-(struct CGRect )_calculateFrameForButton:(id)arg0 shouldOffset:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )safeAreaInsets;
-(struct UIEdgeInsets )systemMinimumLayoutMarginsFromDelegate;
-(void)_addLaserEffectToButton:(id)arg0 ;
-(void)_setupButtonContainer;
-(void)_tearDownButtonContainer;
-(void)_updateJoinButtonStyle;
-(void)clearAllItemViews;
-(void)didHoverOverTitleView:(id)arg0 ;
-(void)layoutSubviews;
-(void)layoutTitleViewIfNeeded:(struct CGRect )arg0 ;
-(void)removeButtonViewsIfNeeded;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif
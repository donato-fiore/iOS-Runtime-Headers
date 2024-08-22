// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXUIWIDGETHEADERVIEW_H
#define PXUIWIDGETHEADERVIEW_H

@class UIView, UIButton, UILabel, NSArray, UIVisualEffectView, NSString, UIFont, UIColor;
@protocol PXUIWidgetHeaderViewDelegate;



@interface PXUIWidgetHeaderView : UIView {
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    ? _needsUpdateFlags;
    ? _delegateRespondsTo;
}


@property (readonly, nonatomic) UIButton *_captionButton; // ivar: __captionButton
@property (readonly, nonatomic) UILabel *_captionLabel; // ivar: __captionLabel
@property (copy, nonatomic, setter=_setConstraints:) NSArray *_constraints; // ivar: __constraints
@property (nonatomic, setter=_setCurrentHeight:) CGFloat _currentHeight; // ivar: __currentHeight
@property (nonatomic, setter=_setHasContent:) BOOL _hasContent; // ivar: __hasContent
@property (readonly, nonatomic) UIButton *_subtitleButton; // ivar: __subtitleButton
@property (readonly, nonatomic) UILabel *_subtitleLabel; // ivar: __subtitleLabel
@property (readonly, nonatomic) UILabel *_titleLabel; // ivar: __titleLabel
@property (readonly, nonatomic) UIVisualEffectView *_visualEffectView; // ivar: __visualEffectView
@property (nonatomic) BOOL allowUserInteractionWithCaption; // ivar: _allowUserInteractionWithCaption
@property (nonatomic) BOOL allowUserInteractionWithSubtitle; // ivar: _allowUserInteractionWithSubtitle
@property (copy, nonatomic) NSString *caption; // ivar: _caption
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (weak, nonatomic) NSObject<PXUIWidgetHeaderViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat distanceBetweenTitleBaselineAndSubtitleBaseline; // ivar: _distanceBetweenTitleBaselineAndSubtitleBaseline
@property (nonatomic) CGFloat horizontalSpacingBetweenTitleAndSubtitle; // ivar: _horizontalSpacingBetweenTitleAndSubtitle
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (nonatomic) CGFloat minimumDistanceBetweenLastBaselineAndBottom; // ivar: _minimumDistanceBetweenLastBaselineAndBottom
@property (nonatomic) CGFloat minimumDistanceBetweenTopAndFirstBaseline; // ivar: _minimumDistanceBetweenTopAndFirstBaseline
@property (retain, nonatomic) UIFont *primaryFont; // ivar: _primaryFont
@property (retain, nonatomic) UIFont *secondaryFont; // ivar: _secondaryFont
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor
@property (copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)_hasAccessibilityLargeText;
-(BOOL)_needsUpdate;
-(id)_captionButtonCreateIfNeeded:(BOOL)arg0 ;
-(id)_captionLabelCreateIfNeeded:(BOOL)arg0 ;
-(id)_subtitleButtonCreateIfNeeded:(BOOL)arg0 ;
-(id)_subtitleLabelCreateIfNeeded:(BOOL)arg0 ;
-(id)_titleLabelCreateIfNeeded:(BOOL)arg0 ;
-(id)_visualEffectViewCreateIfNeeded:(BOOL)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_handleCaptionButton:(id)arg0 ;
-(void)_handleSubtitleButton:(id)arg0 ;
-(void)_invalidateCaption;
-(void)_invalidateHasContent;
-(void)_invalidateTitle;
-(void)_setNeedsUpdate;
-(void)_updateCaptionIfNeeded;
-(void)_updateHasContentIfNeeded;
-(void)_updateIfNeeded;
-(void)_updateTitleIfNeeded;
-(void)layoutSubviews;
-(void)performChanges:(id)arg0 ;


@end


#endif
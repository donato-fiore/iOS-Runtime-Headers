// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFLUIDSWITCHERITEMCONTAINERHEADERVIEW_H
#define SBFLUIDSWITCHERITEMCONTAINERHEADERVIEW_H

@class UIView, NSMutableDictionary, NSMutableArray, MTVisualStyling, UITapGestureRecognizer, NSString, NSArray;
@protocol PTSettingsKeyObserver, SBFluidSwitcherItemContainerHeaderViewDelegate;



@interface SBFluidSwitcherItemContainerHeaderView : UIView <PTSettingsKeyObserver>

 {
    NSMutableDictionary *_itemsToIconImageViews;
    NSMutableArray *_iconImageViewReusePool;
    NSMutableDictionary *_itemsToTitleLabels;
    NSMutableArray *_titleLabelReusePool;
    NSMutableDictionary *_itemsToSubtitleLabelViews;
    NSMutableArray *_subtitleLabelReusePool;
    NSMutableDictionary *_itemsToMultiWindowIndicatorViews;
    NSMutableArray *_multiWindowIndicatorViewReusePool;
    NSInteger _subtitleVisualStylingInterfaceStyle;
    MTVisualStyling *_subtitleVisualStyling;
    CGFloat _spacingBetweenLeadingEdgeAndIcon;
    CGFloat _spacingBetweenTrailingEdgeAndLabels;
    CGFloat _iconSideLength;
    CGFloat _spacingBetweenSnapshotAndIcon;
    CGFloat _spacingBetweenSnapshotAndDescriptionLabelBaseline;
    CGFloat _spacingBetweenTitleAndSubtitleBaseline;
    CGFloat _spacingBetweenIconAndLabel;
    CGFloat _spacingBetweenLabelAndMultipleWindowsIndicator;
    CGFloat _multipleWindowsIndicatorSideLength;
    CGFloat _spacingBetweenLabelAndSecondIcon;
    CGFloat _spacingBetweenBoundsCenterAndSecondIcon;
    UITapGestureRecognizer *_tapGestureRecognizer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<SBFluidSwitcherItemContainerHeaderViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat preferredHeaderHeight;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat textAlpha; // ivar: _textAlpha
@property (copy, nonatomic) NSArray *titleItems; // ivar: _titleItems


+(CGFloat)distanceFromBoundingLeadingEdgeToIconTrailingEdge;
-(id)_makeMultipleWindowsIndicatorView;
-(id)_multiWindowIndicatorAccessibilityIdentifierForDisplayItem:(id)arg0 ;
-(id)_subtitleLabelFont;
-(id)_titleLabelFont;
-(id)initWithFrame:(struct CGRect )arg0 delegate:(id)arg1 ;
-(void)_applyPrototypeSettings;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)_handleTapGestureRecognizer:(id)arg0 ;
-(void)_updateTitleAlpha;
-(void)_updateVisualStylingWithTitleItems:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WGWIDGETPLATTERVIEW_H
#define WGWIDGETPLATTERVIEW_H

@class UIView, MTMaterialView, UIButton, NSString, NSArray;
@protocol PLContentSizeManaging, PLContentSizeCategoryAdjusting, MTMaterialGrouping, MTVisualStylingRequiring;


#import "WGPlatterHeaderContentView.h"
#import "WGWidgetListItemViewController.h"
#import "WGWidgetHostingViewController.h"

@interface WGWidgetPlatterView : UIView <PLContentSizeManaging, PLContentSizeCategoryAdjusting, MTMaterialGrouping, MTVisualStylingRequiring>

 {
    MTMaterialView *_backgroundView;
    WGPlatterHeaderContentView *_headerContentView;
    CGFloat _cornerRadius;
}


@property (readonly, nonatomic) UIButton *addWidgetButton;
@property (nonatomic, getter=isAddWidgetButtonVisible) BOOL addWidgetButtonVisible;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (nonatomic, getter=isBackgroundHidden) BOOL backgroundHidden; // ivar: _backgroundHidden
@property (nonatomic) NSInteger buttonMode; // ivar: _buttonMode
@property (nonatomic) NSUInteger clippingEdge; // ivar: _clippingEdge
@property (retain, nonatomic, setter=_setContentView:) UIView *contentView; // ivar: _contentView
@property (nonatomic, getter=isContentViewHitTestingDisabled) BOOL contentViewHitTestingDisabled; // ivar: _contentViewHitTestingDisabled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditingIcons) BOOL editingIcons; // ivar: _editingIcons
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) WGWidgetListItemViewController *listItem; // ivar: _listItem
@property (copy, nonatomic) NSString *materialGroupNameBase; // ivar: _materialGroupNameBase
@property (nonatomic) CGFloat overrideHeightForLayingOutContentView; // ivar: _overrideHeightForLayingOutContentView
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (readonly, nonatomic) UIButton *showMoreButton;
@property (nonatomic, getter=isShowMoreButtonVisible) BOOL showMoreButtonVisible;
@property (nonatomic, getter=isShowingMoreContent) BOOL showingMoreContent; // ivar: _showingMoreContent
@property (readonly) Class superclass;
@property (nonatomic) CGFloat topMarginForLayout; // ivar: _topMarginForLayout
@property (weak, nonatomic) WGWidgetHostingViewController *widgetHost; // ivar: _widgetHost
@property (readonly, copy, nonatomic) NSString *widgetIdentifier;


+(CGFloat)contentBaselineToBoundsBottomWithWidth:(CGFloat)arg0 ;
-(BOOL)_isUtilityButtonVisible;
-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)canBecomeFocused;
-(CGFloat)_continuousCornerRadius;
-(id)cancelTouches;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)visualStylingProviderForCategory:(NSInteger)arg0 ;
-(struct CGRect )_headerFrameForBounds:(struct CGRect )arg0 ;
-(struct CGSize )_contentSize;
-(struct CGSize )contentSizeForSize:(struct CGSize )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )minimumSizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFitsContentWithSize:(struct CGSize )arg0 ;
-(void)_configureBackgroundMaterialViewIfNecessary;
-(void)_configureHeaderViewsIfNecessary;
-(void)_handleAddWidget:(id)arg0 ;
-(void)_handleIconButton:(id)arg0 ;
-(void)_layoutContentView;
-(void)_layoutHeaderViews;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)_setUtilityButtonVisible:(BOOL)arg0 ;
-(void)_toggleShowMore:(id)arg0 ;
-(void)_updateHeaderContentViewVisualStyling;
-(void)_updateShowMoreButtonImage;
-(void)_updateUtilityButtonForMode:(NSInteger)arg0 ;
-(void)_updateUtilityButtonForMoreContentState:(BOOL)arg0 ;
-(void)iconDidInvalidate:(id)arg0 ;
-(void)layoutSubviews;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;
-(void)willRemoveSubview:(id)arg0 ;


@end


#endif
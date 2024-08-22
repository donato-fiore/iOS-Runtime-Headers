// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCUIACTIVITYCONTROL_H
#define FCUIACTIVITYCONTROL_H

@class UIControl, UIView, UIImageView, BSUICAPackageView, UILabel, MTVisualStylingProvider, NSStringDrawingContext, NSString, NSDate, UIImage, NSArray, NSURL, NSUUID, UIAction, UIGestureRecognizer;
@protocol UIPointerInteractionDelegate, FCUIActivityDisplaying, FCUIExpandingContracting, FCUIAnimatedTransitionParticipating, FCUIContentSizeCategoryAdjusting, FCActivityDescribing;


#import "FCUIOptionsControl.h"
#import "FCUIActivityControlMenuView.h"

@interface FCUIActivityControl : UIControl <UIPointerInteractionDelegate, FCUIActivityDisplaying, FCUIExpandingContracting, FCUIAnimatedTransitionParticipating, FCUIContentSizeCategoryAdjusting>

 {
    UIView *_contentView;
    UIImageView *_activityIconImageView;
    BSUICAPackageView *_activityIconPackageView;
    UILabel *_activityTitleLabel;
    UILabel *_detailLabel;
    FCUIOptionsControl *_optionsButton;
    FCUIActivityControlMenuView *_menuView;
    UIView *_backgroundView;
    MTVisualStylingProvider *_textVisualStylingProvider;
    MTVisualStylingProvider *_glyphVisualStylingProvider;
    NSStringDrawingContext *_drawingContext;
    NSInteger _controlSize;
    CGRect _targetContainerBounds;
    BOOL _drawingSelectedAppearance;
    BOOL _textLayoutDisabled;
}


@property (readonly, copy, nonatomic) NSString *activityColorName;
@property (readonly, copy, nonatomic) NSDate *activityCreationDate;
@property (copy, nonatomic) NSObject<FCActivityDescribing> *activityDescription; // ivar: _activityDescription
@property (readonly, copy, nonatomic) NSString *activityDetailText;
@property (readonly, copy, nonatomic) NSString *activityDisplayName;
@property (copy, nonatomic) UIImage *activityIcon;
@property (readonly, copy, nonatomic) NSString *activityIdentifier;
@property (readonly, copy, nonatomic) NSArray *activityLifetimeDescriptions;
@property (readonly, copy, nonatomic) NSString *activityLifetimesAlternativeDescription;
@property (readonly, copy, nonatomic) NSURL *activitySettingsURL;
@property (readonly, copy, nonatomic) NSURL *activitySetupURL;
@property (readonly, copy, nonatomic) NSString *activitySymbolImageName;
@property (readonly, copy, nonatomic) NSUUID *activityUniqueIdentifier;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (nonatomic, getter=isContracted) BOOL contracted;
@property (readonly, nonatomic) NSInteger controlStyle; // ivar: _controlStyle
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) UIAction *defaultAction;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *detailText;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (copy, nonatomic) UIAction *footerAction;
@property (readonly, nonatomic) UIGestureRecognizer *gestureRecognizerForExclusionRelationships;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (copy, nonatomic) NSString *menuAlternativeDescription;
@property (copy, nonatomic) NSArray *menuItemActions;
@property (readonly, copy, nonatomic) NSArray *menuItemElements;
@property (copy, nonatomic) UIAction *optionsAction;
@property (readonly, nonatomic, getter=isPlaceholder) BOOL placeholder;
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isSelectionHidden) BOOL selectionHidden; // ivar: _selectionHidden
@property (readonly) Class superclass;


+(id)_preferredFont:(BOOL)arg0 textStyle:(id)arg1 weight:(CGFloat)arg2 additionalTraits:(unsigned int)arg3 ;
-(BOOL)_isBackgroundViewHighlighted;
-(BOOL)_isDrawingSelectedAppearance;
-(BOOL)_needsTextAttributesUpdate;
-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(CGFloat)_cornerRadiusForControlFrame:(struct CGRect )arg0 ;
-(CGFloat)_effectiveGlyphPointSize;
-(CGFloat)_scaledValueForValue:(CGFloat)arg0 ;
-(NSInteger)_detailLabelVisualStyleForHighlightState:(BOOL)arg0 ;
-(NSInteger)_optionsControlTypeForControlStyle:(NSInteger)arg0 ;
-(NSInteger)_recipe;
-(NSInteger)_titleLabelVisualStyleForHighlightState:(BOOL)arg0 ;
-(NSInteger)_userInterfaceStyleForSelectedAppearance:(BOOL)arg0 ;
-(id)_activityIconTintColorForSelectedAppearance:(BOOL)arg0 ;
-(id)_highlightingBackgroundView;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithActivityDescription:(id)arg0 ;
-(id)initWithActivityDescription:(id)arg0 style:(NSInteger)arg1 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(id)visualStylingProviderForCategory:(NSInteger)arg0 ;
-(struct CGRect )_glyphFrameForLayoutFrame:(struct CGRect *)arg0 sizeThatFits:(struct CGSize )arg1 ;
-(struct CGRect )_iconLayoutFrameForControlFrame:(struct CGRect )arg0 isRTL:(BOOL)arg1 controlSize:(NSInteger)arg2 ;
-(struct CGRect )_optionsButtonLayoutFrameForControlFrame:(struct CGRect )arg0 isRTL:(BOOL)arg1 ;
-(struct CGRect )_textFrameForControlFrame:(struct CGRect )arg0 iconLayoutFrame:(struct CGRect )arg1 isRTL:(BOOL)arg2 controlSize:(NSInteger)arg3 ;
-(struct CGSize )_sizeThatFits:(struct CGSize )arg0 withControlSize:(NSInteger)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureActivityIconImageViewIfNecessaryForReference:(BOOL)arg0 ;
-(void)_configureActivityTitleLabelIfNecessary;
-(void)_configureBackgroundViewIfNecesssary;
-(void)_configureContentViewIfNecessary;
-(void)_configureDetailLabelIfNecessary;
-(void)_configureGlyphVisualStylingProviderIfNecessary;
-(void)_configureMenuViewIfNecessary;
-(void)_configureOptionsButtonIfNecessary;
-(void)_configureTextVisualStylingProviderIfNecessary;
-(void)_setBackgroundViewHighlighted:(BOOL)arg0 ;
-(void)_setDrawingSelectedAppearance:(BOOL)arg0 ;
-(void)_setNeedsTextAttributesUpdate;
-(void)_setTextLayoutDisabled:(BOOL)arg0 ;
-(void)_updateAccessibilityIdentifier;
-(void)_updateActivityDetail;
-(void)_updateActivityIcon;
-(void)_updateActivityTitle;
-(void)_updateDrawingSelectedAppearance;
-(void)_updateTextAttributes;
-(void)_updateTextAttributesForActivityItemImageView;
-(void)_updateTextAttributesForActivityTitleLabel;
-(void)_updateTextAttributesForDetailLabel;
-(void)_updateTextAttributesIfNecessary;
-(void)_updateVisualStylingOfView:(id)arg0 style:(NSInteger)arg1 visualStylingProvider:(id)arg2 outgoingProvider:(id)arg3 ;
-(void)_visualStylingProviderDidChange:(id)arg0 forCategory:(NSInteger)arg1 outgoingProvider:(id)arg2 ;
-(void)addAction:(id)arg0 forControlEvents:(NSUInteger)arg1 ;
-(void)layoutSubviews;
-(void)willPresent:(BOOL)arg0 withTargetContainerBounds:(struct CGRect )arg1 transitionCoordinator:(id)arg2 ;


@end


#endif
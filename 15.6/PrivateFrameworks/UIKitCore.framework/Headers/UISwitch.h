// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISWITCH_H
#define UISWITCH_H

@class NSString;
@protocol UISwitchControl, UISwitchVisualElementProvider, NSCoding;


#import "UIControl.h"
#import "UIImpactFeedbackGenerator.h"
#import "UIImage.h"
#import "UIColor.h"
#import "UISwitchVisualElement.h"

@interface UISwitch : UIControl <UISwitchControl, UISwitchVisualElementProvider, NSCoding>



@property (nonatomic, getter=_alwaysShowOnOffLabel, setter=_setAlwaysShowsOnOffLabel:) BOOL alwaysShowOnOffLabel; // ivar: _alwaysShowOnOffLabel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=_impactFeedbackGenerator, setter=_setImpactFeedbackGenerator:) UIImpactFeedbackGenerator *impactFeedbackGenerator;
@property (retain, nonatomic) UIImage *offImage; // ivar: _offImage
@property (nonatomic, getter=isOn) BOOL on; // ivar: _on
@property (retain, nonatomic) UIImage *onImage; // ivar: _onImage
@property (retain, nonatomic) UIColor *onTintColor; // ivar: _onTintColor
@property (nonatomic) NSInteger preferredStyle; // ivar: _preferredStyle
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (nonatomic) NSInteger switchStyle; // ivar: _switchStyle
@property (retain, nonatomic) UIColor *thumbTintColor; // ivar: _thumbTintColor
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UISwitchVisualElement *visualElement; // ivar: _visualElement


+(BOOL)_allowsUnsupportedMacIdiomBehavior;
+(id)visualElementForTraitCollection:(id)arg0 ;
+(id)visualElementForTraitCollection:(id)arg0 style:(NSInteger)arg1 ;
+(void)_setAllowsUnsupportedMacIdiomBehavior:(BOOL)arg0 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(BOOL)_isFixedSize;
-(BOOL)_shouldShowOnOffLabels;
-(BOOL)isAccessibilityElementByDefault;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(BOOL)pointMostlyInside:(struct CGPoint )arg0 ;
-(NSUInteger)_controlEventsForActionTriggered;
-(NSUInteger)defaultAccessibilityTraits;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGPoint )accessibilityActivationPoint;
-(struct CGSize )_intrinsicSizeWithinSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg0 ;
-(void)_populateArchivedSubviews:(id)arg0 ;
-(void)_refreshVisualElement;
-(void)_refreshVisualElementForTraitCollection:(id)arg0 populatingAPIProperties:(BOOL)arg1 ;
-(void)_showingOnOffLabelChanged;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)visualElement:(id)arg0 transitionedToOn:(BOOL)arg1 ;
-(void)visualElementHadTouchUpInside:(id)arg0 ;


@end


#endif
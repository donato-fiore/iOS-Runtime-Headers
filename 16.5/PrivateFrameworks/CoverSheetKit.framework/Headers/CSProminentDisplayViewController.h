// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSPROMINENTDISPLAYVIEWCONTROLLER_H
#define CSPROMINENTDISPLAYVIEWCONTROLLER_H

@class UIViewController, NSString, NSLocale, BSUIVibrancyLUT, UIView, UIFont, NSDate, UIColor, BSUIVibrancyConfiguration;


#import "CSProminentDisplayInteractiveTransition.h"

@interface CSProminentDisplayViewController : UIViewController

@property (copy, nonatomic) NSString *alternateCalendarIdentifier; // ivar: _alternateCalendarIdentifier
@property (retain, nonatomic) NSLocale *alternateCalendarLocale; // ivar: _alternateCalendarLocale
@property (readonly, nonatomic) BSUIVibrancyLUT *alternativeVibrancyEffectLUT; // ivar: _alternativeVibrancyEffectLUT
@property (nonatomic) NSInteger backgroundType; // ivar: _backgroundType
@property (readonly, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIFont *baseFont; // ivar: _baseFont
@property (retain, nonatomic) UIViewController *complicationContainerViewController; // ivar: _complicationContainerViewController
@property (nonatomic) CGFloat complicationRowAlpha; // ivar: _complicationRowAlpha
@property (retain, nonatomic) CSProminentDisplayInteractiveTransition *currentTransition; // ivar: _currentTransition
@property (retain, nonatomic) NSDate *displayDate; // ivar: _displayDate
@property (nonatomic) NSInteger effectType; // ivar: _effectType
@property (nonatomic) NSUInteger elements; // ivar: _elements
@property (copy, nonatomic) NSString *groupName; // ivar: _groupName
@property (copy, nonatomic) NSString *numberingSystem; // ivar: _numberingSystem
@property (nonatomic) BOOL shouldApplyVibrancyToComplications; // ivar: _shouldApplyVibrancyToComplications
@property (retain, nonatomic) UIViewController *subtitleComplicationViewController; // ivar: _subtitleComplicationViewController
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor
@property (nonatomic) CGFloat timeAlpha; // ivar: _timeAlpha
@property (nonatomic) BOOL usesEditingLayout;
@property (nonatomic) BOOL usesLandscapeTimeFontVariant;
@property (nonatomic) BOOL usesLightTimeFontVariant;
@property (readonly, nonatomic) BSUIVibrancyConfiguration *vibrancyConfiguration; // ivar: _vibrancyConfiguration
@property (nonatomic) NSInteger vibrancyContentType; // ivar: _vibrancyContentType


+(Class)viewClass;
-(BOOL)_canShowWhileLocked;
-(BOOL)_shouldShowElement:(NSUInteger)arg0 ;
-(id)_customSubtitleGlyphWithName:(id)arg0 ;
-(id)_displayView;
-(id)_displayViewIfLoaded;
-(id)_fallbackDate;
-(id)beginInteractiveTransitionToBaseFont:(id)arg0 textColor:(id)arg1 ;
-(id)beginInteractiveTransitionToBaseFont:(id)arg0 vibrancyConfiguration:(id)arg1 ;
-(id)beginInteractiveTransitionToBaseFont:(id)arg0 vibrancyConfiguration:(id)arg1 cachingVibrancyTransitionProvider:(id)arg2 ;
-(id)effectiveTextColor;
-(id)init;
-(id)initWithElements:(NSUInteger)arg0 baseFont:(id)arg1 date:(id)arg2 textColor:(id)arg3 ;
-(id)initWithElements:(NSUInteger)arg0 date:(id)arg1 textColor:(id)arg2 ;
-(struct CGRect )contentBoundingBox;
-(void)_createOrDestroyComplicationRowElementIfNecessary;
-(void)_createOrDestroySubtitleComplicationElementIfNecessary;
-(void)_createOrDestroySubtitleElementIfNecessary;
-(void)_createOrDestroyTimeElementIfNecessary;
-(void)_createOrDestroyVibrancyShadowViewIfNecessary;
-(void)_updateElements;
-(void)_updateViewColors;
-(void)interactiveTransition:(id)arg0 didFinishSuccessfully:(BOOL)arg1 ;
-(void)interactiveTransition:(id)arg0 didUpdate:(CGFloat)arg1 ;
-(void)loadView;
-(void)setContentAlpha:(CGFloat)arg0 ;
-(void)setContentAlpha:(CGFloat)arg0 forElements:(NSUInteger)arg1 ;
-(void)setCustomSubtitleWithText:(id)arg0 glyphName:(id)arg1 ;
-(void)setDateTimeAlignment:(NSInteger)arg0 ;
-(void)setTransientSubtitleText:(id)arg0 ;
-(void)setTransientSubtitleText:(id)arg0 withTimeout:(CGFloat)arg1 ;
-(void)updateCustomSubtitleWithText:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif
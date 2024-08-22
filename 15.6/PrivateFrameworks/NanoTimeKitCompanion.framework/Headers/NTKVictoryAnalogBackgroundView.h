// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKVICTORYANALOGBACKGROUNDVIEW_H
#define NTKVICTORYANALOGBACKGROUNDVIEW_H

@class UIView, CLKDevice, UIImage, NSMutableArray, NSArray, NSMutableDictionary, CAMediaTimingFunction;
@protocol NTKVictoryAnalogBackgroundViewDelegate, NTKVictoryAnalogBackgroundColorPalette;


#import "NTKVictoryLogoButton.h"

@interface NTKVictoryAnalogBackgroundView : UIView {
    CLKDevice *_device;
    UIImage *_dotImage;
    UIView *_contentView;
    NSMutableArray *_ringLayers;
    BOOL _ringLayerIsDigit;
    NSArray *_largeHourMarkerLabels;
    NSArray *_mediumNumberLayers;
    NSMutableDictionary *_smallHourMarkerLabelsByIndex;
    NSArray *_activeDigitIndices;
    BOOL _canonicalDigitStatesByStyle;
    CAMediaTimingFunction *_transitionTimingFunction;
    NTKVictoryLogoButton *_logoButton;
    NTKVictoryLogoButton *_smallLogoButton;
    CGPoint _logoPositionRing;
    CGPoint _logoPositionNoDigits;
    CGPoint _logoPositionBig;
    CGPoint _logoPositionSmallFont;
    CGPoint _logoPositionCircularDial;
    CGFloat _dialShapeFraction;
}


@property (weak, nonatomic) NSObject<NTKVictoryAnalogBackgroundViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger dialShape; // ivar: _dialShape
@property (retain, nonatomic) UIImage *logoImage; // ivar: _logoImage
@property (retain, nonatomic) NSObject<NTKVictoryAnalogBackgroundColorPalette> *palette; // ivar: _palette
@property (nonatomic) NSUInteger style; // ivar: _style


+(id)_disabledLayerActions;
-(BOOL)isCircularDial;
-(CGFloat)_elementScaleForTransitionProgress:(CGFloat)arg0 initialScale:(CGFloat)arg1 middleScale:(CGFloat)arg2 finalScale:(CGFloat)arg3 ;
-(CGFloat)_transitionProgressForDigitAtIndex:(NSUInteger)arg0 overallProgress:(CGFloat)arg1 delayPerDigit:(CGFloat)arg2 digitTransitionLength:(CGFloat)arg3 ;
-(NSUInteger)_digitForIndex:(NSUInteger)arg0 ;
-(id)_activeRingLayers;
-(id)_activeRingObjects;
-(id)_circularDialLogoImage;
-(id)_createAndAddLayersWithCount:(NSUInteger)arg0 ;
-(id)_createHourMarkerLabelsWithFontSize:(CGFloat)arg0 ;
-(id)_createSmallHourMarkerLabelForIndex:(id)arg0 ;
-(id)_dotImage;
-(id)digitForLargeNumberAtIndex:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 forDevice:(id)arg1 ;
-(struct CGColor *)_layerTransitionColorFromColor:(id)arg0 toColor:(id)arg1 amount:(CGFloat)arg2 ;
-(struct CGPoint )_ringDigitOffsetAtIndex:(NSUInteger)arg0 ;
-(struct CGPoint )centerPointForSmallHourMarkerAtIndex:(NSUInteger)arg0 ;
-(struct CGPoint )logoPositionForStyle:(NSUInteger)arg0 ;
-(struct CGSize )logoSizeForStyle:(NSUInteger)arg0 ;
-(void)_applyPalette:(id)arg0 forStyle:(NSUInteger)arg1 ;
-(void)_clearTransitionStateForStyle:(NSUInteger)arg0 palette:(id)arg1 ;
-(void)_createLargeHourMarkerLabelsAndAttachToViewIfNeeded;
-(void)_createMediumNumberLayersIfNeededAndAttachToViewIfNeeded;
-(void)_createRingLayersIfNeeded;
-(void)_logoTapped:(id)arg0 ;
-(void)_setRingLayerAtIndex:(NSUInteger)arg0 isDigit:(BOOL)arg1 ;
-(void)addLogoButtonIfNeeded;
-(void)addSmallLogoButtonIfNeeded;
-(void)applyTransitionFraction:(CGFloat)arg0 fromDialShape:(NSUInteger)arg1 toDialShape:(NSUInteger)arg2 ;
-(void)applyTransitionFraction:(CGFloat)arg0 fromOlympusStyle:(NSUInteger)arg1 toOlympusStyle:(NSUInteger)arg2 ;
-(void)applyTransitionFraction:(CGFloat)arg0 fromPalette:(id)arg1 toPalette:(id)arg2 style:(NSUInteger)arg3 ;
-(void)applyTransitionFraction:(CGFloat)arg0 fromPalette:(id)arg1 toPalette:(id)arg2 style:(NSUInteger)arg3 animateElements:(BOOL)arg4 ;
-(void)layoutNumbers;
-(void)layoutSubviews;
-(void)setInTimeTravel:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)willBeginEditing;


@end


#endif
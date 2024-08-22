// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKOLYMPUSTIMEVIEW_H
#define NTKOLYMPUSTIMEVIEW_H

@class UIView, UIImage, NSDate, NSString, CLKDevice;
@protocol NTKOlympusContentViewDelegate, NTKTimeView, NTKOlympusViewDelegate;


#import "NTKOlympusTimeContentView.h"
#import "NTKOlympusColorPalette.h"

@interface NTKOlympusTimeView : UIView <NTKOlympusContentViewDelegate, NTKTimeView>



@property (retain, nonatomic) UIImage *circularLogoImage; // ivar: _circularLogoImage
@property (retain, nonatomic) NTKOlympusTimeContentView *contentView; // ivar: _contentView
@property (nonatomic) NTKOlympusColorPalette *currentColorPalette; // ivar: _currentColorPalette
@property (nonatomic) NSUInteger currentDial; // ivar: _currentDial
@property (nonatomic) NSUInteger currentStyle; // ivar: _currentStyle
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NTKOlympusViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CLKDevice *device; // ivar: _device
@property (nonatomic, getter=isFrozen) BOOL frozen; // ivar: frozen
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat hourHandAngle; // ivar: _hourHandAngle
@property (nonatomic) BOOL maskingPathStartsFromHourHand; // ivar: _maskingPathStartsFromHourHand
@property (nonatomic) CGSize maskingSize; // ivar: _maskingSize
@property (nonatomic) CGFloat minuteHandAngle; // ivar: _minuteHandAngle
@property (retain, nonatomic) NTKOlympusTimeContentView *overlayContentView; // ivar: _overlayContentView
@property (readonly) Class superclass;
@property (nonatomic) BOOL useSmallFont; // ivar: _useSmallFont


-(BOOL)_hasWindrunnerWedge;
-(BOOL)_maskingPathStartsFromHourHandForDate:(id)arg0 ;
-(CGFloat)_calculateDeviationBetweenHourAngle:(CGFloat)arg0 minuteAngle:(CGFloat)arg1 ;
-(CGFloat)shortestPathBetweenStartAngle:(CGFloat)arg0 targetAngle:(CGFloat)arg1 ;
-(id)initWithDevice:(id)arg0 dial:(NSUInteger)arg1 style:(NSUInteger)arg2 colorPalette:(id)arg3 date:(id)arg4 ;
-(id)initWithDevice:(id)arg0 dial:(NSUInteger)arg1 style:(NSUInteger)arg2 colorPalette:(id)arg3 date:(id)arg4 useSmallFont:(BOOL)arg5 circularLogoImage:(id)arg6 ;
-(void)_createContentViewIfNeeded;
-(void)_createOverlayViewIfNeeded;
-(void)animateClockHandsFromDate:(id)arg0 toDate:(id)arg1 duration:(CGFloat)arg2 ;
-(void)applyTransitionFraction:(CGFloat)arg0 fromColorPalette:(id)arg1 toColorPalette:(id)arg2 animateElements:(BOOL)arg3 ;
-(void)applyTransitionFraction:(CGFloat)arg0 fromDial:(NSUInteger)arg1 toDial:(NSUInteger)arg2 ;
-(void)applyTransitionFraction:(CGFloat)arg0 fromStyle:(NSUInteger)arg1 toStyle:(NSUInteger)arg2 ;
-(void)applyWindrunnerMaskStartAngle:(CGFloat)arg0 endAngle:(CGFloat)arg1 ;
-(void)applyWindrunnerMaskWithDate:(id)arg0 ;
-(void)applyWindrunnerMaskWithDate:(id)arg0 force:(BOOL)arg1 ;
-(void)applyWindrunnerMaskWithHourAngle:(CGFloat)arg0 minuteAngle:(CGFloat)arg1 ;
-(void)cleanupAfterEditing;
-(void)configureViewsForEditing;
-(void)createAndRemoveViewsForCurrentStateIfNeeded;
-(void)layoutSubviews;
-(void)olympusContentView:(id)arg0 didHandleLogoTouchUpInsideFromRect:(struct CGRect )arg1 ;
-(void)olympusContentViewDidHandleLogoHighlighted:(id)arg0 ;
-(void)olympusContentViewDidHandleLogoResetHighlight:(id)arg0 ;
-(void)openVictoryAppFromRect:(struct CGRect )arg0 ;
-(void)prepareForEditing;
-(void)setOverrideDate:(id)arg0 duration:(CGFloat)arg1 ;
-(void)setTimeOffset:(CGFloat)arg0 ;
-(void)setupViewsForCurrentState:(BOOL)arg0 ;
-(void)updateMaskingPathStartPointWithNewHourAngle:(CGFloat)arg0 newMinuteAngle:(CGFloat)arg1 ;


@end


#endif
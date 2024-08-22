// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKVICTORYDIGITALTIMEVIEW_H
#define NTKVICTORYDIGITALTIMEVIEW_H

@class UIView, CLKDevice, CLKTimeFormatter, NSString;
@protocol CLKTimeFormatterObserver, NTKTimeView, NTKVictoryDigitalColorPalette, NTKVictoryDigitalTimeViewDelegate;


#import "NTKVictoryDigitsView.h"

@interface NTKVictoryDigitalTimeView : UIView <CLKTimeFormatterObserver, NTKTimeView>

 {
    CLKDevice *_device;
    NTKVictoryDigitsView *_upperDigitsView;
    NTKVictoryDigitsView *_lowerDigitsView;
    NTKVictoryDigitsView *_flipDigitsView;
    BOOL _flipViewIsLower;
    CLKTimeFormatter *_timeFormatter;
}


@property (retain, nonatomic) NSObject<NTKVictoryDigitalColorPalette> *colorPalette; // ivar: _colorPalette
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NTKVictoryDigitalTimeViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFrozen) BOOL frozen; // ivar: _frozen
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL invertedColors; // ivar: _invertedColors
@property (nonatomic) NSUInteger style; // ivar: _style
@property (readonly) Class superclass;


+(id)transitionTimingFunction;
-(NSInteger)_lowerDigitAppearanceForStyle:(NSUInteger)arg0 ;
-(NSInteger)_upperDigitAppearanceForStyle:(NSUInteger)arg0 ;
-(NSInteger)defaultAppearance;
-(id)initForDevice:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_resetDigitAppearanceForStyle:(NSUInteger)arg0 ;
-(void)_setFlipViewIsLower:(BOOL)arg0 ;
-(void)_setupFlipDigitsView;
-(void)applyPopAnimationTransitionFraction:(CGFloat)arg0 ;
-(void)applyTransitionFraction:(CGFloat)arg0 fromStyle:(NSUInteger)arg1 toStyle:(NSUInteger)arg2 ;
-(void)clearEditingTransitions;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setOverrideDate:(id)arg0 duration:(CGFloat)arg1 ;
-(void)setTimeOffset:(CGFloat)arg0 ;
-(void)timeFormatterTextDidChange:(id)arg0 ;
-(void)willBeginEditing;


@end


#endif
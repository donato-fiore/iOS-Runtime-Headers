// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDRICHCOMPLICATIONVIEW_H
#define CDRICHCOMPLICATIONVIEW_H

@class UIView, NSDate, NSString, CLKDevice, UIFontDescriptor, UIColor;
@protocol CDComplicationDisplay, CLKUITimeTravel, CLKMonochromeComplicationView, CLKMonochromeFilterProvider, CDComplicationDisplayObserver;



@interface CDRichComplicationView : UIView <CDComplicationDisplay, CLKUITimeTravel, CLKMonochromeComplicationView, CLKMonochromeFilterProvider>

 {
    BOOL _editing;
    BOOL _highlighted;
    NSDate *_timeTravelDate;
}


@property (nonatomic) BOOL canUseCurvedText; // ivar: canUseCurvedText
@property (readonly, nonatomic) NSDate *complicationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CLKDevice *device; // ivar: _device
@property (weak, nonatomic) NSObject<CDComplicationDisplayObserver> *displayObserver; // ivar: displayObserver
@property (readonly, nonatomic) NSInteger family; // ivar: _family
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: _filterProvider
@property (readonly, nonatomic) UIFontDescriptor *fontDescriptor; // ivar: _fontDescriptor
@property (readonly, nonatomic) CGFloat fontSizeFactor; // ivar: _fontSizeFactor
@property (nonatomic) NSInteger fontStyle; // ivar: _fontStyle
@property (retain, nonatomic) UIColor *foregroundColor; // ivar: _foregroundColor
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL paused; // ivar: _paused
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDate *timeTravelDate;


-(BOOL)viewShouldIgnoreTwoPieceImage:(id)arg0 ;
-(NSInteger)tritiumUpdateMode;
-(id)_fontWithSize:(CGFloat)arg0 withFontDescriptor:(id)arg1 ;
-(id)colorForView:(id)arg0 accented:(BOOL)arg1 ;
-(id)filterForView:(id)arg0 style:(NSInteger)arg1 ;
-(id)filterForView:(id)arg0 style:(NSInteger)arg1 fraction:(CGFloat)arg2 ;
-(id)filtersForView:(id)arg0 style:(NSInteger)arg1 ;
-(id)filtersForView:(id)arg0 style:(NSInteger)arg1 fraction:(CGFloat)arg2 ;
-(id)initWithFamily:(NSInteger)arg0 ;
-(id)interpolatedColorForView:(id)arg0 ;
-(void)_applyPausedUpdate;
-(void)_editingDidEnd;
-(void)_enumerateLabelsWithBlock:(id)arg0 ;
-(void)_setFontConfiguration:(struct CDRichComplicationFontConfiguration )arg0 ;
-(void)_setWhistlerAnalogEditingAlphaTransitonFraction:(CGFloat)arg0 direction:(NSInteger)arg1 position:(NSInteger)arg2 ;
-(void)_transitThemeFromTheme:(NSInteger)arg0 toTheme:(NSInteger)arg1 fraction:(CGFloat)arg2 ;
-(void)_transitToHighlightState:(BOOL)arg0 fraction:(CGFloat)arg1 ;
-(void)_updateColoringLabel:(id)arg0 withFontDescriptor:(id)arg1 andSizeFactor:(CGFloat)arg2 ;
-(void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg0 inGroup:(id)arg1 ;
-(void)setEditing:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)transitThemeFromTheme:(NSInteger)arg0 toTheme:(NSInteger)arg1 fraction:(CGFloat)arg2 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif
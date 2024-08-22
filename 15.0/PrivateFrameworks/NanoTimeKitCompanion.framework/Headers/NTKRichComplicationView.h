// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKRICHCOMPLICATIONVIEW_H
#define NTKRICHCOMPLICATIONVIEW_H

@class UIView, NSDate, NSString, CLKDevice, UIColor, CLKComplicationTemplate;
@protocol NTKTemplateComplicationDisplay, CLKMonochromeComplicationView, CLKMonochromeFilterProvider, NTKComplicationDisplayObserver;



@interface NTKRichComplicationView : UIView <NTKTemplateComplicationDisplay, CLKMonochromeComplicationView, CLKMonochromeFilterProvider>

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
@property (weak, nonatomic) NSObject<NTKComplicationDisplayObserver> *displayObserver; // ivar: displayObserver
@property (readonly, nonatomic) NSInteger family; // ivar: _family
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: _filterProvider
@property (retain, nonatomic) UIColor *foregroundColor; // ivar: _foregroundColor
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL paused; // ivar: _paused
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CLKComplicationTemplate *template; // ivar: _template
@property (nonatomic) BOOL templateWantsPlatter; // ivar: _templateWantsPlatter
@property (readonly, nonatomic) NSDate *timeTravelDate;


+(BOOL)handlesComplicationTemplate:(id)arg0 ;
-(BOOL)viewShouldIgnoreTwoPieceImage:(id)arg0 ;
-(NSInteger)tritiumUpdateMode;
-(NSUInteger)timelineAnimationFadeTypeOverride;
-(id)colorForView:(id)arg0 accented:(BOOL)arg1 ;
-(id)complicationTemplate;
-(id)filterForView:(id)arg0 style:(NSInteger)arg1 ;
-(id)filterForView:(id)arg0 style:(NSInteger)arg1 fraction:(CGFloat)arg2 ;
-(id)initWithFamily:(NSInteger)arg0 ;
-(id)interpolatedColorForView:(id)arg0 ;
-(void)_applyPausedUpdate;
-(void)_editingDidEnd;
-(void)_enumerateLabelsWithBlock:(id)arg0 ;
-(void)_handleTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)_setEditingTransitionFraction:(CGFloat)arg0 direction:(NSInteger)arg1 position:(NSInteger)arg2 type:(NSInteger)arg3 ;
-(void)_setWhistlerAnalogEditingAlphaTransitonFraction:(CGFloat)arg0 direction:(NSInteger)arg1 position:(NSInteger)arg2 ;
-(void)_transitThemeFromTheme:(NSInteger)arg0 toTheme:(NSInteger)arg1 fraction:(CGFloat)arg2 ;
-(void)_transitToHighlightState:(BOOL)arg0 fraction:(CGFloat)arg1 ;
-(void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg0 inGroup:(id)arg1 ;
-(void)setComplicationTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)setEditing:(BOOL)arg0 ;
-(void)setEditingTransitionFraction:(CGFloat)arg0 direction:(NSInteger)arg1 position:(NSInteger)arg2 type:(NSInteger)arg3 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)transitThemeFromTheme:(NSInteger)arg0 toTheme:(NSInteger)arg1 fraction:(CGFloat)arg2 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKCOMPLICATIONDISPLAYWRAPPERVIEW_H
#define NTKCOMPLICATIONDISPLAYWRAPPERVIEW_H

@class UIControl, UIView<CDComplicationDisplay>, UIView, CLKComplicationTemplate, NSDate, NSString;
@protocol CDComplicationDisplayObserver, CLKSensitiveUIStateObserver, NTKControl, CLKUITimeTravel, NTKComplicationDisplayWrapperViewAnimationDelegate, CLKMonochromeFilterProvider;



@interface NTKComplicationDisplayWrapperView : UIControl <CDComplicationDisplayObserver, CLKSensitiveUIStateObserver, NTKControl, CLKUITimeTravel>

 {
    UIView<CDComplicationDisplay> *_currentComplicationView;
    UIView<CDComplicationDisplay> *_nextComplicationView;
    UIView<CDComplicationDisplay> *_deferredComplicationView;
    UIView *_clipView;
    UIView *_earlierContainerView;
    UIView *_laterContainerView;
    CLKComplicationTemplate *_prevTemplate;
    CLKComplicationTemplate *_template;
    NSDate *_timeTravelDate;
    BOOL _didChangeLayoutOverride;
    BOOL _isAnimating;
    BOOL _isDetachedDisplay;
}


@property (nonatomic) CGFloat alphaForDimmedState; // ivar: _alphaForDimmedState
@property (weak, nonatomic) NSObject<NTKComplicationDisplayWrapperViewAnimationDelegate> *animationDelegate; // ivar: _animationDelegate
@property (retain, nonatomic) NSString *complicationSlotIdentifier; // ivar: _complicationSlotIdentifier
@property (readonly, nonatomic) CLKComplicationTemplate *complicationTemplate; // ivar: _complicationTemplate
@property (nonatomic) CGAffineTransform contentTransform; // ivar: _contentTransform
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDimmed) BOOL dimmed; // ivar: _dimmed
@property (readonly, nonatomic) UIView<CDComplicationDisplay> *display; // ivar: _display
@property (copy, nonatomic) id *displayConfigurationHandler; // ivar: _displayConfigurationHandler
@property (nonatomic) BOOL editing; // ivar: _editing
@property (nonatomic) CGAffineTransform editingTransform; // ivar: _editingTransform
@property (readonly, nonatomic) NSInteger family; // ivar: _family
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: _filterProvider
@property (readonly, nonatomic) BOOL hasLegacyDisplay; // ivar: _hasLegacyDisplay
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger layoutOverride; // ivar: _layoutOverride
@property (nonatomic) CGSize maxSize; // ivar: _maxSize
@property (copy, nonatomic) id *needsResizeHandler; // ivar: _needsResizeHandler
@property (nonatomic) BOOL paused; // ivar: _paused
@property (readonly, nonatomic) CGSize preferredSize;
@property (copy, nonatomic) id *renderStatsHandler; // ivar: _renderStatsHandler
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsCurvedText; // ivar: _supportsCurvedText
@property (nonatomic) BOOL tapEnabled; // ivar: _tapEnabled
@property (copy, nonatomic) id *touchDownHandler; // ivar: _touchDownHandler
@property (copy, nonatomic) id *touchUpInsideHandler; // ivar: _touchUpInsideHandler
@property (nonatomic) CGAffineTransform tritiumTransform; // ivar: _tritiumTransform


-(BOOL)_invokeTouchUpInsideHandler;
-(BOOL)performTap;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)shouldCancelTouchesInScrollview;
-(id)init;
-(id)initWithCustomRichDisplay:(id)arg0 ;
-(id)initWithCustomTemplateDisplay:(id)arg0 isDetachedDisplay:(BOOL)arg1 family:(NSInteger)arg2 ;
-(id)initWithFamily:(NSInteger)arg0 ;
-(id)initWithLegacyDisplay:(id)arg0 ;
-(id)initWithLegacyDisplay:(id)arg0 layoutOverride:(NSInteger)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_didSetDisplayFromDisplay:(id)arg0 withComplicationAnimation:(NSUInteger)arg1 ;
-(void)_invokeNeedsResizeHandler;
-(void)_invokeTouchDownHandler;
-(void)_prepareToSetDisplay:(id)arg0 withComplicationAnimation:(*NSUInteger)arg1 ;
-(void)_removeDisplay:(id)arg0 ;
-(void)_replaceDisplayWithDisplayClass:(Class)arg0 template:(id)arg1 reason:(NSInteger)arg2 animation:(NSUInteger)arg3 animationType:(NSUInteger)arg4 animationFraction:(float)arg5 ;
-(void)_resetComplicationViews;
-(void)_timelineAnimationDidFinish;
-(void)_tryToSetDisplayHighlighted:(BOOL)arg0 ;
-(void)_updateConcatenatedTransform;
-(void)_updateVisibilityForSensitivity:(NSInteger)arg0 ;
-(void)complicationDisplay:(id)arg0 renderStatsWithTime:(CGFloat)arg1 cost:(CGFloat)arg2 ;
-(void)complicationDisplayNeedsResize:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)needsResize;
-(void)sensitiveUIStateChanged;
-(void)setComplicationView:(id)arg0 withComplicationAnimation:(NSUInteger)arg1 animationType:(NSUInteger)arg2 animationFraction:(float)arg3 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setTimeTravelDate:(id)arg0 animated:(BOOL)arg1 ;
-(void)setTransform:(struct CGAffineTransform )arg0 ;


@end


#endif
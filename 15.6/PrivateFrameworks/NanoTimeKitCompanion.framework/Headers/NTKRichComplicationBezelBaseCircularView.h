// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKRICHCOMPLICATIONBEZELBASECIRCULARVIEW_H
#define NTKRICHCOMPLICATIONBEZELBASECIRCULARVIEW_H

@class NSString;
@protocol NTKComplicationDisplayObserver, NTKRichComplicationCircularBezelView;


#import "NTKRichComplicationBezelView.h"
#import "NTKCurvedColoringLabel.h"
#import "NTKRichComplicationView.h"

@interface NTKRichComplicationBezelBaseCircularView : NTKRichComplicationBezelView <NTKComplicationDisplayObserver, NTKRichComplicationCircularBezelView>

 {
    CGFloat _circularViewRotationInDegree;
    NTKCurvedColoringLabel *_bezelTextLabel;
    CGFloat _bezelTextLabelRotationInDegree;
    CGFloat _newDataAnimationCircularScale;
    CGFloat _newDataAnimationBezelLabelScale;
    BOOL _allowUpdatingBezelTextProperties;
    BOOL _allowNofityingDelegateWithBezelTextUpdate;
    NSInteger _fromTheme;
    NSInteger _toTheme;
    CGFloat _themeFraction;
    BOOL _inMonochromeMode;
}


@property (nonatomic) CGFloat bezelLabelCircularRadius; // ivar: _bezelLabelCircularRadius
@property (readonly, nonatomic) NTKRichComplicationView *circularView; // ivar: _circularView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)updateCustomDataAnimationFromEarlierView:(id)arg0 laterView:(id)arg1 isForward:(BOOL)arg2 animationType:(NSUInteger)arg3 animationDuration:(CGFloat)arg4 animationFraction:(float)arg5 bezelTextUpdateHandler:(id)arg6 ;
-(Class)_circularViewClassFromFromTemplate:(id)arg0 ;
-(id)_bezelTextProviderFromTemplate:(id)arg0 ;
-(id)_circularTemplateFromTemplate:(id)arg0 ;
-(id)init;
-(void)_applyPausedUpdate;
-(void)_createBezelLabel;
-(void)_editingDidEnd;
-(void)_enumerateLabelsWithBlock:(id)arg0 ;
-(void)_handleTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)_layoutBezelLabel;
-(void)_layoutCircularView;
-(void)_setEditingTransitionFraction:(CGFloat)arg0 direction:(NSInteger)arg1 position:(NSInteger)arg2 type:(NSInteger)arg3 ;
-(void)_setWhistlerAnalogEditingTransitonFraction:(CGFloat)arg0 direction:(NSInteger)arg1 position:(NSInteger)arg2 ;
-(void)_transitThemeFromTheme:(NSInteger)arg0 toTheme:(NSInteger)arg1 fraction:(CGFloat)arg2 ;
-(void)_transitToHighlightState:(BOOL)arg0 fraction:(CGFloat)arg1 ;
// -(void)_updateNewDataAnimationFinalAlpha:(CGFloat)arg0 finalBezelLabelScale:(CGFloat)arg1 finalCircularViewScale:(CGFloat)arg2 animationApplierBlock:(id)arg3 animationFraction:(unk)arg4  ;
-(void)complicationDisplay:(id)arg0 renderStatsWithTime:(CGFloat)arg1 cost:(CGFloat)arg2 ;
-(void)complicationDisplayNeedsResize:(id)arg0 ;
-(void)layoutSubviews;
-(void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg0 inGroup:(id)arg1 ;
-(void)setBezelTextColor:(id)arg0 ;
-(void)setForegroundColor:(id)arg0 ;
-(void)setTimeTravelDate:(id)arg0 animated:(BOOL)arg1 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif
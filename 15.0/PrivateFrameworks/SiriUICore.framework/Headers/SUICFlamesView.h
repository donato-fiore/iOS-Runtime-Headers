// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUICFLAMESVIEW_H
#define SUICFLAMESVIEW_H

@class UIView, UIView<SUICFlamesViewProviding>, NSString, UIColor, UIImage;
@protocol SUICFlamesViewProvidingDelegate, SUICFlamesViewDelegate;



@interface SUICFlamesView : UIView <SUICFlamesViewProvidingDelegate>

 {
    UIView<SUICFlamesViewProviding> *_flamesView;
}


@property (nonatomic) BOOL accelerateTransitions;
@property (nonatomic) CGRect activeFrame;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIColor *dictationColor;
@property (weak, nonatomic) NSObject<SUICFlamesViewDelegate> *flamesDelegate; // ivar: _flamesDelegate
@property (nonatomic) BOOL freezesAura;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat horizontalScaleFactor;
@property (readonly, nonatomic) BOOL isRenderingEnabled;
@property (nonatomic) NSInteger mode;
@property (retain, nonatomic) UIImage *overlayImage;
@property (nonatomic) BOOL paused;
@property (nonatomic) BOOL reduceFrameRate;
@property (nonatomic) BOOL reduceThinkingFramerate;
@property (nonatomic) BOOL renderInBackground;
@property (nonatomic) BOOL showAura;
@property (nonatomic) NSInteger state;
@property (readonly) Class superclass;


+(BOOL)_isMetalAvailable;
-(float)audioLevelForFlamesView:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 screen:(id)arg1 fidelity:(NSInteger)arg2 ;
-(void)didMoveToSuperview;
-(void)fadeOutCurrentAura;
-(void)flamesViewAuraDidDisplay:(id)arg0 ;
-(void)layoutSubviews;
-(void)prewarmShadersForCurrentMode;
-(void)resetAndReinitialize:(BOOL)arg0 ;
-(void)resetAndReinitializeMetal:(BOOL)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)setRenderingEnabled:(BOOL)arg0 forReason:(id)arg1 ;


@end


#endif
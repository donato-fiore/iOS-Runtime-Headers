// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APWDEBUGLIGHTVIEW_H
#define APWDEBUGLIGHTVIEW_H

@class UIView, CADisplayLink, UIColor;



@interface APWDebugLightView : UIView {
    UIView *_ledView;
    BOOL _ledIsOn;
    NSInteger _blinkHertz;
    CADisplayLink *_blinkDisplayLink;
}


@property (retain, nonatomic) UIColor *ledColor; // ivar: _ledColor


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_displayLinkDidUpdate:(id)arg0 ;
-(void)_startBlinking;
-(void)_stopBlinking;
-(void)_updateLedOnState;
-(void)blink:(NSInteger)arg0 ;
-(void)invalidate;
-(void)layoutSubviews;
-(void)turnOff;
-(void)turnOn;
-(void)willMoveToSuperview:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif
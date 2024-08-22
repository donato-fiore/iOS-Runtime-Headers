// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKTRANSITIONFADETHRUCOLOR_H
#define OKTRANSITIONFADETHRUCOLOR_H

@class OFUIView, UIColor;


#import "OKTransition.h"

@interface OKTransitionFadeThruColor : OKTransition {
    OFUIView *_colorView;
}


@property (retain) UIColor *color; // ivar: _color


+(id)supportedSettings;
-(id)initWithSettings:(id)arg0 ;
-(void)_transitionInView:(id)arg0 fromSubview:(id)arg1 toSubview:(id)arg2 wasInteractive:(BOOL)arg3 duration:(CGFloat)arg4 doEaseIn:(BOOL)arg5 doEaseOut:(BOOL)arg6 isCompleting:(BOOL)arg7 wasCancelled:(BOOL)arg8 fromProgress:(CGFloat)arg9 completionHandler:(id)arg10 ;
-(void)dealloc;
-(void)makeCurrentTransitionInteractiveWithContext:(id)arg0 andProgress:(CGFloat)arg1 ;
-(void)setSettingColor:(id)arg0 ;
-(void)startInteractiveTransitionWithContext:(id)arg0 ;
-(void)updateInteractiveTransitionWithContext:(id)arg0 andProgress:(CGFloat)arg1 ;


@end


#endif
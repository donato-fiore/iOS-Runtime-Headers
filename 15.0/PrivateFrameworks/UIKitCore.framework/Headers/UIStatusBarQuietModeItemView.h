// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISTATUSBARQUIETMODEITEMVIEW_H
#define UISTATUSBARQUIETMODEITEMVIEW_H

@class NSString;
@protocol CAAnimationDelegate;


#import "UIStatusBarIndicatorItemView.h"

@interface UIStatusBarQuietModeItemView : UIStatusBarIndicatorItemView <CAAnimationDelegate>

 {
    BOOL _hideForAction;
    BOOL _registeredForNotifications;
    BOOL _inactive;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)updateForNewData:(id)arg0 actions:(int)arg1 ;
-(CGFloat)_visibleAlpha;
-(id)accessibilityHUDRepresentation;
-(void)_triggerAction:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)dealloc;
-(void)setVisible:(BOOL)arg0 ;
-(void)setVisible:(BOOL)arg0 frame:(struct CGRect )arg1 duration:(CGFloat)arg2 ;


@end


#endif
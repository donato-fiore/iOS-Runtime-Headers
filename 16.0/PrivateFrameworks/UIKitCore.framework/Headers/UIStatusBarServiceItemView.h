// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISTATUSBARSERVICEITEMVIEW_H
#define UISTATUSBARSERVICEITEMVIEW_H

@class NSString;


#import "UIStatusBarItemView.h"

@interface UIStatusBarServiceItemView : UIStatusBarItemView {
    NSString *_serviceString;
    NSString *_crossfadeString;
    NSUInteger _crossfadeStep;
    CGFloat _maxWidth;
    CGFloat _serviceWidth;
    CGFloat _crossfadeWidth;
    int _contentType;
    BOOL _loopingNecessaryForString;
    BOOL _loopNowIfNecessary;
    BOOL _loopingNow;
    CGFloat _letterSpacing;
}




-(BOOL)_crossfaded;
-(BOOL)_loopingNecessary;
-(BOOL)animatesDataChange;
-(BOOL)updateForContentType:(int)arg0 serviceString:(id)arg1 serviceCrossfadeString:(id)arg2 maxWidth:(CGFloat)arg3 actions:(int)arg4 ;
-(BOOL)updateForNewData:(id)arg0 actions:(int)arg1 ;
-(CGFloat)addContentOverlap:(CGFloat)arg0 ;
-(CGFloat)extraRightPadding;
-(CGFloat)resetContentOverlap;
-(CGFloat)standardPadding;
-(CGFloat)updateContentsAndWidth;
-(NSInteger)legibilityStyle;
-(id)_contentsImageFromString:(id)arg0 withWidth:(CGFloat)arg1 letterSpacing:(CGFloat)arg2 ;
-(id)_crossfadeContentsImage;
-(id)_serviceContentsImage;
-(id)accessibilityHUDRepresentation;
-(id)contentsImage;
-(void)_crossfadeStepAnimation;
-(void)_loopAnimationDidStopInDirection:(BOOL)arg0 ;
-(void)performPendedActions;
-(void)setVisible:(BOOL)arg0 frame:(struct CGRect )arg1 duration:(CGFloat)arg2 ;


@end


#endif
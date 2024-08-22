// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHOMESCREENBACKDROPDARKTINTVIEW_H
#define SBHOMESCREENBACKDROPDARKTINTVIEW_H

@class UIView;


#import "SBHomeScreenBackdropViewBase.h"

@interface SBHomeScreenBackdropDarkTintView : SBHomeScreenBackdropViewBase {
    UIView *_darkTintView;
}




-(BOOL)isOpaque;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateDarkTintViewHidden;
-(void)beginRequiringBackdropViewForReason:(id)arg0 ;
-(void)beginRequiringLiveBackdropViewForReason:(id)arg0 ;
-(void)endRequiringBackdropViewForReason:(id)arg0 ;
-(void)endRequiringLiveBackdropViewForReason:(id)arg0 ;
-(void)setBlurProgress:(CGFloat)arg0 behaviorMode:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif
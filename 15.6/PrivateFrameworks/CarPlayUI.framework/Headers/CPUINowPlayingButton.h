// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPUINOWPLAYINGBUTTON_H
#define CPUINOWPLAYINGBUTTON_H

@class UIButton, UIImageView, NSString;


#import "CPUINowPlayingButtonView.h"

@interface CPUINowPlayingButton : UIButton {
    CPUINowPlayingButtonView *_nowPlayingView;
    UIImageView *_focusBackgroundView;
}


@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier


-(BOOL)canBecomeFocused;
-(id)init;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif
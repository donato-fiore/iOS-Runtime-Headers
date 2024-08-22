// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UILUMATRACKINGBACKDROPVIEW_H
#define _UILUMATRACKINGBACKDROPVIEW_H

@protocol _UILumaTrackingBackdropViewDelegate;


#import "UIView.h"

@interface _UILumaTrackingBackdropView : UIView {
    NSUInteger _backgroundLuminanceLevel;
    ? _transitionPoints;
}


@property (readonly, nonatomic) NSUInteger backgroundLuminanceLevel;
@property (readonly, weak, nonatomic) NSObject<_UILumaTrackingBackdropViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (nonatomic) ? transitionBoundaries; // ivar: transitionBoundaries


+(Class)layerClass;
-(id)_backdropLayer;
-(id)initWithTransitionBoundaries:(struct ? )arg0 delegate:(id)arg1 frame:(struct CGRect )arg2 ;
-(void)_didChangeLuma:(id)arg0 ;
-(void)backdropLayer:(id)arg0 didChangeLuma:(CGFloat)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)unpauseAfterSeedingWithLumaLevel:(NSUInteger)arg0 ;


@end


#endif
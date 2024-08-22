// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBAPPRESIZEGRABBERVIEW_H
#define SBAPPRESIZEGRABBERVIEW_H

@class UIView, MTLumaDodgePillView, NSString;
@protocol MTLumaDodgePillBackgroundLuminanceObserver, UIPointerInteractionDelegate;



@interface SBAppResizeGrabberView : UIView <MTLumaDodgePillBackgroundLuminanceObserver, UIPointerInteractionDelegate>

 {
    MTLumaDodgePillView *_pillView;
    NSUInteger _corner;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_resizeGrabberPathForSize:(struct CGSize )arg0 curve:(CGFloat)arg1 lineWidth:(CGFloat)arg2 rotation:(CGFloat)arg3 ;
-(id)initWithCorner:(NSUInteger)arg0 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGRect )frameInContentRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)lumaDodgePillDidDetectBackgroundLuminanceChange:(id)arg0 ;


@end


#endif
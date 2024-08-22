// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSUIBACKDROPVIEW_H
#define BSUIBACKDROPVIEW_H

@class UIBackdropView;



@interface BSUIBackdropView : UIBackdropView {
    CGFloat _transitionProgress;
    CGFloat _initialScale;
    CGFloat _finalScale;
}


@property (nonatomic) CGFloat rasterizationScale; // ivar: _rasterizationScale
@property (nonatomic) CGFloat scaleForNoBlur; // ivar: _scaleForNoBlur


-(void)applySettings:(id)arg0 ;
-(void)transitionComplete;
-(void)transitionIncrementallyToSettings:(id)arg0 weighting:(CGFloat)arg1 ;


@end


#endif
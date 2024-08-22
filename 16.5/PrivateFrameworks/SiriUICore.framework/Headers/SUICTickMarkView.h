// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUICTICKMARKVIEW_H
#define SUICTICKMARKVIEW_H

@class UIView, CADisplayLink, NSTimer, NSLock;



@interface SUICTickMarkView : UIView {
    CADisplayLink *_displayLink;
    BOOL _shown;
    NSInteger _currentPreferredFrameRate;
    NSInteger _currentFrame;
    int _animState;
    NSTimer *_safetyTimer;
    BOOL _completionCalled;
    id *_completionBlock;
    NSLock *_completionLock;
    NSInteger _fadeInFrames;
    NSInteger _pauseFrames;
    NSInteger _fadeOutFrames;
}




+(void)initialize;
-(id)init;
-(struct CGImage *)imageMask:(BOOL)arg0 ;
-(void)didMoveToSuperview;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)handleSafetyTimer:(id)arg0 ;
-(void)layoutSubviews;
-(void)setHidden:(BOOL)arg0 ;
-(void)setUpDisplayLink;
-(void)startAnimationsForTickMark:(BOOL)arg0 fadeInFrames:(NSInteger)arg1 pauseFrames:(NSInteger)arg2 fadeOutFrames:(NSInteger)arg3 completion:(id)arg4 ;
-(void)tearDownDisplayLink;


@end


#endif
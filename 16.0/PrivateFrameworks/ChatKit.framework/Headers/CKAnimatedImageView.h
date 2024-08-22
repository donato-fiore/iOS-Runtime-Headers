// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKANIMATEDIMAGEVIEW_H
#define CKANIMATEDIMAGEVIEW_H

@class UIImageView, NSString, NSArray;
@protocol CKAnimationTimerObserver;


#import "CKAnimatedImage.h"

@interface CKAnimatedImageView : UIImageView <CKAnimationTimerObserver>



@property (retain, nonatomic) CKAnimatedImage *animatedImage; // ivar: _animatedImage
@property (nonatomic) BOOL automaticallyObserveWindowForAnimationTimer; // ivar: _automaticallyObserveWindowForAnimationTimer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *frames; // ivar: _frames
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)animationTimerFired:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)updateAnimationTimerObserving;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLVIDEOSCRUBBERVIEW_H
#define QLVIDEOSCRUBBERVIEW_H

@class UIView, NSString, PHVideoScrubberView, UIScrollView;
@protocol PHVideoScrubberViewInteractionDelegate;



@interface QLVideoScrubberView : UIView <PHVideoScrubberViewInteractionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) PHVideoScrubberView *photosScrubber; // ivar: _photosScrubber
@property (readonly) UIScrollView *scrollView;
@property (readonly) Class superclass;
@property (nonatomic) BOOL touchGestureIsActive; // ivar: _touchGestureIsActive
@property (getter=isUserInteractingWithScrubber) BOOL userInteractingWithScrubber; // ivar: _userInteractingWithScrubber


-(void)_updateUserInteractingWithScrubberIfNeeded;
-(void)didBeginTouchingVideoScrubberView:(id)arg0 ;
-(void)didEndTouchingVideoScrubberView:(id)arg0 ;
-(void)layoutSubviews;
-(void)videoScrubberView:(id)arg0 didEndDeceleratingInScrollView:(id)arg1 ;
-(void)videoScrubberView:(id)arg0 didEndDraggingInScrollView:(id)arg1 ;
-(void)videoScrubberView:(id)arg0 willBeginDeceleratingInScrollView:(id)arg1 ;
-(void)videoScrubberView:(id)arg0 willBeginDraggingInScrollView:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKHIDEONTOUCHOUTSIDEVIEWGESTURERECOGNIZER_H
#define TSKHIDEONTOUCHOUTSIDEVIEWGESTURERECOGNIZER_H

@class UIGestureRecognizer, NSMutableSet, NSString, UIView;
@protocol UIGestureRecognizerDelegate;



@interface TSKHideOnTouchOutsideViewGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate>

 {
    NSMutableSet *mTargets;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) UIView *watchView; // ivar: mWatchView


+(BOOL)isInFlight;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 watchView:(id)arg2 ;
-(void)addTarget:(id)arg0 action:(SEL)arg1 ;
-(void)dealloc;
-(void)removeTarget:(id)arg0 action:(SEL)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKTOUCHOUTSIDEVIEWGESTURERECOGNIZER_H
#define AKTOUCHOUTSIDEVIEWGESTURERECOGNIZER_H

@class UIGestureRecognizer, NSMutableSet, NSString, UIView;
@protocol UIGestureRecognizerDelegate;



@interface AKTouchOutsideViewGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate>

 {
    NSMutableSet *mTargets;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *watchView; // ivar: mWatchView


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 watchView:(id)arg2 ;
-(void)addTarget:(id)arg0 action:(SEL)arg1 ;
-(void)dealloc;
-(void)removeTarget:(id)arg0 action:(SEL)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;


@end


#endif
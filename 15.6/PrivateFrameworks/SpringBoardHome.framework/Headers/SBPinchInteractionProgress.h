// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBPINCHINTERACTIONPROGRESS_H
#define SBPINCHINTERACTIONPROGRESS_H

@class UIInteractionProgress, NSString, UIPinchGestureRecognizer;
@protocol UIGestureRecognizerDelegate;



@interface SBPinchInteractionProgress : UIInteractionProgress <UIGestureRecognizerDelegate>

 {
    ? _pinchInterval;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat minPinchScale;
@property (readonly, nonatomic) UIPinchGestureRecognizer *pinchGesture; // ivar: _pinchGesture
@property (readonly) Class superclass;


-(id)initWithPinchGesture:(id)arg0 minPinchScale:(CGFloat)arg1 ;
-(void)_handlePinchGesture:(id)arg0 ;
-(void)_updatePinchScale:(CGFloat)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOSGRIDEDGESWIPEINTERACTIVEDISMISSALTRANSITION_H
#define PXPHOTOSGRIDEDGESWIPEINTERACTIVEDISMISSALTRANSITION_H

@class UIPercentDrivenInteractiveTransition, UIScreenEdgePanGestureRecognizer, UIViewController;
@protocol PXPhotosGridEdgeSwipeInteractiveDismissalDelegate;



@interface PXPhotosGridEdgeSwipeInteractiveDismissalTransition : UIPercentDrivenInteractiveTransition {
    BOOL isRTL;
}


@property (weak, nonatomic) NSObject<PXPhotosGridEdgeSwipeInteractiveDismissalDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UIScreenEdgePanGestureRecognizer *edgeSwipeGesture; // ivar: _edgeSwipeGesture
@property (readonly, nonatomic) UIViewController *viewController; // ivar: _viewController


-(BOOL)_shouldCompleteTransition;
-(id)initWithEdgeSwipeGesture:(id)arg0 viewController:(id)arg1 ;
-(void)_handleEdgeSwipeGesture:(id)arg0 ;
-(void)startInteractiveTransition:(id)arg0 ;


@end


#endif
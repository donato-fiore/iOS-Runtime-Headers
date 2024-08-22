// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIVIEWCONTROLLERCONTAINERCOLLECTIONVIEW_H
#define SKUIVIEWCONTROLLERCONTAINERCOLLECTIONVIEW_H

@class UICollectionView;



@interface SKUIViewControllerContainerCollectionView : UICollectionView {
    CGFloat _competingScrollViewPanGestureRecognizerHysteresis;
    BOOL _forcingIncreasedPanGestureRecognizerHysteresis;
    CGFloat _originalPanGestureRecognizerHysteresis;
    *__CFRunLoopObserver _runLoopObserver;
}




-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(void)_beginDynamicHysteresisIncreaseWithCompetingScrollView:(id)arg0 ;
-(void)_endDynamicHysteresisIncrease;
-(void)_updateStateForDynamicHysteresisIncrease;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif
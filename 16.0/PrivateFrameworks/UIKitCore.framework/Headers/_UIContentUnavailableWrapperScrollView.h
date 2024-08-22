// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICONTENTUNAVAILABLEWRAPPERSCROLLVIEW_H
#define _UICONTENTUNAVAILABLEWRAPPERSCROLLVIEW_H



#import "UIScrollView.h"

@interface _UIContentUnavailableWrapperScrollView : UIScrollView {
    BOOL _hasFlashedScrollIndicators;
}




-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(id)_effectiveBoundingPathAndBoundingPathView:(*id)arg0 ;
-(id)_parentScrollView;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)init;
-(void)_windowDidRotate:(id)arg0 ;
-(void)flashScrollIndicatorsIfNeeded;
-(void)setShowsVerticalScrollIndicator:(BOOL)arg0 ;


@end


#endif
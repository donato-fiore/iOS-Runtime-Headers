// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKBROWSERSWITCHERSCROLLPREVENTER_H
#define CKBROWSERSWITCHERSCROLLPREVENTER_H

@class UIView, UILongPressGestureRecognizer, NSString, UIScrollView;
@protocol UIScrollViewDelegate, UIGestureRecognizerDelegate, CKBrowserSwitcherScrollPreventerDelegate;



@interface CKBrowserSwitcherScrollPreventer : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate>

 {
    UILongPressGestureRecognizer *_touchTracker;
}


@property (nonatomic) CGPoint contentOffset;
@property (nonatomic) CGSize contentSize;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKBrowserSwitcherScrollPreventerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEngaged) BOOL engaged; // ivar: _engaged
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *horizontalScrollPreventerView; // ivar: _horizontalScrollPreventerView
@property (retain, nonatomic) UIScrollView *horizontalScrollView; // ivar: _horizontalScrollView
@property (nonatomic) BOOL scrollEnabled; // ivar: _scrollEnabled
@property (readonly) Class superclass;
@property (nonatomic, getter=isSwitching) BOOL switching; // ivar: _switching


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)touchTrackerRecognized:(id)arg0 ;


@end


#endif
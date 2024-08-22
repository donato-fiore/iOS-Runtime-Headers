// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIUICONTENTPLATTERVIEW_H
#define SIRIUICONTENTPLATTERVIEW_H

@class UIView, NSArray, NSString, PLPlatterView;
@protocol UIScrollViewDelegate, _SiriUIContentPlatterScrollViewDelegate, SiriUIDarkening, SiriUIContentPlatterViewDelegate;


#import "SiriUIContentPlatterDarkenMaskView.h"
#import "SiriUIPanDismissalGestureRecognizer.h"
#import "_SiriUIContentPlatterScrollView.h"

@interface SiriUIContentPlatterView : UIView <UIScrollViewDelegate, _SiriUIContentPlatterScrollViewDelegate, SiriUIDarkening>



@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (retain, nonatomic) NSArray *contentViews; // ivar: _contentViews
@property (nonatomic, getter=_currentContentOffset, setter=_setCurrentContentOffset:) CGFloat currentContentOffset; // ivar: _currentContentOffset
@property (nonatomic) CGFloat darkenIntensity;
@property (retain, nonatomic, getter=_darkenMaskView) SiriUIContentPlatterDarkenMaskView *darkenMaskView; // ivar: _darkenMaskView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SiriUIContentPlatterViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SiriUIPanDismissalGestureRecognizer *dismissalGestureRecognizer; // ivar: _dismissalGestureRecognizer
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=_platterNeedsLayout, setter=_setPlatterNeedsLayout:) BOOL platterNeedsLayout; // ivar: _platterNeedsLayout
@property (retain, nonatomic) PLPlatterView *platterView; // ivar: _platterView
@property (nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;
@property (retain, nonatomic, getter=_scrollView) _SiriUIContentPlatterScrollView *scrollView; // ivar: _scrollView
@property (nonatomic, getter=_shouldAllowDismissalWhenScrollable, setter=_setShouldAllowDismissalWhileScrollable:) BOOL shouldAllowDismissalWhileScrollable; // ivar: _shouldAllowDismissalWhileScrollable
@property (readonly) Class superclass;


-(BOOL)shouldAllowSimultaneousGestureRecognizersForScrollView:(id)arg0 ;
-(id)contentPlatterScrollView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateContentFullyScrolled;
-(void)layoutSubviews;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)setNeedsLayout;


@end


#endif
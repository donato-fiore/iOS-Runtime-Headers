// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SIRIUICONTENTPLATTERSCROLLVIEW_H
#define _SIRIUICONTENTPLATTERSCROLLVIEW_H

@class UIScrollView;
@protocol _SiriUIContentPlatterScrollViewDelegate;



@interface _SiriUIContentPlatterScrollView : UIScrollView

@property (nonatomic) BOOL adjustContentSizeOnNextLayout; // ivar: _adjustContentSizeOnNextLayout
@property (nonatomic, getter=isAutomaticScrollingEnabled) BOOL automaticScrollingEnabled; // ivar: _automaticScrollingEnabled
@property (weak, nonatomic) NSObject<_SiriUIContentPlatterScrollViewDelegate> *platterDelegate; // ivar: _platterDelegate


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_sharedInit;
-(void)layoutSubviews;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif
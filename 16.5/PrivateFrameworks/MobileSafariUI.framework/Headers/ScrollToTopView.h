// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCROLLTOTOPVIEW_H
#define SCROLLTOTOPVIEW_H

@class UIView;



@interface ScrollToTopView : UIView

@property (readonly, nonatomic) CGFloat defaultHeight;
@property (copy, nonatomic) id *showBarsBlock; // ivar: _showBarsBlock
@property (copy, nonatomic) id *targetBlock; // ivar: _targetBlock


-(id)_targetScrollView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithTargetBlock:(id)arg0 ;
-(void)_showBars;
-(void)_tappedScrollToTopView:(id)arg0 ;


@end


#endif
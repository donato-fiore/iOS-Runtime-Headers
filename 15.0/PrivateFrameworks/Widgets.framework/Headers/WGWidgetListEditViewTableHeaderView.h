// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WGWIDGETLISTEDITVIEWTABLEHEADERVIEW_H
#define WGWIDGETLISTEDITVIEWTABLEHEADERVIEW_H

@class UITableViewHeaderFooterView, UILabel;



@interface WGWidgetListEditViewTableHeaderView : UITableViewHeaderFooterView {
    UILabel *_headlineLabel;
    UILabel *_explanationLabel;
}


@property (readonly, nonatomic) CGFloat contentMinY;


-(id)initWithReuseIdentifier:(id)arg0 ;
-(id)initWithReuseIdentifier:(id)arg0 forTodayView:(BOOL)arg1 ;
-(struct CGRect )_explanationLabelFrameForBoundsWidth:(CGFloat)arg0 withHeadlineLabelFrame:(struct CGRect )arg1 ;
-(struct CGRect )_headlineLabelFrameForBoundsWidth:(CGFloat)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif
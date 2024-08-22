// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9DASHBOARD22DBDASHBOARDDIMMINGVIEW_H
#define _TTC9DASHBOARD22DBDASHBOARDDIMMINGVIEW_H

@class UIView;



@interface _TtC9DashBoard22DBDashboardDimmingView : UIView {
    ? dimmingRectViews;
    ? dimmingCornerViews;
    ? overlayColor;
}


@property (nonatomic) CGRect contentFrame; // ivar: contentFrame
@property (nonatomic) CGFloat cornerRadius; // ivar: cornerRadius


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif
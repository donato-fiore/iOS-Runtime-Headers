// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPAVCLIPPINGTABLEVIEW_H
#define MPAVCLIPPINGTABLEVIEW_H

@class UITableView, UIView, NSMutableDictionary;



@interface MPAVClippingTableView : UITableView

@property (retain, nonatomic) UIView *footerBackgroundView; // ivar: _footerBackgroundView
@property (retain, nonatomic) UIView *headerBackgroundView; // ivar: _headerBackgroundView
@property (retain, nonatomic) NSMutableDictionary *sectionBackgroundViews; // ivar: _sectionBackgroundViews


-(id)_createBackgroundView;
-(id)backgroundViewForSection:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 ;
-(void)layoutSubviews;


@end


#endif
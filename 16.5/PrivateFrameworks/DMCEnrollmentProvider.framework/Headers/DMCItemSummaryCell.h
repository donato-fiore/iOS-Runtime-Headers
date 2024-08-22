// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMCITEMSUMMARYCELL_H
#define DMCITEMSUMMARYCELL_H

@class UITableViewCell, NSArray;



@interface DMCItemSummaryCell : UITableViewCell

@property (nonatomic) CGFloat detailLabelOriginX; // ivar: _detailLabelOriginX
@property (retain, nonatomic) NSArray *detailViews; // ivar: _detailViews


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)createViewWithDescriptors:(id)arg0 ;
-(void)createViewWithItemDetailArray:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif
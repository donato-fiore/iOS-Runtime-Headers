// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CERTUIITEMDETAILSSUMMARYCELL_H
#define CERTUIITEMDETAILSSUMMARYCELL_H

@class UITableViewCell, NSArray;



@interface CertUIItemDetailsSummaryCell : UITableViewCell

@property (nonatomic) CGFloat detailLabelOriginX; // ivar: _detailLabelOriginX
@property (retain, nonatomic) NSArray *detailViews; // ivar: _detailViews


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)createViewWithDescriptors:(id)arg0 ;
-(void)createViewWithItemDetailArray:(id)arg0 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif
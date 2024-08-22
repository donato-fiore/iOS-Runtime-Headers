// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKREPORTTABLEVIEWCELL_H
#define _HKREPORTTABLEVIEWCELL_H

@class UITableViewCell, UIImageView, UILabel;



@interface _HKReportTableViewCell : UITableViewCell

@property (readonly, nonatomic) CGFloat minimumHeight; // ivar: _minimumHeight
@property (readonly, nonatomic) UIImageView *reportImageView; // ivar: _reportImageView
@property (readonly, nonatomic) UILabel *reportLabel; // ivar: _reportLabel


-(id)initWithWidth:(CGFloat)arg0 minimumHeight:(CGFloat)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_buildCellStructureWithWidth:(CGFloat)arg0 ;
-(void)setReportName:(id)arg0 reportImage:(id)arg1 ;


@end


#endif
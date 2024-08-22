// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQUITIPHOSTCELL_H
#define ICQUITIPHOSTCELL_H

@class PSTableCell, UIView;



@interface ICQUITipHostCell : PSTableCell

@property (retain, nonatomic) UIView *tipView; // ivar: _tipView


+(NSInteger)cellStyle;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setupContentViewToHostTip;
-(void)layoutSubviews;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;


@end


#endif
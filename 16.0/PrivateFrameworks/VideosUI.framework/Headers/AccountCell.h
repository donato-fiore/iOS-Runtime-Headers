// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACCOUNTCELL_H
#define ACCOUNTCELL_H

@class PSTableCell;



@interface AccountCell : PSTableCell



+(NSInteger)cellStyle;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureUserImage;
-(void)_setAccountImage:(id)arg0 ;
-(void)layoutSubviews;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;


@end


#endif
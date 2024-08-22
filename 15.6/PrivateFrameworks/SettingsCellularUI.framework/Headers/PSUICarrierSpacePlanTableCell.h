// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSUICARRIERSPACEPLANTABLECELL_H
#define PSUICARRIERSPACEPLANTABLECELL_H

@class PSTableCell;



@interface PSUICarrierSpacePlanTableCell : PSTableCell



+(id)checkIcon;
+(id)spacerIcon;
-(BOOL)canBeChecked;
-(id)accessoryText;
-(id)detailText;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(id)primaryText;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;
-(void)setChecked:(BOOL)arg0 ;


@end


#endif
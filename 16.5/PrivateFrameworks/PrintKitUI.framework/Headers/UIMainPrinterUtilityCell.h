// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIMAINPRINTERUTILITYCELL_H
#define UIMAINPRINTERUTILITYCELL_H

@class UITableViewCell, UIView, NSArray;



@interface UIMainPrinterUtilityCell : UITableViewCell {
    UIView *_supplyLevelsView;
}


@property (nonatomic) BOOL showSupplyDataUnderPrinterName; // ivar: _showSupplyDataUnderPrinterName
@property (retain, nonatomic) NSArray *supplies; // ivar: _supplies


-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif
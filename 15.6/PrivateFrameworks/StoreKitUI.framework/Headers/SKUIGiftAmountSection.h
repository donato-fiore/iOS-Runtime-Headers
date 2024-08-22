// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIGIFTAMOUNTSECTION_H
#define SKUIGIFTAMOUNTSECTION_H

@class UIControl, NSString;


#import "SKUIGiftTableViewSection.h"
#import "SKUIGiftAmountControl.h"

@interface SKUIGiftAmountSection : SKUIGiftTableViewSection {
    SKUIGiftAmountControl *_amountControl;
}


@property (readonly, nonatomic) UIControl *amountControl;
@property (readonly, nonatomic) NSInteger selectedAmount;
@property (readonly, nonatomic) NSString *selectedAmountString;


-(CGFloat)heightForCellInTableView:(id)arg0 indexPath:(id)arg1 ;
-(NSInteger)numberOfRowsInSection;
-(id)tableViewCellForTableView:(id)arg0 indexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forIndexPath:(id)arg2 ;


@end


#endif
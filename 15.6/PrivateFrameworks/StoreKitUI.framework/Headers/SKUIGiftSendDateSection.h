// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIGIFTSENDDATESECTION_H
#define SKUIGIFTSENDDATESECTION_H

@class NSString, NSDate;


#import "SKUIGiftTableViewSection.h"
#import "SKUIGiftTableSectionHeaderView.h"
#import "SKUIItem.h"

@interface SKUIGiftSendDateSection : SKUIGiftTableViewSection {
    NSString *_dateString;
    UIEdgeInsets _headerInsets;
    SKUIGiftTableSectionHeaderView *_headerView;
}


@property (retain, nonatomic) SKUIItem *giftItem; // ivar: _giftItem
@property (nonatomic) UIEdgeInsets headerInsets;
@property (copy, nonatomic) NSDate *sendDate; // ivar: _sendDate
@property (nonatomic) NSInteger sendDateStyle; // ivar: _sendDateStyle


-(CGFloat)heightForCellInTableView:(id)arg0 indexPath:(id)arg1 ;
-(NSInteger)numberOfRowsInSection;
-(id)_headerView;
-(id)headerViewForTableView:(id)arg0 ;
-(id)tableViewCellForTableView:(id)arg0 indexPath:(id)arg1 ;
-(void)_createFormattedDateString:(BOOL)arg0 ;
-(void)updateCell:(id)arg0 forTransitionToSize:(struct CGSize )arg1 ;


@end


#endif
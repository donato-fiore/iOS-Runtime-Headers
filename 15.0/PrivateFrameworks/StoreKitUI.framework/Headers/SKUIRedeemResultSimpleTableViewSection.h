// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIREDEEMRESULTSIMPLETABLEVIEWSECTION_H
#define SKUIREDEEMRESULTSIMPLETABLEVIEWSECTION_H

@class UIView;


#import "SKUITableViewSection.h"

@interface SKUIRedeemResultSimpleTableViewSection : SKUITableViewSection {
    UIView *_view;
}


@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets


-(CGFloat)heightForCellInTableView:(id)arg0 indexPath:(id)arg1 ;
-(NSInteger)numberOfRowsInSection;
-(id)initWithView:(id)arg0 ;
-(id)tableViewCellForTableView:(id)arg0 indexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forIndexPath:(id)arg2 ;


@end


#endif
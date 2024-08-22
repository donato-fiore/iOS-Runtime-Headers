// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIREDEEMRESULTLINKSTABLEVIEWSECTION_H
#define SKUIREDEEMRESULTLINKSTABLEVIEWSECTION_H

@class NSArray;


#import "SKUITableViewSection.h"

@interface SKUIRedeemResultLinksTableViewSection : SKUITableViewSection {
    NSArray *_links;
}


@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets


-(CGFloat)heightForCellInTableView:(id)arg0 indexPath:(id)arg1 ;
-(NSInteger)numberOfRowsInSection;
-(id)initWithLinks:(id)arg0 ;
-(id)tableViewCellForTableView:(id)arg0 indexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forIndexPath:(id)arg2 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUITABLEVIEWSECTION_H
#define SKUITABLEVIEWSECTION_H

@protocol SKUITableViewSectionDelegate;

#import <Foundation/Foundation.h>


@interface SKUITableViewSection : NSObject

@property (weak, nonatomic) NSObject<SKUITableViewSectionDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL hidesHeaderView; // ivar: _hidesHeaderView
@property (readonly, nonatomic) NSInteger numberOfRowsInSection;
@property (nonatomic) NSInteger sectionIndex; // ivar: _sectionIndex


-(CGFloat)heightForCellInTableView:(id)arg0 indexPath:(id)arg1 ;
-(id)footerViewForTableView:(id)arg0 ;
-(id)headerViewForTableView:(id)arg0 ;
-(id)tableViewCellForTableView:(id)arg0 indexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forIndexPath:(id)arg2 ;


@end


#endif
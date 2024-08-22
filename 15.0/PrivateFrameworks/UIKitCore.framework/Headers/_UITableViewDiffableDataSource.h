// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITABLEVIEWDIFFABLEDATASOURCE_H
#define _UITABLEVIEWDIFFABLEDATASOURCE_H

@class UIDiffableDataSourceSnapshotter;


#import "UITableView.h"

@interface _UITableViewDiffableDataSource : UIDiffableDataSourceSnapshotter

@property (nonatomic) NSInteger defaultRowAnimation; // ivar: _defaultRowAnimation
@property (readonly, weak, nonatomic) UITableView *tableView;


-(id)initWithTableView:(id)arg0 cellProvider:(id)arg1 ;
// -(id)initWithTableView:(id)arg0 reuseIdentifierProvider:(id)arg1 cellConfigurationHandler:(unk)arg2  ;


@end


#endif
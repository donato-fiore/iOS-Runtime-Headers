// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKSEARCHBAR_H
#define GKSEARCHBAR_H

@class UISearchBar;


#import "GKCollectionViewDataSource.h"

@interface GKSearchBar : UISearchBar

@property (retain, nonatomic) GKCollectionViewDataSource *dataSource; // ivar: _dataSource
@property (nonatomic) NSInteger sectionIndex; // ivar: _sectionIndex




@end


#endif
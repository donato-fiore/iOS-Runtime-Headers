// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHICONTABLEVIEWDIFFABLEDATASOURCE_H
#define SBHICONTABLEVIEWDIFFABLEDATASOURCE_H

@class UITableViewDiffableDataSource;


#import "SBHTableViewIconLibrary.h"
#import "SBHIconLibraryQueryResult.h"

@interface SBHIconTableViewDiffableDataSource : UITableViewDiffableDataSource

@property (retain, nonatomic) SBHTableViewIconLibrary *iconLibrary; // ivar: _iconLibrary
@property (readonly, nonatomic) SBHIconLibraryQueryResult *queryResult; // ivar: _queryResult


-(NSInteger)tableView:(id)arg0 sectionForSectionIndexTitle:(id)arg1 atIndex:(NSInteger)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg0 ;
-(void)applyQueryResult:(id)arg0 animatingDifferences:(BOOL)arg1 ;
-(void)applyQueryResult:(id)arg0 animatingDifferences:(BOOL)arg1 completion:(id)arg2 ;
-(void)applySnapshot:(id)arg0 animatingDifferences:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif
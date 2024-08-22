// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITABLEVIEWDIFFABLEDATASOURCE_H
#define UITABLEVIEWDIFFABLEDATASOURCE_H

@class NSString;
@protocol _UIDiffableDataSourceIdentifying, UITableViewDataSource;

#import <Foundation/Foundation.h>

#import "__UIDiffableDataSource.h"

@interface UITableViewDiffableDataSource : NSObject <_UIDiffableDataSourceIdentifying, UITableViewDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSInteger defaultRowAnimation;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) __UIDiffableDataSource *impl; // ivar: _impl
@property (readonly) Class superclass;


-(BOOL)_isDiffableDataSource;
-(BOOL)_subclassOverridesMethodWithSelector:(SEL)arg0 ;
-(NSInteger)indexForSectionIdentifier:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_diffableDataSourceImpl;
-(id)indexPathForItemIdentifier:(id)arg0 ;
-(id)initWithTableView:(id)arg0 cellProvider:(id)arg1 ;
-(id)initWithViewUpdatesSink:(id)arg0 ;
-(id)itemIdentifierForIndexPath:(id)arg0 ;
-(id)sectionIdentifierForIndex:(NSInteger)arg0 ;
-(id)snapshot;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_applySnapshot:(id)arg0 animatingDifferences:(BOOL)arg1 completion:(id)arg2 ;
-(void)applySnapshot:(id)arg0 animatingDifferences:(BOOL)arg1 ;
-(void)applySnapshot:(id)arg0 animatingDifferences:(BOOL)arg1 completion:(id)arg2 ;
-(void)applySnapshotUsingReloadData:(id)arg0 ;
-(void)applySnapshotUsingReloadData:(id)arg0 completion:(id)arg1 ;
-(void)validateIdentifiers;


@end


#endif
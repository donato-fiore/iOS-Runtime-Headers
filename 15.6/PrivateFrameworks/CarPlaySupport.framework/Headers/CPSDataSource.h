// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSDATASOURCE_H
#define CPSDATASOURCE_H

@class NSString, NSIndexPath, UITableView;
@protocol CPListDataSource, UITableViewDataSource;

#import <Foundation/Foundation.h>


@interface CPSDataSource : NSObject <CPListDataSource, UITableViewDataSource>



@property (copy, nonatomic) id *cellConfigureBlock; // ivar: _cellConfigureBlock
@property (copy, nonatomic) id *cellCreateBlock; // ivar: _cellCreateBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSIndexPath *firstItemIndexPath;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger numberOfItems;
@property (readonly, nonatomic) NSInteger numberOfSections;
@property (nonatomic) NSInteger rowAnimation; // ivar: _rowAnimation
@property (readonly) Class superclass;
@property (weak, nonatomic) UITableView *tableView; // ivar: _tableView


-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 canMoveRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)indexPathForItemWithIdentifier:(id)arg0 ;
-(id)init;
-(id)itemAtIndexPath:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)deleteItemsAtIndexPaths:(id)arg0 ;
-(void)deleteSectionsAtIndexes:(id)arg0 ;
-(void)insertItemsAtIndexPaths:(id)arg0 ;
-(void)insertSectionsAtIndexes:(id)arg0 ;
-(void)moveItemAtIndexPath:(id)arg0 toIndexPath:(id)arg1 ;
-(void)reloadData;
-(void)reloadItemsAtIndexPaths:(id)arg0 ;


@end


#endif
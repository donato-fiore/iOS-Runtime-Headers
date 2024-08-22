// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REUIUPNEXTDATASOURCE_H
#define REUIUPNEXTDATASOURCE_H

@class NSString, RERelevanceEngine, NSArray;
@protocol UITableViewDataSource, UICollectionViewDataSource, REUIRelevanceEngineControllerDelegate;

#import <Foundation/Foundation.h>

#import "REUIRelevanceEngineController.h"

@interface REUIUpNextDataSource : NSObject <UITableViewDataSource, UICollectionViewDataSource>

 {
    REUIRelevanceEngineController *_controller;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<REUIRelevanceEngineControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) RERelevanceEngine *relevanceEngine;
@property (readonly, nonatomic) NSArray *sectionOrder;
@property (readonly) Class superclass;


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_sectionTitleAtIndex:(NSUInteger)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithRelevanceEngine:(id)arg0 ;
-(id)initWithRelevanceEngine:(id)arg0 sectionOrder:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;


@end


#endif
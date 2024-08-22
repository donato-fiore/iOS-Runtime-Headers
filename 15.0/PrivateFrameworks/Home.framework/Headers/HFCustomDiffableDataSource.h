// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFCUSTOMDIFFABLEDATASOURCE_H
#define HFCUSTOMDIFFABLEDATASOURCE_H

@class NSString, NSArray;
@protocol HFDiffableDataSource;

#import <Foundation/Foundation.h>

#import "HFCustomDiffableDataSourceSnapshot.h"

@interface HFCustomDiffableDataSource : NSObject <HFDiffableDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) HFCustomDiffableDataSourceSnapshot *snapshot; // ivar: _snapshot
@property (readonly) Class superclass;
@property (copy, nonatomic) id *supplementaryViewProvider; // ivar: supplementaryViewProvider


-(NSUInteger)_sectionForItem:(id)arg0 ;
-(NSUInteger)_sectionForItem:(id)arg0 assertOnNotFound:(BOOL)arg1 ;
-(id)_indexPathForItem:(id)arg0 inDisplayedItemsArray:(id)arg1 ;
-(id)indexPathForItemIdentifier:(id)arg0 ;
-(id)init;
-(id)itemIdentifierForIndexPath:(id)arg0 ;
-(void)applySnapshot:(id)arg0 animatingDifferences:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif
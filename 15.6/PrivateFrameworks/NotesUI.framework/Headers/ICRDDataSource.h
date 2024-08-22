// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICRDDATASOURCE_H
#define ICRDDATASOURCE_H

@class UICollectionView, UICollectionViewDiffableDataSource, NSArray;

#import <Foundation/Foundation.h>


@interface ICRDDataSource : NSObject

@property (readonly, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, nonatomic) UICollectionViewDiffableDataSource *collectionViewDiffableDataSource; // ivar: _collectionViewDiffableDataSource
@property (readonly, nonatomic) id *firstRelevantItemIdentifier; // ivar: _firstRelevantItemIdentifier
@property (nonatomic) BOOL isAddingOrRemovingPassword; // ivar: _isAddingOrRemovingPassword
@property (retain, nonatomic) NSArray *sectionControllers; // ivar: _sectionControllers
@property (copy, nonatomic) id *willCollapseItemHandler; // ivar: _willCollapseItemHandler
@property (copy, nonatomic) id *willExpandItemHandler; // ivar: _willExpandItemHandler


-(id)associatedCellsForManagedObjectIDs:(id)arg0 ;
-(id)initWithCollectionView:(id)arg0 cellProvider:(id)arg1 ;
-(id)nextRelevantItemIdentifierAfter:(id)arg0 ;
-(void)accountHidesSystemPaperNotesInCustomFoldersDidChange:(id)arg0 ;
-(void)dealloc;
-(void)noteDidAddOrRemovePassword:(id)arg0 ;
-(void)noteWillAddOrRemovePassword:(id)arg0 ;
-(void)reindexDataAnimated:(BOOL)arg0 ;
// -(void)reindexDataAnimated:(BOOL)arg0 dataIndexedBlock:(id)arg1 dataRenderedBlock:(unk)arg2  ;
-(void)reloadDataAnimated:(BOOL)arg0 ;
// -(void)reloadDataAnimated:(BOOL)arg0 dataIndexedBlock:(id)arg1 dataRenderedBlock:(unk)arg2  ;
-(void)willEnterForeground:(id)arg0 ;


@end


#endif
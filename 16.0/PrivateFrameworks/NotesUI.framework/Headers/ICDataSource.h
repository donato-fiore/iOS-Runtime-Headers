// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICDATASOURCE_H
#define ICDATASOURCE_H

@class UICollectionView, UICollectionViewDiffableDataSource, NSArray;
@protocol ICItemIdentifier;

#import <Foundation/Foundation.h>


@interface ICDataSource : NSObject

@property (readonly, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, nonatomic) UICollectionViewDiffableDataSource *collectionViewDiffableDataSource; // ivar: _collectionViewDiffableDataSource
@property (readonly, nonatomic) NSObject<ICItemIdentifier> *firstRelevantItemIdentifier; // ivar: _firstRelevantItemIdentifier
@property (retain, nonatomic) NSArray *sectionControllers; // ivar: _sectionControllers
@property (nonatomic, getter=isTogglingLock) BOOL togglingLock; // ivar: _togglingLock
@property (copy, nonatomic) id *willCollapseItemHandler; // ivar: _willCollapseItemHandler
@property (copy, nonatomic) id *willExpandItemHandler; // ivar: _willExpandItemHandler


-(id)associatedCellsForItemIdentifiers:(id)arg0 ;
-(id)initWithCollectionView:(id)arg0 cellProvider:(id)arg1 ;
-(id)nextRelevantItemIdentifierAfter:(id)arg0 ;
-(void)accountHidesSystemPaperNotesInCustomFoldersDidChange:(id)arg0 ;
-(void)applicationWillEnterForeground:(id)arg0 ;
-(void)dealloc;
-(void)noteLockManagerDidToggleLock:(id)arg0 ;
-(void)noteLockManagerWillToggleLock:(id)arg0 ;
-(void)reindexDataAnimated:(BOOL)arg0 ;
// -(void)reindexDataAnimated:(BOOL)arg0 dataIndexedBlock:(id)arg1 dataRenderedBlock:(unk)arg2  ;
-(void)reloadDataAnimated:(BOOL)arg0 ;
// -(void)reloadDataAnimated:(BOOL)arg0 dataIndexedBlock:(id)arg1 dataRenderedBlock:(unk)arg2  ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYTRANSIENTCHAPTERCOLLECTIONMANAGER_H
#define PXSTORYTRANSIENTCHAPTERCOLLECTIONMANAGER_H

@class NSArray;
@protocol PXStoryMutableTransientChapterCollectionManager, PXStoryTransientChapterCollectionManagerPersistenceDelegate, PXStoryChapterCollection;


#import "PXStoryChapterCollectionManager.h"
#import "PXUpdater.h"

@interface PXStoryTransientChapterCollectionManager : PXStoryChapterCollectionManager <PXStoryMutableTransientChapterCollectionManager>



@property (readonly, nonatomic) NSArray *edits; // ivar: _edits
@property (weak, nonatomic) NSObject<PXStoryTransientChapterCollectionManagerPersistenceDelegate> *persistenceDelegate; // ivar: _persistenceDelegate
@property (readonly, nonatomic) NSObject<PXStoryChapterCollection> *uneditedChapterCollection; // ivar: _uneditedChapterCollection
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater


-(BOOL)_validateEditTransaction:(id)arg0 error:(*id)arg1 ;
-(BOOL)applyEditTransaction:(id)arg0 error:(*id)arg1 ;
-(id)initWithChapterCollection:(id)arg0 ;
-(id)initWithUneditedChapterCollection:(id)arg0 ;
-(void)_invalidateChapterCollection;
-(void)_setNeedsUpdate;
-(void)_updateChapterCollection;
-(void)didPerformChanges;
-(void)performChanges:(id)arg0 ;


@end


#endif
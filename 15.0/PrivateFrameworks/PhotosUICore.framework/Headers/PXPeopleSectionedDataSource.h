// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPEOPLESECTIONEDDATASOURCE_H
#define PXPEOPLESECTIONEDDATASOURCE_H

@class NSArray, NSHashTable, NSString, NSIndexPath;
@protocol PXPhotoLibraryUIChangeObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXPeopleSectionedDataSource : NSObject <PXPhotoLibraryUIChangeObserver>



@property (readonly, copy, nonatomic) NSArray *allPersons;
@property (retain, nonatomic) NSHashTable *changeObservers; // ivar: _changeObservers
@property (readonly, copy, nonatomic) NSArray *dataSources; // ivar: _dataSources
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSIndexPath *leadingFavoritePersonIndexPath;
@property (copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (readonly, nonatomic) NSUInteger numberOfDisclosedSections;
@property (readonly, nonatomic) NSUInteger numberOfSections;
@property (retain, nonatomic) id *pauseToken; // ivar: _pauseToken
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *reloadQueue; // ivar: _reloadQueue
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger totalPersonCount;
@property (readonly, nonatomic) NSIndexPath *trailingFavoritePersonIndexPath;


-(BOOL)canReorderMembersInSection:(NSInteger)arg0 ;
-(NSInteger)_sectionForFetchType:(NSUInteger)arg0 ;
-(NSUInteger)_fetchTypeForPersonType:(NSInteger)arg0 ;
-(NSUInteger)fetchTypeForSection:(NSInteger)arg0 ;
-(NSUInteger)numberOfPersonsInSection:(NSInteger)arg0 ;
-(NSUInteger)numberOfPersonsWithContactName;
-(NSUInteger)numberOfPersonsWithStringName;
-(NSUInteger)photoQuantityAtIndexPath:(id)arg0 ;
-(id)_dataSourceForFetchType:(NSUInteger)arg0 ;
-(id)_dataSourceForIndexPath:(id)arg0 ;
-(id)_dataSourceForSection:(NSInteger)arg0 ;
-(id)_generateChangeDetailsForChangeInstance:(id)arg0 ;
-(id)faceTileAtIndexPath:(id)arg0 ;
-(id)indexPathOfPerson:(id)arg0 ;
-(id)initWithSections:(id)arg0 ;
-(id)localizedDisclosedTitleForSection:(NSInteger)arg0 ;
-(id)localizedTitleForSection:(NSInteger)arg0 ;
-(id)memberAtIndexPath:(id)arg0 ;
-(id)personAtIndexPath:(id)arg0 ;
-(id)personsAtIndexPaths:(id)arg0 ;
-(id)personsForType:(NSInteger)arg0 ;
-(id)prepareForPhotoLibraryChange:(id)arg0 ;
-(id)titleAtIndexPath:(id)arg0 ;
-(void)addChangeObserver:(id)arg0 ;
-(void)addVisiblePerson:(id)arg0 ;
-(void)cancelImageLoadingForItem:(id)arg0 ;
-(void)changePersonsAtIndexPaths:(id)arg0 toPersonType:(NSInteger)arg1 ;
-(void)dealloc;
-(void)imageAtIndexPath:(id)arg0 targetSize:(struct CGSize )arg1 displayScale:(CGFloat)arg2 resultHandler:(id)arg3 ;
// -(void)imageAtIndexPath:(id)arg0 targetSize:(struct CGSize )arg1 withCompletionBlock:(id)arg2 fastDisplayBlock:(unk)arg3  ;
-(void)loadAndStartListeningToLibraryNotifications;
-(void)movePersonAtIndexPath:(id)arg0 toIndexPath:(id)arg1 shouldUpdateImmediately:(BOOL)arg2 ;
-(void)pauseListeningForChangesWithTimeout:(CGFloat)arg0 identifier:(id)arg1 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 withPreparedInfo:(id)arg1 ;
-(void)reloadFromDatabase;
-(void)removeChangeObserver:(id)arg0 ;
-(void)removeVisiblePerson:(id)arg0 ;
-(void)resumeListeningForChanges;
-(void)startListeningToLibraryNotifications;
-(void)stopListeningToLibraryNotifications;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSPOTLIGHTDONATIONMANAGER_H
#define PLSPOTLIGHTDONATIONMANAGER_H

@class NSString, NSOperationQueue, CSSearchableIndex;
@protocol PLSpotlightDonationManagerSignpostDelegate;

#import <Foundation/Foundation.h>

#import "PLPhotoLibrary.h"

@interface PLSpotlightDonationManager : NSObject <PLSpotlightDonationManagerSignpostDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, nonatomic) CSSearchableIndex *spotlightIndex; // ivar: _spotlightIndex
@property (readonly) Class superclass;


+(BOOL)_deleteAllSearchableItemsForSystemPhotoLibraryWithError:(*id)arg0 ;
+(id)_photolibraryDatabaseUUIDForPhotolibraryWithURL:(id)arg0 ;
+(void)handleDeletionForPhotoLibraryWithURL:(id)arg0 completion:(id)arg1 ;
+(void)handleUniversalSearchPhotoLibraryEligibilityChangeWithDetectedPathChange:(BOOL)arg0 ;
-(NSUInteger)deleteAllSearchableItemsFromSpotlight;
-(NSUInteger)deleteItemsFromSpotlightWithSearchableItemIdentifiers:(id)arg0 ;
-(NSUInteger)donateSearchableItemsToSpotlight:(id)arg0 bundleIdentifier:(id)arg1 ;
-(NSUInteger)pendingOperationCount;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(id)spotlightDonationManagerLog;
-(void)_signPostIntervalForOperationType:(NSUInteger)arg0 searchableItemCount:(NSUInteger)arg1 isBegin:(BOOL)arg2 ;
-(void)addOperationCountObserver:(id)arg0 ;
-(void)beginSignpostIntervalForOperationType:(NSUInteger)arg0 searchableItemCount:(NSUInteger)arg1 ;
-(void)deleteAllSearchableItemsWithCompletion:(id)arg0 ;
-(void)deleteSearchableItemsWithIdentifiers:(id)arg0 ;
-(void)donateSearchableItems:(id)arg0 bundleIdentifier:(id)arg1 ;
-(void)endSignpostIntervalForOperationType:(NSUInteger)arg0 searchableItemCount:(NSUInteger)arg1 ;
-(void)removeOperationCountObserver:(id)arg0 ;
-(void)setSpotlightOperationQueueSuspended:(BOOL)arg0 ;


@end


#endif
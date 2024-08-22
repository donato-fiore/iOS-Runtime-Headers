// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLBACKGROUNDJOBSEARCHINDEXINGWORKER_H
#define PLBACKGROUNDJOBSEARCHINDEXINGWORKER_H

@protocol NSCopying;


#import "PLBackgroundJobWorker.h"
#import "PLSpotlightDonationManager.h"
#import "PLSearchIndexConfiguration.h"
#import "PLSearchTrackedChangeTypes.h"

@interface PLBackgroundJobSearchIndexingWorker : PLBackgroundJobWorker

@property (copy) NSObject<NSCopying> *cancelledWorkItem; // ivar: _cancelledWorkItem
@property (retain, nonatomic) PLSpotlightDonationManager *donationManager; // ivar: _donationManager
@property (retain, nonatomic) PLSearchIndexConfiguration *searchIndexConfiguration; // ivar: _searchIndexConfiguration
@property (retain, nonatomic) PLSearchTrackedChangeTypes *searchTrackedChangeTypes; // ivar: _searchTrackedChangeTypes


+(BOOL)_isTokenInvalidError:(id)arg0 ;
+(BOOL)supportsWellKnownPhotoLibraryIdentifier:(NSInteger)arg0 ;
+(id)_transactionIteratorSinceToken:(id)arg0 library:(id)arg1 error:(*id)arg2 ;
-(BOOL)_handleChangesForTransaction:(id)arg0 library:(id)arg1 ;
-(BOOL)_shouldCancelCurrentWorkItem:(id)arg0 ;
-(BOOL)isInterruptible;
-(NSUInteger)_resetSpotlightIndexForLibrary:(id)arg0 ;
-(id)workItemsNeedingProcessingInLibrary:(id)arg0 ;
-(void)_beginSearchIndexRebuildForLibrary:(id)arg0 item:(id)arg1 rebuildReasons:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)_resumeSearchIndexRebuildForLibrary:(id)arg0 item:(id)arg1 completion:(id)arg2 ;
-(void)performWorkOnItem:(id)arg0 inLibrary:(id)arg1 completion:(id)arg2 ;
-(void)stopWorkingOnItem:(id)arg0 ;


@end


#endif
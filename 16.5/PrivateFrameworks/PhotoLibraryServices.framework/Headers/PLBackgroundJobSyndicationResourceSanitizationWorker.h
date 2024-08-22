// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLBACKGROUNDJOBSYNDICATIONRESOURCESANITIZATIONWORKER_H
#define PLBACKGROUNDJOBSYNDICATIONRESOURCESANITIZATIONWORKER_H

@class NSString;
@protocol PLSyndicationResourcePrefetchManagerDelegate;


#import "PLBackgroundJobWorker.h"
#import "PLSyndicationResourcePrefetchManager.h"
#import "PLPhotoLibrary.h"

@interface PLBackgroundJobSyndicationResourceSanitizationWorker : PLBackgroundJobWorker <PLSyndicationResourcePrefetchManagerDelegate>

 {
    PLSyndicationResourcePrefetchManager *_prefetchManager;
    PLPhotoLibrary *_currentLibrary;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isNetworkAccessAllowed;
@property (readonly, nonatomic) NSString *name;
@property (readonly) Class superclass;


+(BOOL)supportsWellKnownPhotoLibraryIdentifier:(NSInteger)arg0 ;
+(id)syndicationWorkerCriteria;
-(NSUInteger)batchSize;
-(id)downloadThrottlingDateForPrefetchManager:(id)arg0 ;
-(id)initWithLibraryBundle:(id)arg0 ;
-(id)requestLocalAvailabilityChangeForPrefetchManager:(id)arg0 resource:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(id)resourceIDsForPrefetchWithLibrary:(id)arg0 ;
-(id)workItemsNeedingProcessingInLibrary:(id)arg0 ;
// -(void)batchRequestResourcesForPrefetchManager:(id)arg0 itemIdentifiersWithBundleIDs:(id)arg1 destURLs:(id)arg2 options:(id)arg3 resultHandler:(id)arg4 completionHandler:(unk)arg5  ;
-(void)performTransactionForPrefetchManager:(id)arg0 synchronous:(BOOL)arg1 block:(id)arg2 ;
-(void)performWorkOnItem:(id)arg0 inLibrary:(id)arg1 completion:(id)arg2 ;
-(void)prefetchManager:(id)arg0 receivedNewDownloadThrottlingDate:(id)arg1 managedObjectContext:(id)arg2 ;


@end


#endif
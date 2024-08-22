// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
+(NSInteger)syndicationWorkerPriority;
+(id)workerWithLibraryBundle:(id)arg0 ;
-(NSUInteger)batchSize;
-(id)downloadThrottlingDateForPrefetchManager:(id)arg0 ;
-(id)initWithPriority:(NSInteger)arg0 libraryBundle:(id)arg1 ;
-(id)requestLocalAvailabilityChangeForPrefetchManager:(id)arg0 resource:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(id)resourceIDsForPrefetchWithLibrary:(id)arg0 ;
-(id)workItemsNeedingProcessingInLibrary:(id)arg0 ;
// -(void)batchRequestResourcesForPrefetchManager:(id)arg0 bundleID:(id)arg1 itemIdentifiers:(id)arg2 destURLs:(id)arg3 options:(id)arg4 resultHandler:(id)arg5 completionHandler:(unk)arg6  ;
-(void)performTransactionForPrefetchManager:(id)arg0 synchronous:(BOOL)arg1 block:(id)arg2 ;
-(void)performWorkOnItem:(id)arg0 inLibrary:(id)arg1 completion:(id)arg2 ;
-(void)prefetchManager:(id)arg0 receivedNewDownloadThrottlingDate:(id)arg1 managedObjectContext:(id)arg2 ;


@end


#endif
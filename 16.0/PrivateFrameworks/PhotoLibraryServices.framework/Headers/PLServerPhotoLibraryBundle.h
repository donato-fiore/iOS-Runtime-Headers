// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLSERVERPHOTOLIBRARYBUNDLE_H
#define PLSERVERPHOTOLIBRARYBUNDLE_H

@class NSOperationQueue, PLLazyObject, NSString, NSSet, NSURL;
@protocol NSFilePresenter;


#import "PLPhotoLibraryBundle.h"
#import "PLBackgroundJobService.h"

@interface PLServerPhotoLibraryBundle : PLPhotoLibraryBundle <NSFilePresenter>

 {
    Class _libraryServicesDelegateClass;
    PLBackgroundJobService *_backgroundJobService;
    NSOperationQueue *_presentedItemOperationQueue;
    PLLazyObject *_lazyTouchCoalescer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;


-(BOOL)bindAssetsdService:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldRelinquishToWriterOfSubitemAtURL:(id)arg0 ;
-(id)_newTouchCoalescer;
-(id)boundAssetsdServices;
-(id)initWithLibraryURL:(id)arg0 bundleController:(id)arg1 backgroundJobService:(id)arg2 libraryServicesDelegateClass:(Class)arg3 ;
-(id)newAssetsdClient;
-(id)newBoundAssetsdServicesTable;
-(id)newChangePublisher;
-(id)newLibraryServicesManager;
-(id)transferAssets:(id)arg0 toBundle:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(id)transferPersons:(id)arg0 toBundle:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)_touch;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(id)arg0 ;
-(void)accommodatePresentedSubitemDeletionAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)clearShutdownReason;
-(void)close;
-(void)invalidateClientConnectionsWithReason:(id)arg0 ;
-(void)presentedItemDidMoveToURL:(id)arg0 ;
-(void)relinquishPresentedItemToReader:(id)arg0 ;
-(void)relinquishPresentedItemToWriter:(id)arg0 ;
-(void)savePresentedItemChangesWithCompletionHandler:(id)arg0 ;
-(void)shutdownWithReason:(id)arg0 ;
-(void)touch;
-(void)unbindAssetsdService:(id)arg0 ;


@end


#endif
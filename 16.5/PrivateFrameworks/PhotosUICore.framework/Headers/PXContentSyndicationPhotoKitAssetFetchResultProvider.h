// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCONTENTSYNDICATIONPHOTOKITASSETFETCHRESULTPROVIDER_H
#define PXCONTENTSYNDICATIONPHOTOKITASSETFETCHRESULTPROVIDER_H

@class PHPhotoLibrary, NSMutableDictionary, NSString;
@protocol PHPhotoLibraryChangeObserver, PXContentSyndicationAssetFetchResultProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXContentSyndicationPhotoKitAssetFetchResultProvider : NSObject <PHPhotoLibraryChangeObserver, PXContentSyndicationAssetFetchResultProvider>

 {
    PHPhotoLibrary *_photoLibrary;
    id *_fetchResultBlock;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_observers;
    NSMutableDictionary *_fetchResults;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_serialQueue_fetchResultAssetCollection:(id)arg0 fetchResultBlock:(id)arg1 ;
-(id)assetFetchResultForAssetCollection:(id)arg0 ;
-(id)init;
-(id)initWithPhotoLibrary:(id)arg0 fetchResultBlock:(id)arg1 ;
-(void)_didChangeFetchResult:(id)arg0 forAssetCollection:(id)arg1 withChangeObservers:(id)arg2 ;
-(void)_serialQueue_invalidateAllAssetFetchResults;
-(void)_serialQueue_invalidateAssetFetchResultsInAssetCollections:(id)arg0 ;
-(void)_serialQueue_registerChangeObserver:(id)arg0 forAssetCollection:(id)arg1 fetchResultBlock:(id)arg2 ;
-(void)_serialQueue_unregisterChangeObserver:(id)arg0 forAssetCollection:(id)arg1 ;
-(void)invalidateAllAssetFetchResults;
-(void)invalidateAssetFetchResultsInAssetCollections:(id)arg0 ;
-(void)photoLibraryDidChange:(id)arg0 ;
-(void)registerChangeObserver:(id)arg0 forAssetCollection:(id)arg1 ;
-(void)unregisterChangeObserver:(id)arg0 forAssetCollection:(id)arg1 ;


@end


#endif
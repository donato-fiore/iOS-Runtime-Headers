// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPEOPLEALBUMPROVIDER_H
#define PXPEOPLEALBUMPROVIDER_H

@class PHPhotoLibrary, NSString, NSMutableDictionary;
@protocol PXPeopleSectionedDataSourceChangeObserver, PXPhotoLibraryUIChangeObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PXPeopleSectionedDataSource.h"
#import "PXPeopleProgressManager.h"

@interface PXPeopleAlbumProvider : NSObject <PXPeopleSectionedDataSourceChangeObserver, PXPhotoLibraryUIChangeObserver>

 {
    BOOL _didInitiateReCacheRequest;
    BOOL _didInitiatePeopleCountFetchRequest;
    BOOL _didPrepareDataSource;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_queue> *_cacheIsolationQueue;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    PHPhotoLibrary *_photoLibrary;
}


@property (nonatomic) NSInteger cachedPeopleCount; // ivar: _cachedPeopleCount
@property uint8_t currentRequestId; // ivar: _currentRequestId
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSMutableDictionary *imageCache; // ivar: _imageCache
@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (readonly, nonatomic) BOOL isCountAvailable;
@property (readonly, nonatomic) NSInteger peopleCount;
@property (readonly, nonatomic) PXPeopleSectionedDataSource *peopleDataSource; // ivar: _peopleDataSource
@property (retain, nonatomic) PXPeopleProgressManager *progressMgr; // ivar: _progressMgr
@property (copy, nonatomic) id *requestCompletion; // ivar: _requestCompletion
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_shouldShowInterstitialProgress;
-(id)_visiblePersons;
-(id)init;
-(id)peopleViewController;
-(void)_appWillEnterForeground;
-(void)_asyncAddImagesToCacheWithPersons:(id)arg0 displayScale:(CGFloat)arg1 completion:(id)arg2 ;
-(void)_handleRequestResult:(id)arg0 forRequestID:(uint8_t)arg1 person:(int)arg2 atIndex:(id)arg3 error:(NSInteger)arg4 completion:(id)arg5 ;
-(void)_invalidateCache;
-(void)_prepareIfNeeded;
-(void)_reCacheImagesWithDisplayScale:(CGFloat)arg0 completion:(id)arg1 ;
-(void)_updateCachedCountIfNeeded;
-(void)dealloc;
-(void)imageCacheDidChanged:(id)arg0 ;
-(void)peopleSectionedDataSource:(id)arg0 didApplyIncrementalChanges:(id)arg1 ;
-(void)peopleSectionedDataSourceMembersChangedNonIncrementally:(id)arg0 ;
-(void)requestAlbumImagesWithSize:(struct CGSize )arg0 displayScale:(CGFloat)arg1 completion:(id)arg2 ;


@end


#endif
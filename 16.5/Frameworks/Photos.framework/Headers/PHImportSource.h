// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHIMPORTSOURCE_H
#define PHIMPORTSOURCE_H

@class NSMutableDictionary, NSHashTable, NSMutableArray, NSURL, NSDateFormatter, NSMutableSet, NSString, NSProgress, PFTimeZoneLookup;
@protocol OS_dispatch_queue;


#import "PHImportExceptionRecorder.h"
#import "PHPhotoLibrary.h"
#import "PHImportOptions.h"

@interface PHImportSource : PHImportExceptionRecorder {
    NSMutableDictionary *_assetsByImportIdentifier;
    NSMutableDictionary *_representationsByImportIdentifier;
    NSMutableDictionary *_audioByImportIdentifier;
    NSHashTable *_observers;
    os_unfair_lock_s _observersLock;
    os_unfair_lock_s _itemsLock;
    CGFloat _assetLoadingStart;
}


@property (nonatomic) NSInteger assetLoadOrder; // ivar: _assetLoadOrder
@property (retain, nonatomic) NSMutableArray *assets; // ivar: _assets
@property (copy, nonatomic) NSURL *autolaunchApplicationURL; // ivar: _autolaunchApplicationURL
@property (nonatomic) NSUInteger batchCount; // ivar: _batchCount
@property (nonatomic) CGFloat batchInterval; // ivar: _batchInterval
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *batchQueue; // ivar: _batchQueue
@property (nonatomic) NSUInteger batchSize; // ivar: _batchSize
@property (nonatomic) CGFloat batchStart; // ivar: _batchStart
@property (readonly, nonatomic) BOOL canAutolaunch; // ivar: _canAutolaunch
@property (readonly, nonatomic) BOOL canDeleteContent;
@property (readonly, nonatomic) BOOL canEject;
@property (readonly) BOOL canReference;
@property (readonly) BOOL canShowProgress; // ivar: _canShowProgress
@property (nonatomic) NSUInteger completedItems; // ivar: _completedItems
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *controlQueue; // ivar: _controlQueue
@property (nonatomic) NSUInteger currentItemIndex; // ivar: _currentItemIndex
@property (nonatomic) BOOL deleteContentAllowed; // ivar: _deleteContentAllowed
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dupPathCollectionQueue; // ivar: _dupPathCollectionQueue
@property (retain, nonatomic) NSDateFormatter *dupeDateFormatter; // ivar: _dupeDateFormatter
@property (retain, nonatomic) NSMutableArray *duplicateAssets; // ivar: _duplicateAssets
@property (readonly, nonatomic, getter=isEjecting) BOOL ejecting; // ivar: _ejecting
@property (retain) NSMutableArray *errors; // ivar: _errors
@property (retain, nonatomic) NSMutableSet *folders; // ivar: _folders
@property (readonly, nonatomic) *CGImage icon;
@property (retain, nonatomic) NSMutableDictionary *importIdentifierToLivePhotoStateMap; // ivar: _importIdentifierToLivePhotoStateMap
@property (readonly, nonatomic) BOOL isAppleDevice;
@property (readonly, nonatomic) BOOL isAvailable;
@property (readonly, nonatomic) BOOL isCamera;
@property (readonly, nonatomic) BOOL isConnectedDevice;
@property (readonly, nonatomic) BOOL isLibrary;
@property (readonly, nonatomic) BOOL isOptimizedCPLStorage;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *itemProcessingQueue; // ivar: _itemProcessingQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *itemQueue; // ivar: _itemQueue
@property (retain, nonatomic) NSMutableArray *items; // ivar: _items
@property (readonly, nonatomic) PHPhotoLibrary *library; // ivar: _library
@property (readonly, nonatomic) NSString *name;
@property (nonatomic) NSUInteger nextItemIndex; // ivar: _nextItemIndex
@property (nonatomic) BOOL open; // ivar: _open
@property (retain, nonatomic) PHImportOptions *options; // ivar: _options
@property (retain, nonatomic) NSMutableDictionary *pairedSidecarsByImportIdentifier; // ivar: _pairedSidecarsByImportIdentifier
@property (readonly, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *prefix; // ivar: _prefix
@property (retain, nonatomic) NSMutableArray *processed; // ivar: _processed
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // ivar: _processingQueue
@property (readonly, nonatomic) NSString *productKind;
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (nonatomic) BOOL rampBatchInterval; // ivar: _rampBatchInterval
@property (readonly, nonatomic) NSMutableArray *removedSourceFileIdentifiers; // ivar: _removedSourceFileIdentifiers
@property (nonatomic) unsigned char sourceAccessState; // ivar: _sourceAccessState
@property (readonly, nonatomic) BOOL stalled;
@property (readonly) PFTimeZoneLookup *timeZoneLookup; // ivar: _timeZoneLookup
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid
@property (readonly, nonatomic) NSString *volumePath;


-(BOOL)batchComplete;
-(BOOL)confirmAsset:(id)arg0 isBaseOf:(id)arg1 ;
-(BOOL)confirmAsset:(id)arg0 isRenderOf:(id)arg1 ;
-(BOOL)confirmAsset:(id)arg0 isSidecarOfAsset:(id)arg1 ;
-(BOOL)confirmAsset:(id)arg0 isSocOf:(id)arg1 ;
-(BOOL)containsSupportedMediaWithImportExceptions:(*id)arg0 ;
-(BOOL)date:(id)arg0 matchesDate:(id)arg1 ;
-(BOOL)isDone;
-(BOOL)isLivePhotoForImportIdentifier:(id)arg0 ;
-(BOOL)isPairedSidecar:(id)arg0 ;
-(BOOL)processPotentialJpegAsset:(id)arg0 plusRawAsset:(id)arg1 ;
-(id)assetsByProcessingItem:(id)arg0 ;
-(id)deleteImportAssets:(id)arg0 isConfirmed:(BOOL)arg1 atEnd:(id)arg2 ;
-(id)deleteImportAssets:(id)arg0 isConfirmed:(BOOL)arg1 isCancelable:(BOOL)arg2 atEnd:(id)arg3 ;
-(id)description;
-(id)init;
-(id)loadAssetsForLibrary:(id)arg0 allowDuplicates:(BOOL)arg1 order:(NSInteger)arg2 atEnd:(id)arg3 ;
-(id)loadAssetsForLibrary:(id)arg0 allowDuplicates:(BOOL)arg1 order:(NSInteger)arg2 batchInterval:(CGFloat)arg3 atEnd:(id)arg4 ;
-(id)loadAssetsForLibrary:(id)arg0 allowDuplicates:(BOOL)arg1 order:(NSInteger)arg2 batchSize:(NSUInteger)arg3 atEnd:(id)arg4 ;
-(id)loadAssetsForLibrary:(id)arg0 allowDuplicates:(BOOL)arg1 order:(NSInteger)arg2 batchSize:(NSUInteger)arg3 batchInterval:(CGFloat)arg4 atEnd:(id)arg5 ;
-(id)nextItem;
-(id)processAssets:(id)arg0 ;
-(id)requestDeleteAssetsForRecords:(id)arg0 ;
-(void)accessItems:(id)arg0 ;
-(void)addImportSourceObserver:(id)arg0 ;
-(void)addItems:(id)arg0 ;
-(void)addPairedSidecar:(id)arg0 ;
-(void)addRepresentationsForAsset:(id)arg0 ;
-(void)addSourceFileIdentifiersForRemovedFiles:(id)arg0 ;
-(void)beginProcessingWithCompletion:(id)arg0 ;
-(void)beginWork;
-(void)dispatchAssetDataRequestAsync:(id)arg0 usingBlock:(id)arg1 ;
-(void)eject;
-(void)endBatch;
-(void)endWork;
-(void)findDuplicatesOfItems:(id)arg0 considerItemsInTheTrash:(BOOL)arg1 ;
-(void)loadSidecarsFor:(id)arg0 ;
-(void)notifyObserversUsingBlock:(id)arg0 ;
-(void)pauseAssetLoading;
-(void)processNextItems;
-(void)processRepresentation:(id)arg0 ;
-(void)processResource:(id)arg0 ;
-(void)removeAssets:(id)arg0 ;
-(void)removeImportSourceObserver:(id)arg0 ;
-(void)resumeAssetLoading;
-(void)setIsLivePhotoForImportIdentifier:(id)arg0 ;
-(void)stopAssetLoading;


@end


#endif
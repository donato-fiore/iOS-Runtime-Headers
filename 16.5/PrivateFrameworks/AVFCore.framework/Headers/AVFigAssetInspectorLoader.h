// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVFIGASSETINSPECTORLOADER_H
#define AVFIGASSETINSPECTORLOADER_H

@class NSMutableArray, NSURL;
@protocol OS_dispatch_queue;


#import "AVAssetInspectorLoader.h"
#import "AVWeakReference.h"
#import "AVAssetInspector.h"
#import "AVDispatchOnce.h"

@interface AVFigAssetInspectorLoader : AVAssetInspectorLoader {
    *OpaqueFigAsset _figAsset;
    int _figAssetCreationStatus;
    AVWeakReference *_weakReferenceToAsset;
    AVAssetInspector *_assetInspector;
    AVDispatchOnce *_assetInspectorOnce;
    NSObject<OS_dispatch_queue> *_completionHandlerQueue;
    *OpaqueFigSimpleMutex _loadingMutex;
    NSMutableArray *_loadingBatches;
    BOOL _loadingCanceled;
    BOOL _registeredForFigAssetNotifications;
    NSInteger _fragmentMinderAssociationCount;
    NSURL *_URL;
}




+(id)_figAssetMediaSelectionPropertiesArray;
+(id)_figAssetPropertiesForKeys;
+(id)_figAssetTrackMediaSelectionPropertiesArray;
+(id)_figAssetTrackPropertiesForKeys;
+(void)_mapAssetKeys:(id)arg0 toFigAssetPropertySet:(id)arg1 figAssetTrackPropertySet:(id)arg2 callerName:(id)arg3 ;
-(BOOL)_isStreaming;
-(BOOL)hasProtectedContent;
-(BOOL)isAssociatedWithFragmentMinder;
-(BOOL)isCompatibleWithSavedPhotosAlbum;
-(BOOL)isComposable;
-(BOOL)isExportable;
-(BOOL)isPlayable;
-(BOOL)isReadable;
-(CGFloat)_fragmentMindingInterval;
-(Class)_classForTrackInspectors;
-(NSInteger)_loadStatusForProperty:(id)arg0 figAsset:(struct OpaqueFigAsset *)arg1 error:(*id)arg2 ;
-(NSInteger)_statusOfValueForKey:(id)arg0 error:(*id)arg1 firstNonLoadedDependencyKey:(*id)arg2 ;
-(NSInteger)firstFragmentSequenceNumber;
-(NSInteger)fragmentCount;
-(NSInteger)statusOfValueForKey:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)downloadToken;
-(id)URL;
-(id)_completionHandlerQueue;
-(id)_loadingBatches;
-(id)asset;
-(id)assetInspector;
-(id)contentKeySpecifiersEligibleForPreloading;
-(id)figChapterGroupInfo;
-(id)figChapters;
-(id)initWithFigAsset:(struct OpaqueFigAsset *)arg0 forAsset:(id)arg1 ;
-(id)initWithURL:(id)arg0 figAssetCreationFlags:(NSUInteger)arg1 figAssetCreationOptions:(id)arg2 avAssetInitializationOptions:(id)arg3 forAsset:(id)arg4 ;
-(id)lyrics;
-(id)originalNetworkContentURL;
-(id)resolvedURL;
-(id)variants;
-(struct ? )duration;
-(struct OpaqueFigAsset *)_figAsset;
-(struct OpaqueFigFormatReader *)_formatReader;
-(struct OpaqueFigSimpleMutex *)_loadingMutex;
-(void)_addFigAssetNotifications;
-(void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg0 ;
-(void)_invokeCompletionHandlerForLoadingBatches:(id)arg0 ;
-(void)_removeFigAssetNotifications;
-(void)_setFragmentMindingInterval:(CGFloat)arg0 ;
-(void)_setIsAssociatedWithFragmentMinder:(BOOL)arg0 ;
-(void)cancelLoading;
-(void)dealloc;
-(void)loadValuesAsynchronouslyForKeys:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg0 keysForCollectionKeys:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif
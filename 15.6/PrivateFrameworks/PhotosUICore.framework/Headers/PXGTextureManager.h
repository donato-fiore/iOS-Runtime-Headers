// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGTEXTUREMANAGER_H
#define PXGTEXTUREMANAGER_H

@class NSHashTable, NSMapTable, NSDictionary, NSMutableDictionary, NSIndexSet, NSMutableSet, NSArray, NSString;
@protocol PXGTextureProviderDelegate, PXGTextureAtlasManagerDelegate, OS_dispatch_queue, PXGTextureConverter, PXGMutableSpriteTexture, PXGTextureManagerDelegate;

#import <Foundation/Foundation.h>

#import "PXGEntityManager.h"
#import "PXGTextureManagerPreheatingStrategy.h"
#import "PXGViewEnvironment.h"

@interface PXGTextureManager : NSObject <PXGTextureProviderDelegate, PXGTextureAtlasManagerDelegate>

 {
    NSObject<OS_dispatch_queue> *_requestQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_processQueue;
    NSObject<OS_dispatch_queue> *_adjustQueue;
    NSObject<OS_dispatch_queue> *_deallocationsQueue;
    os_unfair_lock_s _lookupLock;
    NSMapTable" _lookupLock_textureByKeyByPresentationType;
    unordered_map<int, PXGRequestDetails, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, PXGRequestDetails>>> _lookupLock_requestDetailsByRequestID;
    NSHashTable *_spriteTexturesInUse;
    NSMapTable *_pendingSpriteTextureByRequestID;
    NSDictionary *_textureConverterByPresentationType;
    id<PXGTextureConverter> *_atlasTextureConverter;
    int _atlasPresentationType;
    BOOL _didSwitchTextureConverter;
    NSMutableDictionary *_textureProviderByMediaKind;
    NSMapTable *_textureProvidersDisplayLinkRegistrationState;
    unordered_map<int, unsigned int, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, unsigned int>>> _spriteIndexByRequestID;
    NSIndexSet *_loadedSpriteIndexes;
    *? _streamInfoBySpriteIndex;
    NSUInteger _streamInfoBySpriteIndexCount;
    NSUInteger _streamInfoBySpriteIndexCapacity;
    uint8_t _isPerformingUpdateFromRequestQueue;
    NSUInteger _requestQueue_pendingSetNeedsUpdate;
    id<PXGMutableSpriteTexture> *_emptyTexture;
    NSMutableSet *_placeholderTextures;
    NSArray *_trackedComponents;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXGTextureManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXGEntityManager *entityManager; // ivar: _entityManager
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isInactive; // ivar: _isInactive
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *layoutQueue; // ivar: _layoutQueue
@property (nonatomic) BOOL lowMemoryMode; // ivar: _lowMemoryMode
@property (retain, nonatomic) PXGTextureManagerPreheatingStrategy *preheatingStrategy; // ivar: _preheatingStrategy
@property (readonly, nonatomic) NSInteger streamCount; // ivar: _streamCount
@property (readonly) Class superclass;
@property (retain) NSArray *textureAtlasManagers; // ivar: _textureAtlasManagers
@property (copy, nonatomic) NSArray *textureConverters; // ivar: _textureConverters
@property (readonly, nonatomic) NSDictionary *texturesByPresentationType; // ivar: _texturesByPresentationType
@property (retain, nonatomic) PXGViewEnvironment *viewEnvironment; // ivar: _viewEnvironment


-(BOOL)_getRequestDetails:(struct ? *)arg0 forRequestID:(int)arg1 ;
-(BOOL)streamUpdatedTexturesForDisplayLinkIfNeeded:(id)arg0 ;
-(BOOL)textureAtlasManagerShouldPruneUnusedTextures:(id)arg0 ;
-(NSInteger)_processTextureProviderResults;
-(id)_createTextureForCGImage:(struct CGImage *)arg0 requestID:(int)arg1 requestDetails:(struct ? )arg2 transform:(id)arg3 fromTextureProvider:(id)arg4 withTextureConverter;
-(id)_createTextureForCVPixelBuffer:(struct __CVBuffer *)arg0 requestID:(int)arg1 requestDetails:(struct ? )arg2 transform:(id)arg3 fromTextureProvider:(id)arg4 withTextureConverter;
-(id)_existingAdjustedTextureForSourceTexture:(id)arg0 adjustment:(id)arg1 presentationType:(int)arg2 ;
-(id)_existingTextureForCGImage:(struct CGImage *)arg0 presentationType:(int)arg1 ;
-(id)_existingTextureForKey:(id)arg0 presentationType:(int)arg1 ;
-(id)_existingTextureForPayload:(id)arg0 presentationType:(int)arg1 ;
-(id)_existingTextureForPixelBuffer:(struct __CVBuffer *)arg0 presentationType:(int)arg1 ;
-(id)_storeAdjustedTexture:(id)arg0 forSourceTexture:(id)arg1 adjustment:(id)arg2 ;
-(id)_storeTexture:(id)arg0 forCGImage:(struct CGImage *)arg1 ;
-(id)_storeTexture:(id)arg0 forKey:(id)arg1 ;
-(id)_storeTexture:(id)arg0 forPayload:(id)arg1 ;
-(id)_storeTexture:(id)arg0 forPixelBuffer:(struct __CVBuffer *)arg1 ;
-(id)_textureAtlasManagerForImageDataSpec:(struct ? )arg0 ;
-(id)_textureConverterForPresentationType:(int)arg0 contentType:(NSUInteger)arg1 ;
-(id)initWithEntityManager:(id)arg0 layoutQueue:(id)arg1 ;
-(struct CGImage *)textureSnapshotForSpriteIndex:(unsigned int)arg0 ;
-(void)_addTextureToTexturesInUse:(id)arg0 ;
-(void)_applyAdjustment:(id)arg0 toTexture:(id)arg1 fromTextureProvider:(id)arg2 withTextureConverter:(id)arg3 forRequestID:(int)arg4 deliveryOrder:(unsigned int)arg5 requestDetails:(struct ? )arg6 ;
-(void)_blockOnThumbnailsIfNeededWithGeometries:(struct ? *)arg0 visibleRect:(struct CGRect )arg1 interactionState:(struct ? )arg2 fences:(id)arg3 ;
-(void)_configureAllTextureConverters;
-(void)_configureAllTextureProviders;
-(void)_configureTextureConverter:(id)arg0 ;
-(void)_configureTextureProvider:(id)arg0 ;
-(void)_enumerateSpriteTextures:(id)arg0 ;
-(void)_enumerateTextureConverters:(id)arg0 ;
-(void)_enumerateTextureProviders:(id)arg0 ;
-(void)_handleProvidedSpriteTexture:(id)arg0 fromTextureProvider:(id)arg1 requestID:(int)arg2 deliveryOrder:(unsigned int)arg3 ;
-(void)_lookupLock_requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange )arg0 textureProvider:(id)arg1 mediaKind:(int)arg2 presentationType:(int)arg3 isAppearing:(BOOL)arg4 layout:(id)arg5 leafSpriteIndexRange:(struct _PXGSpriteIndexRange )arg6 sprites:(struct ? )arg7 textureStreamInfos:(struct ? *)arg8 loadingStatus:(id)arg9 ;
-(void)_processCGImage:(struct CGImage *)arg0 options:(struct ? )arg1 isDegraded:(BOOL)arg2 fromTextureProvider:(id)arg3 withTextureConverter:(id)arg4 requestID:(int)arg5 requestDetails:(struct ? )arg6 deliveryOrder:(unsigned int)arg7 ;
-(void)_processPixelBuffer:(struct __CVBuffer *)arg0 options:(struct ? )arg1 fromTextureProvider:(id)arg2 withTextureConverter:(id)arg3 forRequestID:(int)arg4 requestDetails:(struct ? )arg5 deliveryOrder:(unsigned int)arg6 ;
-(void)_pruneTextures:(id)arg0 ;
-(void)_registerTextureConverter:(id)arg0 forPresentationType:(int)arg1 ;
-(void)_removeAllTexturesForPresentationType:(int)arg0 ;
-(void)_requestQueue_scheduleUpdateIfAllowed;
-(void)_requestQueue_setNeedsUpdate;
-(void)_resizeStorageIfNeededForSpriteCount:(NSInteger)arg0 ;
-(void)_setNeedsUpdate;
-(void)_streamTexturesForSpritesInDataStore:(id)arg0 presentationDataStore:(id)arg1 changeDetails:(id)arg2 layout:(id)arg3 interactionState:(struct ? )arg4 loadingStatus:(id)arg5 ;
-(void)_updatePreheatingStrategy;
-(void)dealloc;
-(void)registerTextureProvider:(id)arg0 forMediaKind:(int)arg1 ;
-(void)simulateTextureLoad;
-(void)streamTexturesForSpritesInDataStore:(id)arg0 presentationDataStore:(id)arg1 changeDetails:(id)arg2 layout:(id)arg3 interactionState:(struct ? )arg4 ;
-(void)textureProvider:(id)arg0 didProvideCGImage:(struct CGImage *)arg1 options:(struct ? )arg2 isDegraded:(BOOL)arg3 forRequestID:(int)arg4 ;
-(void)textureProvider:(id)arg0 didProvideFailureWithError:(id)arg1 forRequestID:(int)arg2 ;
-(void)textureProvider:(id)arg0 didProvideImageData:(id)arg1 withSpecAtIndex:(NSInteger)arg2 size:(struct CGSize )arg3 bytesPerRow:(NSUInteger)arg4 contentsRect:(struct CGRect )arg5 forRequestID:(int)arg6 ;
-(void)textureProvider:(id)arg0 didProvideNothingForRequestID:(int)arg1 ;
-(void)textureProvider:(id)arg0 didProvidePayload:(id)arg1 forRequestID:(int)arg2 ;
-(void)textureProvider:(id)arg0 didProvidePixelBuffer:(struct __CVBuffer *)arg1 options:(struct ? )arg2 forRequestID:(int)arg3 ;
-(void)textureProviderNeedsToRegisterToDisplayLinkUpdates:(id)arg0 ;
-(void)textureProviderNeedsToUnregisterFromDisplayLinkUpdates:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGTEXTUREPROVIDER_H
#define PXGTEXTUREPROVIDER_H

@class NSMutableIndexSet, NSString, NSIndexSet;
@protocol PXImageDataSpecRegistration, PXGTextureProviderDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PXGViewEnvironment.h"

@interface PXGTextureProvider : NSObject <PXImageDataSpecRegistration>

 {
    NSMutableIndexSet *_lookupLock_activeRequests;
    os_unfair_lock_s _lookupLock;
    *? _imageDataSpecs;
    NSInteger _imageDataSpecsCount;
    NSInteger _imageDataSpecsCapacity;
    **void _textureAtlasManagers;
    ? _lastImageDataSpec;
    NSInteger _lastImageDataSpecIndex;
    NSMutableIndexSet *_requestIDsPendingCancellation;
}


@property (nonatomic) BOOL allowLargerImagesDuringScrollingInLowMemoryMode; // ivar: _allowLargerImagesDuringScrollingInLowMemoryMode
@property (nonatomic) BOOL canDeliverThumbnailData; // ivar: _canDeliverThumbnailData
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXGTextureProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) ? interactionState; // ivar: _interactionState
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *layoutQueue; // ivar: _layoutQueue
@property (nonatomic) BOOL lowMemoryMode; // ivar: _lowMemoryMode
@property (nonatomic) BOOL preferBGRA; // ivar: _preferBGRA
@property (nonatomic) NSUInteger preferredColorSpaceName; // ivar: _preferredColorSpaceName
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // ivar: _processingQueue
@property (copy, nonatomic) NSIndexSet *requestIDsInTargetRect; // ivar: _requestIDsInTargetRect
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // ivar: _requestQueue
@property (readonly) Class superclass;
@property (retain, nonatomic) PXGViewEnvironment *viewEnvironment; // ivar: _viewEnvironment
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(BOOL)isRequestActive:(int)arg0 ;
-(NSInteger)registerImageDataSpec:(struct ? )arg0 ;
-(NSInteger)requestQueue_indexForImageDataSpec:(struct ? )arg0 ;
-(id)init;
-(id)textureAtlasManagerAtSpecIndex:(NSInteger)arg0 ;
-(struct ? )imageDataSpecAtIndex:(NSInteger)arg0 ;
-(struct _NSRange )requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange )arg0 geometries:(struct ? *)arg1 styles:(struct ? *)arg2 infos:(struct ? *)arg3 inLayout:(id)arg4 ;
-(void)cancelTextureRequestDeferred:(int)arg0 ;
-(void)cancelTextureRequests:(id)arg0 ;
-(void)clearTextureAtlasManagerCache;
-(void)dealloc;
-(void)didFinishRequestingTextures;
-(void)interactionStateDidChange:(struct ? )arg0 ;
-(void)performDeferredCancellations;
-(void)prepareImageDataSpecs;
-(void)provideCGImage:(struct CGImage *)arg0 forRequestID:(int)arg1 ;
-(void)provideCGImage:(struct CGImage *)arg0 options:(struct ? )arg1 forRequestID:(int)arg2 ;
-(void)provideCGImage:(struct CGImage *)arg0 options:(struct ? )arg1 isDegraded:(BOOL)arg2 forRequestID:(int)arg3 ;
-(void)provideFailureWithError:(id)arg0 forRequestID:(int)arg1 ;
-(void)provideImageData:(id)arg0 withSpecAtIndex:(NSInteger)arg1 size:(struct CGSize )arg2 bytesPerRow:(NSUInteger)arg3 contentsRect:(struct CGRect )arg4 forRequestID:(int)arg5 ;
-(void)provideNothingForRequestID:(int)arg0 ;
-(void)providePayload:(id)arg0 forRequestID:(int)arg1 ;
-(void)providePixelBuffer:(struct __CVBuffer *)arg0 options:(struct ? )arg1 forRequestID:(int)arg2 ;
-(void)registerImageDataSpecs:(id)arg0 ;
-(void)releaseCachedResources;
-(void)requestUpdatedTexturesForDisplayLink:(id)arg0 ;
-(void)setNeedsRegisterToDisplayLinkUpdates;
-(void)setNeedsUnregisterFromDisplayLinkUpdates;
-(void)setTextureAtlasManager:(id)arg0 atSpecIndex:(NSInteger)arg1 ;
-(void)viewEnvironmentDidChange:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGVIEWRENDERER_H
#define PXGVIEWRENDERER_H

@class NSMutableDictionary, NSString;
@protocol PXScrollViewControllerObserver, PXGRenderer, PXGRendererDelegate, PXGTextureConverter;

#import <Foundation/Foundation.h>

#import "PXGSpriteDataStore.h"
#import "PXGEntityManager.h"
#import "PXScrollViewController.h"

@interface PXGViewRenderer : NSObject <PXScrollViewControllerObserver, PXGRenderer>

 {
    NSMutableDictionary *_reusableViewsByClass;
    NSMutableDictionary *_reusableViewInfoBySpriteIndex;
    NSMutableDictionary *_trackingContainerViewInfoBySpriteIndex;
    NSInteger _spriteBufferCapacity;
    *unsigned int _spriteIndexes;
    *? _textureInfos;
    CGPoint _renderedVisibleOrigin;
    UIEdgeInsets _loadInsets;
    PXGSpriteDataStore *_lastPresentationDataStore;
}


@property (nonatomic) PXGCameraConfiguration cameraConfiguration; // ivar: _cameraConfiguration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXGRendererDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PXGEntityManager *entityManager; // ivar: _entityManager
@property (readonly) NSUInteger hash;
@property (nonatomic) ? interactionState; // ivar: _interactionState
@property (nonatomic) BOOL lowMemoryMode; // ivar: _lowMemoryMode
@property (readonly, nonatomic) int presentationType;
@property (retain, nonatomic) PXScrollViewController *scrollViewController; // ivar: _scrollViewController
@property (readonly) Class superclass;
@property (copy, nonatomic) id *test_renderSnapshotHandler; // ivar: _test_renderSnapshotHandler
@property (readonly, nonatomic) NSObject<PXGTextureConverter> *textureConverter; // ivar: _textureConverter
@property (nonatomic) CGRect visibleRect; // ivar: _visibleRect
@property (readonly, nonatomic) BOOL wantsToDriveRender;


-(CGFloat)_screenScale;
-(id)_dequeueViewWithClass:(Class)arg0 ;
-(id)init;
-(id)trackingContainerViewForSpriteIndex:(unsigned int)arg0 ;
-(id)viewForSpriteIndex:(unsigned int)arg0 ;
-(void)_configureTrackingContainerView:(id)arg0 spriteIndex:(unsigned int)arg1 sprites:(struct ? )arg2 screenScale:(CGFloat)arg3 ;
-(void)_makeViewInfoReusable:(id)arg0 ;
-(void)_resizeBuffersForSpriteCount:(NSInteger)arg0 ;
-(void)_shiftViewsToCompensateForDeferredVisibleOrigin;
-(void)dealloc;
-(void)releaseResources;
-(void)renderImmediately;
-(void)renderSpritesWithTextures:(id)arg0 dataStore:(id)arg1 presentationDataStore:(id)arg2 presentationMetadataStore:(id)arg3 layout:(id)arg4 ;
-(void)scrollViewControllerDidScroll:(id)arg0 ;
-(void)setNeedsRender;
-(void)updateWithChangeDetails:(id)arg0 ;


@end


#endif
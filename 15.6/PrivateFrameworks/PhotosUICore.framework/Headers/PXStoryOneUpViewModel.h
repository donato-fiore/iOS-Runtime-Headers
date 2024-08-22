// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYONEUPVIEWMODEL_H
#define PXSTORYONEUPVIEWMODEL_H

@class NSString;
@protocol PXChangeObserver, PXStoryClipSpriteReferencesProvider, PXStoryTimeline;


#import "PXObservable.h"
#import "PXAssetsDataSourceManager.h"
#import "PXAssetReference.h"
#import "PXUIMediaProvider.h"
#import "PXOneUpPresentation.h"
#import "PXStoryResourcesDataSourceManager.h"
#import "PXUpdater.h"

@interface PXStoryOneUpViewModel : PXObservable <PXChangeObserver>

 {
    ? _spriteReferencesProviderRespondsTo;
}


@property (retain, nonatomic) PXAssetsDataSourceManager *assetsDataSourceManager; // ivar: _assetsDataSourceManager
@property (readonly, nonatomic) BOOL canPresentOneUp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXAssetReference *hiddenAssetReference; // ivar: _hiddenAssetReference
@property (readonly, nonatomic) NSInteger hiddenClipIdentifier; // ivar: _hiddenClipIdentifier
@property (retain, nonatomic) PXAssetReference *initialAssetReference; // ivar: _initialAssetReference
@property (readonly, nonatomic) NSInteger initialClipIdentifier; // ivar: _initialClipIdentifier
@property (readonly, nonatomic) PXUIMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (readonly, nonatomic) PXOneUpPresentation *oneUpPresentation; // ivar: _oneUpPresentation
@property (readonly, nonatomic) PXStoryResourcesDataSourceManager *resourcesDataSourceManager; // ivar: _resourcesDataSourceManager
@property (weak, nonatomic) NSObject<PXStoryClipSpriteReferencesProvider> *spriteReferencesProvider; // ivar: _spriteReferencesProvider
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<PXStoryTimeline> *timeline; // ivar: _timeline
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater
@property (retain, nonatomic) PXAssetReference *visibleAssetReference; // ivar: _visibleAssetReference
@property (readonly, nonatomic) NSInteger visibleClipIdentifier; // ivar: _visibleClipIdentifier


-(NSInteger)_clipIdentifierForAssetReference:(id)arg0 failureHandler:(id)arg1 ;
-(id)init;
-(id)initWithResourcesDataSourceManager:(id)arg0 mediaProvider:(id)arg1 ;
-(id)spriteReferenceForAssetReference:(id)arg0 ;
-(void)_invalidateAssetsDataSourceManager;
-(void)_invalidateHiddenClipIdentifier;
-(void)_invalidateInitialAssetReference;
-(void)_invalidateVisibleClipIdentifier;
-(void)_setNeedsUpdate;
-(void)_updateAssetsDataSourceManager;
-(void)_updateHiddenClipIdentifier;
-(void)_updateInitialAssetReference;
-(void)_updateVisibleClipIdentifier;
-(void)didPerformChanges;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performChanges:(id)arg0 ;


@end


#endif
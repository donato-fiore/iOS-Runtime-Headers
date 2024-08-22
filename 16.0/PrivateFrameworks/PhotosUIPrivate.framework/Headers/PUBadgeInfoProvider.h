// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUBADGEINFOPROVIDER_H
#define PUBADGEINFOPROVIDER_H

@class PXObservable, NSString;
@protocol PUBrowsingVideoPlayerChangeObserver, PXAssetEditOperationManagerObserver;


#import "PUAssetViewModel.h"

@interface PUBadgeInfoProvider : PXObservable <PUBrowsingVideoPlayerChangeObserver, PXAssetEditOperationManagerObserver>

 {
    ? _needsUpdateFlags;
}


@property (readonly, nonatomic) PUAssetViewModel *assetViewModel; // ivar: _assetViewModel
@property (readonly, nonatomic) PXAssetBadgeInfo badgeInfo; // ivar: _badgeInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat lastPlayingTime; // ivar: _lastPlayingTime
@property (readonly, nonatomic) PXAssetBadgeInfo outputBadgeInfo; // ivar: _outputBadgeInfo
@property (readonly, nonatomic) BOOL outputShouldAnimate; // ivar: _outputShouldAnimate
@property (nonatomic) BOOL playing; // ivar: _playing
@property (readonly) Class superclass;


-(BOOL)_needsUpdate;
-(id)init;
-(id)mutableChangeObject;
-(struct PXAssetBadgeInfo )_filteredBadgeInfoForTime:(CGFloat)arg0 outShouldAnimate:(*BOOL)arg1 ;
-(void)_invalidateOutput;
-(void)_setNeedsUpdate;
-(void)_updateIfNeeded;
-(void)_updateOutputIfNeeded;
-(void)_updatePlaying;
-(void)assetEditOperationManager:(id)arg0 didChangeEditOperationStatusForAsset:(id)arg1 context:(*void)arg2 ;
-(void)didPerformChanges;
-(void)invalidateOutput;
-(void)performChanges:(id)arg0 ;
-(void)prepareForReuse;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXASSETVARIATIONAUTOLOOPCOLLECTIONVIEWCELL_H
#define PXASSETVARIATIONAUTOLOOPCOLLECTIONVIEWCELL_H

@class ISWrappedAVPlayer, AVAsset, ISWrappedAVAudioSession, NSString;
@protocol ISChangeObserver;


#import "PXAssetVariationCollectionViewCell.h"
#import "PXVideoPlayerView.h"

@interface PXAssetVariationAutoloopCollectionViewCell : PXAssetVariationCollectionViewCell <ISChangeObserver>

 {
    ISWrappedAVPlayer *_videoPlayer;
    PXVideoPlayerView *_videoView;
    AVAsset *_displayedAsset;
}


@property (retain, nonatomic, setter=_setAudioSession:) ISWrappedAVAudioSession *_audioSession; // ivar: __audioSession
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)loadVariationView;
-(void)_updateVideoPlayerRateWithItem:(id)arg0 ;
-(void)_videoStatusDidChange;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)prepareForReuse;
-(void)updateError;
-(void)updateVariationView;


@end


#endif
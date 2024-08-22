// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXLIVEPHOTOVIEWMODULATOR_H
#define PXLIVEPHOTOVIEWMODULATOR_H

@class NSString, ISLivePhotoUIView;
@protocol PXMutableLivePhotoViewModulator, ISBasePlayerUIViewChangeObserver;

#import <Foundation/Foundation.h>

#import "PXImageLayerModulator.h"

@interface PXLivePhotoViewModulator : NSObject <PXMutableLivePhotoViewModulator, ISBasePlayerUIViewChangeObserver>

 {
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    ? _needsUpdateFlags;
}


@property (nonatomic) BOOL animateGainMapAppearance; // ivar: _animateGainMapAppearance
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL displayingVideoComplement; // ivar: _displayingVideoComplement
@property (readonly, nonatomic) *CGImage gainMapImage; // ivar: _gainMapImage
@property (readonly, nonatomic) float gainMapValue; // ivar: _gainMapValue
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXImageLayerModulator *imageModulator; // ivar: _imageModulator
@property (readonly, nonatomic) ISLivePhotoUIView *livePhotoView; // ivar: _livePhotoView
@property (readonly, nonatomic) BOOL revealsGainMapImage; // ivar: _revealsGainMapImage
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXImageLayerModulator *videoModulator; // ivar: _videoModulator


-(BOOL)_needsUpdate;
-(id)init;
-(id)initWithImageModulator:(id)arg0 videoModulator:(id)arg1 ;
-(void)_invalidateGainMapImage;
-(void)_invalidateInput;
-(void)_setNeedsUpdate;
-(void)_updateGainMapImage;
-(void)_updateIfNeeded;
-(void)_updateInput;
-(void)basePlayerUIView:(id)arg0 didChange:(NSUInteger)arg1 withAnimationDuration:(CGFloat)arg2 ;
-(void)dealloc;
-(void)performChanges:(id)arg0 ;
-(void)performChanges_Private:(id)arg0 ;
-(void)prepareForReuse;


@end


#endif
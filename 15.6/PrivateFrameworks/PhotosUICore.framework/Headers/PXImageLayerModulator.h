// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXIMAGELAYERMODULATOR_H
#define PXIMAGELAYERMODULATOR_H

@class NSString, CAFilter, CALayer;
@protocol PXMutableImageLayerModulator_Private;

#import <Foundation/Foundation.h>

#import "PXGainMapAnimationDurationFilter.h"

@interface PXImageLayerModulator : NSObject <PXMutableImageLayerModulator_Private>

 {
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    ? _needsUpdateFlags;
}


@property (nonatomic) BOOL animateGainMapAppearance; // ivar: _animateGainMapAppearance
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDisplayingVideoComplement) BOOL displayingVideoComplement; // ivar: _displayingVideoComplement
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) CAFilter *filter; // ivar: _filter
@property (readonly, nonatomic) NSInteger filterType; // ivar: _filterType
@property (retain, nonatomic) CALayer *filteredLayer; // ivar: _filteredLayer
@property (retain, nonatomic) PXGainMapAnimationDurationFilter *gainMapAnimationDurationFilter; // ivar: _gainMapAnimationDurationFilter
@property (readonly, nonatomic) *CGImage gainMapImage; // ivar: _gainMapImage
@property (retain, nonatomic) CALayer *gainMapLayer; // ivar: _gainMapLayer
@property (readonly, nonatomic) float gainMapValue; // ivar: _gainMapValue
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) float hdrGain; // ivar: _hdrGain
@property (readonly, nonatomic) CGFloat intensity; // ivar: _intensity
@property (nonatomic) CGFloat intensityAnimationDuration; // ivar: _intensityAnimationDuration
@property (readonly, nonatomic) CALayer *layer; // ivar: _layer
@property (retain, nonatomic) NSString *layerFilterIntensityKeyPath; // ivar: _layerFilterIntensityKeyPath
@property (readonly, nonatomic) ? options; // ivar: _options
@property (readonly, nonatomic) BOOL revealsGainMapImage; // ivar: _revealsGainMapImage
@property (readonly) Class superclass;


+(struct CGImage *)_gainMapPlaceholderImage;
-(BOOL)_needsUpdate;
-(id)init;
-(id)initWithOptions:(struct ? )arg0 ;
-(void)_addFilterToLayer:(id)arg0 ;
-(void)_invalidateFilter;
-(void)_invalidateFilterInput;
-(void)_invalidateFilterIntensity;
-(void)_invalidateFilteredLayer;
-(void)_invalidateGainMapAppearance;
-(void)_invalidateGainMapVisibility;
-(void)_removeFilterFromLayer:(id)arg0 ;
-(void)_setNeedsUpdate;
-(void)_updateFilter;
-(void)_updateFilterInput;
-(void)_updateFilterIntensityIfNeeded;
-(void)_updateFilteredLayerIfNeeded;
-(void)_updateGainMapAppearance;
-(void)_updateGainMapVisibility;
-(void)_updateIfNeeded;
-(void)animateChangesWithDuration:(CGFloat)arg0 ;
-(void)dealloc;
-(void)performChanges:(id)arg0 ;
-(void)performChanges_Private:(id)arg0 ;
-(void)prepareForReuse;
-(void)removeFilterFromUnownedLayer:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXZOOMABLEPHOTOSLAYOUTSPEC_H
#define PXZOOMABLEPHOTOSLAYOUTSPEC_H

@class NSArray;


#import "PXFeatureSpec.h"
#import "PXZoomableInlineHeadersLayoutSpec.h"

@interface PXZoomablePhotosLayoutSpec : PXFeatureSpec

@property (readonly, nonatomic) UIEdgeInsets aspectFitEdgeMargins; // ivar: _aspectFitEdgeMargins
@property (readonly, nonatomic) CGFloat aspectFitInteritemSpacing; // ivar: _aspectFitInteritemSpacing
@property (readonly, nonatomic) CGFloat captionSpacing; // ivar: _captionSpacing
@property (readonly, nonatomic) NSInteger defaultNumberOfColumns; // ivar: _defaultNumberOfColumns
@property (readonly, nonatomic) NSInteger initialNumberOfColumns; // ivar: _initialNumberOfColumns
@property (readonly, nonatomic) PXZoomableInlineHeadersLayoutSpec *inlineHeadersSpec; // ivar: _inlineHeadersSpec
@property (readonly, nonatomic) CGFloat interitemSpacing; // ivar: _interitemSpacing
@property (readonly, nonatomic) CGFloat itemAspectRatio; // ivar: _itemAspectRatio
@property (readonly, nonatomic) CGFloat itemCornerRadius; // ivar: _itemCornerRadius
@property (readonly, nonatomic) NSArray *legacyMacSupportedColumns; // ivar: _legacyMacSupportedColumns
@property (readonly, nonatomic) NSInteger maxColumnsForBadges; // ivar: _maxColumnsForBadges
@property (readonly, nonatomic) NSInteger maxColumnsForIndividualItems; // ivar: _maxColumnsForIndividualItems
@property (readonly, nonatomic) NSInteger maxColumnsForSaliency; // ivar: _maxColumnsForSaliency
@property (readonly, nonatomic) NSInteger minColumnsForMiniBadges; // ivar: _minColumnsForMiniBadges
@property (readonly, nonatomic) NSArray *minimumAssetsRequiredByColumn; // ivar: _minimumAssetsRequiredByColumn
@property (readonly, nonatomic) CGFloat panoramaInteritemSpacing; // ivar: _panoramaInteritemSpacing
@property (readonly, nonatomic) CGFloat panoramaItemAspectRatio; // ivar: _panoramaItemAspectRatio
@property (readonly, nonatomic) UIEdgeInsets squareEdgeMargins; // ivar: _squareEdgeMargins
@property (readonly, nonatomic) NSInteger staticNumberOfColumns; // ivar: _staticNumberOfColumns
@property (readonly, nonatomic) NSArray *supportedColumns; // ivar: _supportedColumns
@property (readonly, nonatomic) BOOL useSaliency; // ivar: _useSaliency


-(NSInteger)bestColumnIndexForPreferredNumberOfColumns:(NSInteger)arg0 allowedColumns:(id)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 availableThumbnailSizes:(id)arg2 gridStyle:(NSInteger)arg3 itemAspectRatio:(CGFloat)arg4 userDefaults:(id)arg5 forceSaliency:(BOOL)arg6 ;


@end


#endif
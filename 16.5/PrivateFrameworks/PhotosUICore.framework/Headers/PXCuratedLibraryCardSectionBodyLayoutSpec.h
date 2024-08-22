// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCURATEDLIBRARYCARDSECTIONBODYLAYOUTSPEC_H
#define PXCURATEDLIBRARYCARDSECTIONBODYLAYOUTSPEC_H



#import "PXFeatureSpec.h"
#import "PXGGradient.h"

@interface PXCuratedLibraryCardSectionBodyLayoutSpec : PXFeatureSpec

@property (readonly, nonatomic) BOOL allowsVideoPlaybackAtAnySize; // ivar: _allowsVideoPlaybackAtAnySize
@property (nonatomic) CGFloat aspectRatio; // ivar: _aspectRatio
@property (nonatomic) ? cornerRadius; // ivar: _cornerRadius
@property (nonatomic) CGFloat distanceToNextLayout; // ivar: _distanceToNextLayout
@property (nonatomic) CGFloat horizontalMargin; // ivar: _horizontalMargin
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (readonly, nonatomic) PXGGradient *skimmingHintGradient; // ivar: _skimmingHintGradient


-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXDAYASSETSSECTIONBODYLAYOUTSPEC_H
#define PXDAYASSETSSECTIONBODYLAYOUTSPEC_H



#import "PXFeatureSpec.h"

@interface PXDayAssetsSectionBodyLayoutSpec : PXFeatureSpec

@property (readonly, nonatomic) BOOL allowsVideoPlaybackAtAnySize; // ivar: _allowsVideoPlaybackAtAnySize
@property (readonly, nonatomic) ? bodyCornerRadius; // ivar: _bodyCornerRadius
@property (readonly, nonatomic) CGFloat interitemSpacing; // ivar: _interitemSpacing
@property (readonly, nonatomic) NSInteger numberOfColumns; // ivar: _numberOfColumns


-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 ;


@end


#endif
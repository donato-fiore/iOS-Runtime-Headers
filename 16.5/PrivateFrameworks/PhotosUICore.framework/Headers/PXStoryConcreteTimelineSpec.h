// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYCONCRETETIMELINESPEC_H
#define PXSTORYCONCRETETIMELINESPEC_H

@protocol PXStoryTimelineSpec;


#import "PXFeatureSpec.h"

@interface PXStoryConcreteTimelineSpec : PXFeatureSpec <PXStoryTimelineSpec>



@property (readonly, nonatomic) NSInteger layoutDirection; // ivar: _layoutDirection
@property (readonly, nonatomic) CGFloat nUpDividerWidth; // ivar: _nUpDividerWidth
@property (readonly, nonatomic) UIEdgeInsets safeAreaInsets; // ivar: _safeAreaInsets
@property (readonly, nonatomic) CGSize viewportSize; // ivar: _viewportSize


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 ;


@end


#endif
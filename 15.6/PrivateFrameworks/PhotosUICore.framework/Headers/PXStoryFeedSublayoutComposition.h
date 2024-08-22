// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYFEEDSUBLAYOUTCOMPOSITION_H
#define PXSTORYFEEDSUBLAYOUTCOMPOSITION_H

@protocol PXStoryFeedViewLayoutSpec;


#import "PXGGeneratedSublayoutComposition.h"
#import "PXLayoutGenerator.h"

@interface PXStoryFeedSublayoutComposition : PXGGeneratedSublayoutComposition {
    PXLayoutGenerator *_cachedLayoutGenerator;
}


@property (readonly, nonatomic) NSInteger scrollableAxis;
@property (retain, nonatomic) NSObject<PXStoryFeedViewLayoutSpec> *spec; // ivar: _spec


-(id)configuredLayoutGenerator;


@end


#endif
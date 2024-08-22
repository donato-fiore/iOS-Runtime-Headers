// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXFEEDSUBLAYOUTCOMPOSITION_H
#define PXFEEDSUBLAYOUTCOMPOSITION_H

@protocol PXFeedViewLayoutSpec;


#import "PXGGeneratedSublayoutComposition.h"
#import "PXLayoutGenerator.h"

@interface PXFeedSublayoutComposition : PXGGeneratedSublayoutComposition {
    PXLayoutGenerator *_cachedLayoutGenerator;
}


@property (readonly, nonatomic) NSInteger scrollableAxis;
@property (retain, nonatomic) NSObject<PXFeedViewLayoutSpec> *spec; // ivar: _spec


-(id)configuredLayoutGenerator;
-(void)visibleRectDidChange;


@end


#endif
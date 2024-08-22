// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKGRIDLAYOUTINVALIDATIONCONTEXT_H
#define GKGRIDLAYOUTINVALIDATIONCONTEXT_H

@class UICollectionViewLayoutInvalidationContext;



@interface GKGridLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext

@property (nonatomic) BOOL invalidateBoundsChange; // ivar: _invalidateBoundsChange
@property (nonatomic) BOOL invalidateIncrementalReveal; // ivar: _invalidateIncrementalReveal
@property (nonatomic) BOOL invalidatePinnableAreas; // ivar: _invalidatePinnableAreas
@property (nonatomic) BOOL invalidatePlaceholderVisibility; // ivar: _invalidatePlaceholderVisibility




@end


#endif
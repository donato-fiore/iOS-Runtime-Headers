// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUSECTIONEDGRIDLAYOUTINVALIDATIONCONTEXT_H
#define PUSECTIONEDGRIDLAYOUTINVALIDATIONCONTEXT_H

@class UICollectionViewLayoutInvalidationContext;



@interface PUSectionedGridLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext

@property (nonatomic) BOOL invalidateForVerticalScroll; // ivar: _invalidateForVerticalScroll
@property (nonatomic) BOOL invalidationHasBeenRedispatched; // ivar: _invalidationHasBeenRedispatched
@property (nonatomic) BOOL samplingIsPreserved; // ivar: _samplingIsPreserved
@property (nonatomic) BOOL sectioningIsPreserved; // ivar: _sectioningIsPreserved


-(id)description;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UICOLLECTIONVIEWFLOWLAYOUTINVALIDATIONCONTEXT_H
#define UICOLLECTIONVIEWFLOWLAYOUTINVALIDATIONCONTEXT_H



#import "UICollectionViewLayoutInvalidationContext.h"

@interface UICollectionViewFlowLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {
    ? _flowLayoutInvalidationFlags;
}


@property (nonatomic) BOOL invalidateFlowLayoutAttributes;
@property (nonatomic) BOOL invalidateFlowLayoutDelegateMetrics;


-(id)init;


@end


#endif
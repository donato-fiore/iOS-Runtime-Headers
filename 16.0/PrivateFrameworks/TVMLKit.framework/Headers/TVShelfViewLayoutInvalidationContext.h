// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVSHELFVIEWLAYOUTINVALIDATIONCONTEXT_H
#define TVSHELFVIEWLAYOUTINVALIDATIONCONTEXT_H

@class UICollectionViewLayoutInvalidationContext, NSIndexPath;



@interface TVShelfViewLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext

@property (retain, nonatomic) NSIndexPath *focusedItemIndexPath; // ivar: _focusedItemIndexPath
@property (nonatomic) BOOL invalidateLayout; // ivar: _invalidateLayout
@property (nonatomic) BOOL invalidateVerticalBumps; // ivar: _invalidateVerticalBumps




@end


#endif
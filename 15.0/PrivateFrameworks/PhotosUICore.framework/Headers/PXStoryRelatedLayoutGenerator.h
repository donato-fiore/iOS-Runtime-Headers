// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYRELATEDLAYOUTGENERATOR_H
#define PXSTORYRELATEDLAYOUTGENERATOR_H



#import "PXLayoutGenerator.h"
#import "PXStoryRelatedLayoutMetrics.h"

@interface PXStoryRelatedLayoutGenerator : PXLayoutGenerator {
    BOOL _isPrepared;
    CGSize _size;
    UIEdgeInsets _scrollableOutsets;
    BOOL _isContentScrolledIntoView;
    NSInteger _capacity;
    *CGRect _itemFrames;
}


@property (readonly, nonatomic) BOOL isContentScrolledIntoView;
@property (copy, nonatomic) PXStoryRelatedLayoutMetrics *metrics;
@property (readonly, nonatomic) UIEdgeInsets scrollableOutsets;


+(BOOL)isExpectedKeyItemAtIndex:(NSInteger)arg0 ;
+(NSInteger)_preferredNumberOfItemsForUserInterfaceIdiom:(NSInteger)arg0 ;
+(NSInteger)preferredNumberOfItemsForExtendedTraitCollection:(id)arg0 ;
-(id)initWithMetrics:(id)arg0 ;
-(struct CGRect *)_framesForItemInRange:(struct _NSRange )arg0 ;
-(struct CGSize )estimatedSize;
-(struct CGSize )size;
-(void)_prepareIfNeeded;
-(void)adjustTargetScrollOffset:(struct CGPoint *)arg0 forVelocity:(struct CGPoint )arg1 currentScrollOffset:(struct CGPoint )arg2 shouldHideContent:(*BOOL)arg3 ;
-(void)dealloc;
-(void)getFrames:(struct CGRect *)arg0 forItemsInRange:(struct _NSRange )arg1 ;
-(void)getGeometries:(struct _PXLayoutGeometry *)arg0 inRange:(struct _NSRange )arg1 withKind:(NSInteger)arg2 ;
-(void)invalidate;


@end


#endif
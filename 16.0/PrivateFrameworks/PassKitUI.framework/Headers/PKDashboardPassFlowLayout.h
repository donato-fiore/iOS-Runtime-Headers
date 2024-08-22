// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDASHBOARDPASSFLOWLAYOUT_H
#define PKDASHBOARDPASSFLOWLAYOUT_H

@class UICollectionViewLayout, NSMutableDictionary, NSString;
@protocol UIGestureRecognizerDelegate, PKDashboardLayout;



@interface PKDashboardPassFlowLayout : UICollectionViewLayout <UIGestureRecognizerDelegate, PKDashboardLayout>

 {
    BOOL _needsCustomLocation;
    BOOL _userIsActivelyDragging;
    BOOL _currentDraggingWentBelowThreshold;
    BOOL _userIsHoldingCardInCurrentDrag;
    BOOL _userWasHoldingCard;
    BOOL _bouncing;
    BOOL _showNonPassCells;
    BOOL _revealingItems;
    CGSize _passCellSize;
    NSMutableDictionary *_attributesPerIndexPath;
    CGSize _currentSize;
    BOOL _preventLayoutComputation;
    CGFloat _topMarginInFirstSection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fade;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(CGFloat)topMarginInFirstSection;
-(BOOL)_indexPathIsPassGroupIndexPath:(id)arg0 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(id)_customAttribuesForPassAtTheTop:(id)arg0 ;
-(id)_indexPathForPassGroup;
-(id)init;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg0 ;
-(id)invalidationContextForBoundsChange:(struct CGRect )arg0 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(struct CGSize )collectionViewContentSize;
-(struct UIEdgeInsets )insetsForSection:(NSInteger)arg0 ;
-(void)_adjustItems:(id)arg0 withLateralMove:(CGFloat)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(void)hideContent;
-(void)invalidateLayoutWithContext:(id)arg0 ;
-(void)passPanDidBegin;
-(void)passPanDidEnd;
-(void)prepareLayout;
-(void)revealContentAnimated:(BOOL)arg0 ;


@end


#endif
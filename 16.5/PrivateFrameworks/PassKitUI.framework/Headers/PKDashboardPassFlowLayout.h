// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDASHBOARDPASSFLOWLAYOUT_H
#define PKDASHBOARDPASSFLOWLAYOUT_H

@class UICollectionViewCompositionalLayout, NSString;
@protocol UIGestureRecognizerDelegate, PKDashboardLayout;



@interface PKDashboardPassFlowLayout : UICollectionViewCompositionalLayout <UIGestureRecognizerDelegate, PKDashboardLayout>

 {
    BOOL _needsCustomLocation;
    BOOL _userIsActivelyDragging;
    BOOL _currentDraggingWentBelowThreshold;
    BOOL _userIsHoldingCardInCurrentDrag;
    BOOL _userWasHoldingCard;
    BOOL _bouncing;
    BOOL _showNonPassCells;
    CGSize _passCellSize;
    BOOL _preventLayoutComputation;
    CGFloat _horizontalInset;
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
-(id)_indexPathForPassGroup;
-(id)_modifiedLayoutAttributes:(id)arg0 ;
-(id)init;
-(id)invalidationContextForBoundsChange:(struct CGRect )arg0 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutSectionAtIndex:(NSInteger)arg0 layoutEnvironment:(id)arg1 ;
-(struct CGSize )collectionViewContentSize;
-(void)_adjustItems:(id)arg0 withLateralMove:(CGFloat)arg1 ;
-(void)hideContent;
-(void)invalidateLayoutWithContext:(id)arg0 ;
-(void)passPanDidBegin;
-(void)passPanDidEnd;
-(void)prepareLayout;
-(void)revealContentAnimated:(BOOL)arg0 ;


@end


#endif
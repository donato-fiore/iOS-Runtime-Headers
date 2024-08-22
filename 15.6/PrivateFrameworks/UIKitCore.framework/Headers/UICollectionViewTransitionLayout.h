// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UICOLLECTIONVIEWTRANSITIONLAYOUT_H
#define UICOLLECTIONVIEWTRANSITIONLAYOUT_H

@class NSMutableDictionary, NSMutableArray;


#import "UICollectionViewLayout.h"

@interface UICollectionViewTransitionLayout : UICollectionViewLayout {
    CGRect _fromVisibleBounds;
    CGRect _toVisibleBounds;
    CGSize _contentSize;
    BOOL _haveValidInfos;
    NSMutableDictionary *_transitionInformationsDict;
    NSMutableDictionary *_currentLayoutInfos;
    BOOL _layoutIsValid;
    NSMutableArray *_disappearingLayoutAttributes;
    NSMutableArray *_appearingLayoutAttributes;
    CGFloat _accuracy;
}


@property (readonly, nonatomic) UICollectionViewLayout *currentLayout; // ivar: _fromLayout
@property (readonly, nonatomic) UICollectionViewLayout *nextLayout; // ivar: _toLayout
@property (nonatomic) CGFloat transitionProgress; // ivar: _transitionProgress


-(BOOL)_supportsAdvancedTransitionAnimations;
-(CGFloat)valueForAnimatedKey:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCurrentLayout:(id)arg0 nextLayout:(id)arg1 ;
-(id)interpolatedLayoutAttributesFromLayoutAttributes:(id)arg0 toLayoutAttributes:(id)arg1 progress:(CGFloat)arg2 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 ;
-(struct CGRect )_newVisibleBounds;
-(struct CGRect )_oldVisibleBounds;
-(struct CGSize )collectionViewContentSize;
-(void)_finalizeLayoutTransition;
-(void)_prepareForTransitionFromLayout:(id)arg0 ;
-(void)_prepareForTransitionToLayout:(id)arg0 ;
-(void)_setCollectionView:(id)arg0 ;
-(void)invalidateLayout;
-(void)prepareLayout;
-(void)updateValue:(CGFloat)arg0 forAnimatedKey:(id)arg1 ;


@end


#endif
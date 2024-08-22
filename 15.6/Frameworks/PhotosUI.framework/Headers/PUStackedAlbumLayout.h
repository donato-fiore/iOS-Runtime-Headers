// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUSTACKEDALBUMLAYOUT_H
#define PUSTACKEDALBUMLAYOUT_H

@class UICollectionViewLayout, NSMutableDictionary, UICollectionViewLayoutAttributes, NSArray;


#import "PUAlbumListTransitionContext.h"

@interface PUStackedAlbumLayout : UICollectionViewLayout {
    NSMutableDictionary *_visibleLayoutAttributesByIndexPath;
    NSMutableDictionary *_derivedLayoutAttributesByIndexPath;
    NSMutableDictionary *_zIndexByIndexPath;
}


@property (retain, nonatomic) PUAlbumListTransitionContext *albumListTransitionContext; // ivar: _albumListTransitionContext
@property (nonatomic) CGSize contentSizeAdjust; // ivar: _contentSizeAdjust
@property (retain, nonatomic) UICollectionViewLayoutAttributes *globalHeaderAttributes; // ivar: _globalHeaderAttributes
@property (nonatomic, setter=setInteractive:) BOOL isInteractive; // ivar: _isInteractive
@property (nonatomic) CGPoint referenceCenter; // ivar: _referenceCenter
@property (copy, nonatomic) UICollectionViewLayoutAttributes *referenceItemLayoutAttributes; // ivar: _referenceItemLayoutAttributes
@property (copy, nonatomic) NSArray *visibleStackedItemLayoutAttributes; // ivar: _visibleStackedItemLayoutAttributes
@property (nonatomic) CGFloat yAdjust; // ivar: _yAdjust


-(NSInteger)zIndexForItemAtIndexPath:(id)arg0 ;
-(id)_animationForReusableView:(SEL)arg0 toLayoutAttributes:(id)arg1 type:(id)arg2 ;
-(id)_newAdjustedLayoutAttributes:(id)arg0 indexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(struct CGSize )collectionViewContentSize;
-(void)prepareLayout;


@end


#endif
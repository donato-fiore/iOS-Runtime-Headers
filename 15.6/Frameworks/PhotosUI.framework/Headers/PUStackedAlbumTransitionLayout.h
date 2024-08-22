// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUSTACKEDALBUMTRANSITIONLAYOUT_H
#define PUSTACKEDALBUMTRANSITIONLAYOUT_H

@class UICollectionViewTransitionLayout;


#import "PUCollectionViewLayoutCache.h"

@interface PUStackedAlbumTransitionLayout : UICollectionViewTransitionLayout {
    CGPoint _expandedStackDelta;
    BOOL _didPrepareLayout;
    PUCollectionViewLayoutCache *_currentLayoutCache;
    PUCollectionViewLayoutCache *_nextLayoutCache;
}


@property (nonatomic) CGPoint currentCollapsedStackCenter; // ivar: _currentCollapsedStackCenter
@property (readonly, nonatomic) CGPoint expandedStackFinalDelta; // ivar: _expandedStackFinalDelta
@property (nonatomic) CGPoint finalCollapsedStackCenter; // ivar: _finalCollapsedStackCenter
@property (nonatomic) CGPoint initialCollapsedStackCenter; // ivar: _initialCollapsedStackCenter
@property (nonatomic) CGPoint interactionOffset; // ivar: _interactionOffset
@property (readonly, nonatomic) BOOL isExpanding; // ivar: _isExpanding


-(id)initWithCurrentLayout:(id)arg0 nextLayout:(id)arg1 isExpanding:(BOOL)arg2 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(struct CGPoint )_centerOfLayoutAttributes:(id)arg0 ;
-(struct CGPoint )_newCenterForLayoutAttributes:(id)arg0 transitionProgress:(CGFloat)arg1 ;
-(void)prepareLayout;


@end


#endif
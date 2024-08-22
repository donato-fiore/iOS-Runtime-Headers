// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKNAVIGATORCOLLECTIONVIEWLAYOUT_H
#define OKNAVIGATORCOLLECTIONVIEWLAYOUT_H

@class UICollectionViewFlowLayout, UIPanGestureRecognizer, NSString, NSIndexPath;
@protocol UIGestureRecognizerDelegate;


#import "OKNavigatorCollectionViewController.h"

@interface OKNavigatorCollectionViewLayout : UICollectionViewFlowLayout <UIGestureRecognizerDelegate>

 {
    UIPanGestureRecognizer *_panGestureRecognizer;
    CGRect _oldBounds;
}


@property (nonatomic) OKNavigatorCollectionViewController *collectionViewController; // ivar: _collectionViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSIndexPath *sourceItemIndexPath; // ivar: _sourceItemIndexPath
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger transitionStyle; // ivar: _transitionStyle


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg0 ;
-(id)init;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg0 ;
-(id)itemClosestToCenter;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 withScrollingVelocity:(struct CGPoint )arg1 ;
-(void)dealloc;
-(void)finalizeAnimatedBoundsChange;
-(void)handlePanGesture:(id)arg0 ;
-(void)prepareForAnimatedBoundsChange:(struct CGRect )arg0 ;
-(void)prepareLayout;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKGROUPACKNOWLEDGMENTVOTINGLAYOUT_H
#define CKGROUPACKNOWLEDGMENTVOTINGLAYOUT_H

@class UICollectionViewLayout, NSArray;



@interface CKGroupAcknowledgmentVotingLayout : UICollectionViewLayout

@property (copy, nonatomic) NSArray *ballotItems; // ivar: _ballotItems
@property (nonatomic) NSInteger expandedSection; // ivar: _expandedSection
@property (retain, nonatomic) NSArray *fromBallotItems; // ivar: _fromBallotItems
@property (nonatomic) CGPoint fromContentOffset; // ivar: _fromContentOffset
@property (nonatomic) CGSize fromContentSize; // ivar: _fromContentSize
@property (nonatomic) BOOL isAnimatedLayoutChange; // ivar: _isAnimatedLayoutChange
@property (nonatomic) NSUInteger layoutMode; // ivar: _layoutMode
@property (nonatomic) CGPoint previousCollapsedContentOffset; // ivar: _previousCollapsedContentOffset


-(BOOL)_shouldFillInFromCenter;
-(CGFloat)_totalBallotContainersWidth;
-(NSInteger)_numberOfBallots;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg0 ;
-(id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)init;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg0 ;
-(id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 ;
-(struct CGSize )collectionViewContentSize;
-(void)_initializeBallotItems;
-(void)_setupAnimatedCollapsedLayout;
-(void)_setupCollapsedLayout;
-(void)_setupExpandedLayout;
-(void)cleanupAnimationCache;
-(void)finalizeAnimatedBoundsChange;
-(void)preapareForLayoutAnimationAroundSection:(NSInteger)arg0 ;
-(void)prepareLayout;


@end


#endif
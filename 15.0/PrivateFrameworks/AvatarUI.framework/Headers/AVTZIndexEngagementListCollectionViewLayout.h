// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTZINDEXENGAGEMENTLISTCOLLECTIONVIEWLAYOUT_H
#define AVTZINDEXENGAGEMENTLISTCOLLECTIONVIEWLAYOUT_H

@class NSIndexPath, UICollectionViewUpdateItem;


#import "AVTEngagementListCollectionViewLayout.h"
#import "AVTUIEnvironment.h"

@interface AVTZIndexEngagementListCollectionViewLayout : AVTEngagementListCollectionViewLayout

@property (retain, nonatomic) NSIndexPath *backIndexPath; // ivar: _backIndexPath
@property (retain, nonatomic) UICollectionViewUpdateItem *currentUpdateItem; // ivar: _currentUpdateItem
@property (retain, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (nonatomic) CGFloat minAlphaFactor; // ivar: _minAlphaFactor
@property (retain, nonatomic) NSIndexPath *plusButtonIndexPath; // ivar: _plusButtonIndexPath


-(CGFloat)alphaForElementWithAttributes:(id)arg0 ;
-(CGFloat)alphaForPadElementWithEngagement:(CGFloat)arg0 ;
-(NSInteger)zIndexForElementWithAttributes:(id)arg0 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg0 ;
-(id)initWithEngagementLayout:(id)arg0 minAlphaFactor:(CGFloat)arg1 environment:(id)arg2 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(struct UIEdgeInsets )engagementInsetsForCollectionViewBounds:(struct CGSize )arg0 ;
-(void)finalizeCollectionViewUpdates;
-(void)prepareForCollectionViewUpdates:(id)arg0 ;


@end


#endif
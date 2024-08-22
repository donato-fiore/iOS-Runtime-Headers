// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICOLLECTIONLAYOUTITEMSOLVER_H
#define _UICOLLECTIONLAYOUTITEMSOLVER_H

@class NSString;
@protocol NSCopying, _UICollectionLayoutAuxillaryHosting, NSCollectionLayoutContainer, _UICollectionPreferredSizes, _UICollectionLayoutSupplementaryEnrolling;

#import <Foundation/Foundation.h>

#import "NSCollectionLayoutItem.h"
#import "UITraitCollection.h"
#import "_UICollectionLayoutItemSolverState.h"

@interface _UICollectionLayoutItemSolver : NSObject <NSCopying, _UICollectionLayoutAuxillaryHosting>

 {
    BOOL _layoutRTL;
    NSCollectionLayoutItem *_item;
    id<NSCollectionLayoutContainer> *_container;
    UITraitCollection *_traitCollection;
    NSString *_errorDescription;
    _UICollectionLayoutItemSolverState *_solveResult;
    id<_UICollectionPreferredSizes> *_preferredSizes;
    id<_UICollectionLayoutSupplementaryEnrolling> *_supplementaryEnroller;
    NSInteger _solutionRecursionDepth;
    NSInteger _maxFrameCount;
    NSUInteger _layoutAxis;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)auxillaryHostShouldLayoutRTL;
-(BOOL)auxillaryHostWantsOverlapAdjustmentForMatchingAlignmentsOnly;
-(NSInteger)auxillaryHostAuxillaryKind;
-(NSUInteger)auxillaryHostLayoutAxis;
-(id)auxillaryHostAuxillaryItems;
-(id)auxillaryHostContainer;
-(id)auxillaryHostPreferredSizes;
-(id)auxillaryHostSupplementaryEnroller;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(struct CGPoint )auxillaryHostAdditionalFrameOffset;
-(struct CGRect )auxillaryHostPinningRect;
-(struct CGSize )auxillaryHostContentSize;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONLAYOUTSECTIONLISTSOLVER_H
#define _UICOLLECTIONLAYOUTSECTIONLISTSOLVER_H

@class NSString, NSIndexSet;
@protocol _UICollectionLayoutSectionSolver, _UICollectionLayoutAuxillaryHosting, NSCollectionLayoutContainer, _UICollectionPreferredSizes;

#import <Foundation/Foundation.h>

#import "_UICollectionLayoutItemSolver.h"
#import "_UICollectionLayoutAuxillaryItemSolver.h"
#import "_UICollectionLayoutSupplementaryRegistrar.h"
#import "_UICollectionLayoutSectionGeometryTranslator.h"
#import "NSCollectionLayoutSection.h"
#import "UITraitCollection.h"

@interface _UICollectionLayoutSectionListSolver : NSObject <_UICollectionLayoutSectionSolver, _UICollectionLayoutAuxillaryHosting>

 {
    vector<_UIRegionSolveResult, std::allocator<_UIRegionSolveResult>> _regions;
    unique_ptr<_UIItemSolveResult, std::default_delete<_UIItemSolveResult>> _templateItemSolveResult;
    _UICollectionLayoutItemSolver *_solution;
    _UICollectionLayoutAuxillaryItemSolver *_sectionAuxillarySolution;
    _UICollectionLayoutSupplementaryRegistrar *_sectionSupplementaryRegistrar;
    _UICollectionLayoutSectionGeometryTranslator *_sectionGeometryTranslator;
    id<NSCollectionLayoutContainer> *_memoizedAuxillaryHostContainer;
    id<_UICollectionPreferredSizes> *_preferredSizes;
    CGRect _overrideContentRectForPinning;
}


@property (retain, nonatomic) NSObject<NSCollectionLayoutContainer> *container; // ivar: _container
@property (nonatomic) NSUInteger containerLayoutAxis; // ivar: _containerLayoutAxis
@property (readonly, nonatomic) CGSize contentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGRect effectiveContentFrame;
@property (readonly, nonatomic) NSString *errorDescription; // ivar: _errorDescription
@property (nonatomic) NSInteger frameCount; // ivar: _frameCount
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger layoutAxis; // ivar: _layoutAxis
@property (nonatomic) BOOL layoutRTL; // ivar: _layoutRTL
@property (retain, nonatomic) NSCollectionLayoutSection *layoutSection; // ivar: _layoutSection
@property (nonatomic) CGPoint orthogonalOffset; // ivar: _orthogonalOffset
@property (nonatomic) CGVector orthogonalScrollingPrefetchingUnitVector; // ivar: _orthogonalScrollingPrefetchingUnitVector
@property (readonly, nonatomic) NSIndexSet *pinnedSupplementaryIndexes;
@property (nonatomic) BOOL shouldAdjustContentSizeForPartialLastGroupSolution; // ivar: _shouldAdjustContentSizeForPartialLastGroupSolution
@property (readonly) Class superclass;
@property (retain, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection


-(BOOL)auxillaryHostShouldLayoutRTL;
-(BOOL)auxillaryHostWantsOverlapAdjustmentForMatchingAlignmentsOnly;
-(CGFloat)_dimensionForRootGroupAlongAxis:(NSUInteger)arg0 ;
-(CGFloat)auxillaryHostPaddingBeforeBoundarySupplementaries;
-(NSInteger)auxillaryHostAuxillaryKind;
-(NSInteger)sectionSupplementaryKindIndexForEnrollmentIdentifier:(id)arg0 ;
-(NSUInteger)auxillaryHostLayoutAxis;
-(id)auxillaryHostAuxillaryItems;
-(id)auxillaryHostContainer;
-(id)auxillaryHostPreferredSizes;
-(id)auxillaryHostSupplementaryEnroller;
-(id)frameForIndex:(NSInteger)arg0 ;
-(id)queryFramesIntersectingRect:(struct CGRect )arg0 ;
-(id)queryFramesIntersectingRect:(struct CGRect )arg0 frameOffset:(struct CGPoint )arg1 ;
-(id)resolveWithParameters:(id)arg0 preferredSizes:(id)arg1 ;
-(id)sectionSupplementaryFrameForIndex:(NSInteger)arg0 ;
-(id)sectionSupplementaryFrameWithKind:(id)arg0 index:(NSInteger)arg1 ;
-(id)supplementaryFrameWithKind:(id)arg0 index:(NSInteger)arg1 ;
-(id)unpinnedSectionSupplementaryFrameForIndex:(NSInteger)arg0 ;
-(id)visualDescription;
-(struct CGRect )auxillaryHostPinningRect;
-(struct CGSize )auxillaryHostContentSize;
-(void)solveForContainer:(id)arg0 traitCollection:(id)arg1 layoutAxis:(NSUInteger)arg2 frameCount:(NSInteger)arg3 ;
-(void)solveForContainer:(id)arg0 traitCollection:(id)arg1 layoutAxis:(NSUInteger)arg2 frameCount:(NSInteger)arg3 preferredSizes:(id)arg4 ;
-(void)solveForContainer:(id)arg0 traitCollection:(id)arg1 layoutAxis:(NSUInteger)arg2 frameCount:(NSInteger)arg3 preferredSizes:(id)arg4 layoutRTL:(BOOL)arg5 ;
-(void)updatePinnedSupplementaryItemsWithVisibleBounds:(struct CGRect )arg0 ;
-(void)updatePinnedSupplementaryItemsWithVisibleBounds:(struct CGRect )arg0 overrideContentRectForPinning:(struct CGRect )arg1 ;


@end


#endif
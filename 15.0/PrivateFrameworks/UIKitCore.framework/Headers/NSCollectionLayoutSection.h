// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSCOLLECTIONLAYOUTSECTION_H
#define NSCOLLECTIONLAYOUTSECTION_H

@class NSIndexSet, NSDictionary, NSArray;
@protocol NSCopying, _UICollectionLayoutSectionCallback;

#import <Foundation/Foundation.h>

#import "NSCollectionLayoutGroup.h"

@interface NSCollectionLayoutSection : NSObject <NSCopying>

 {
    NSIndexSet *_pinnedBoundarySupplementaryItemIndexes;
    BOOL _hasBackgroundDecorationItem;
    NSDictionary *_supplementaryItemsDict;
    NSDictionary *_decorationItemsDict;
    BOOL _isEmptySection;
}


@property (copy, nonatomic) NSArray *boundarySupplementaryItems; // ivar: _boundarySupplementaryItems
@property (readonly, nonatomic, getter=_callback) NSObject<_UICollectionLayoutSectionCallback> *callback; // ivar: _callback
@property (nonatomic) NSDirectionalEdgeInsets contentInsets; // ivar: _contentInsets
@property (nonatomic) NSInteger contentInsetsReference; // ivar: _contentInsetsReference
@property (nonatomic) CGSize contentSize; // ivar: _contentSize
@property (copy, nonatomic) NSArray *decorationItems; // ivar: _decorationItems
@property (readonly, nonatomic) NSDictionary *decorationItemssDict; // ivar: _decorationItemssDict
@property (copy, nonatomic) NSCollectionLayoutGroup *group; // ivar: _group
@property (nonatomic) CGFloat interGroupSpacing; // ivar: _interGroupSpacing
@property (nonatomic) NSInteger orthogonalScrollingBehavior; // ivar: _orthogonalScrollingBehavior
@property (copy, nonatomic) NSIndexSet *pinnedSupplementaryItemIndexes; // ivar: _pinnedSupplementaryItemIndexes
@property (nonatomic) BOOL prefersListSolver; // ivar: _prefersListSolver
@property (nonatomic) BOOL supplementariesFollowContentInsets; // ivar: _supplementariesFollowContentInsets
@property (copy, nonatomic) NSArray *supplementaryItems; // ivar: _supplementaryItems
@property (readonly, nonatomic) NSDictionary *supplementaryItemsDict;
@property (copy, nonatomic) id *visibleItemsInvalidationHandler; // ivar: _visibleItemsInvalidationHandler


+(id)_emptySection;
+(id)sectionWithGroup:(id)arg0 ;
+(id)sectionWithListConfiguration:(id)arg0 layoutEnvironment:(id)arg1 ;
-(BOOL)_containsBackgroundDecorationItem:(id)arg0 ;
-(BOOL)_containsEstimatedSizeElement;
-(BOOL)_hasBackgroundDecorationItem;
-(BOOL)_hasVisibleItemsHandler;
-(BOOL)_isEmptySection;
-(BOOL)_isListSolverCompatibleForLayoutAxis:(NSUInteger)arg0 ;
-(BOOL)_pinnedSupplementariesShouldOverlap;
-(BOOL)_supportsBandSelection;
-(BOOL)_wantsSwipeActions;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)scrollsOrthogonally;
-(BOOL)shouldRestrictOrthogonalAxisDuringInteractiveMovement;
-(CGFloat)_alignedContentMarginGivenMargin:(CGFloat)arg0 ;
-(CGFloat)_paddingToBoundarySupplementaries;
-(id)_auxillaryItemForElementKind:(id)arg0 category:(NSUInteger)arg1 ;
-(id)_backgroundDecorationViewsRequiringCustomViewClassRegistration;
-(id)_leadingSwipeActionsConfigurationForIndexPath:(id)arg0 ;
-(id)_preferredContainerBackgroundColor;
-(id)_trailingSwipeActionsConfigurationForIndexPath:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
// -(id)initWithGroup:(id)arg0 contentInsets:(struct NSDirectionalEdgeInsets )arg1 contentInsetsReference:(NSInteger)arg2 supplementaryItems:(id)arg3 boundarySupplementartItems:(id)arg4 pinnedSupplementaryItemIndexes:(id)arg5 interGroupSpacing:(CGFloat)arg6 visibleItemsInvalidationHandler:(id)arg7 supplementariesFollowInsets:(unk)arg8 decorationItems:(BOOL)arg9 orthogonalScrollingBehavior:(id)arg10 isEmptySection:(NSInteger)arg11 prefersListSolver:(BOOL)arg12  ;
-(id)initWithLayoutGroup:(id)arg0 ;
-(id)pinnedBoundarySupplementaryItemIndexes;
-(void)_checkForDuplicateSupplementaryItemKindsAndThrowIfFound;
-(void)_didEndSwiping;
-(void)_willBeginSwiping;


@end


#endif
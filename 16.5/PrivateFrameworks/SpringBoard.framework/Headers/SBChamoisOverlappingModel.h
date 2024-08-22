// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCHAMOISOVERLAPPINGMODEL_H
#define SBCHAMOISOVERLAPPINGMODEL_H

@class NSMutableDictionary, NSMutableArray;
@protocol NSMutableCopying;

#import <Foundation/Foundation.h>


@interface SBChamoisOverlappingModel : NSObject <NSMutableCopying>



@property (nonatomic) CGRect boundingBox; // ivar: _boundingBox
@property (retain, nonatomic) NSMutableDictionary *centersForItems; // ivar: _centersForItems
@property (nonatomic) CGRect compactedBoundingBox; // ivar: _compactedBoundingBox
@property (retain, nonatomic) NSMutableDictionary *compactedCentersForItems; // ivar: _compactedCentersForItems
@property (nonatomic) CGRect containerBounds; // ivar: _containerBounds
@property (retain, nonatomic) NSMutableDictionary *coveredForItems; // ivar: _coveredForItems
@property (retain, nonatomic) NSMutableDictionary *fullyOccludedForItems; // ivar: _fullyOccludedForItems
@property (retain, nonatomic) NSMutableArray *items; // ivar: _items
@property (retain, nonatomic) NSMutableDictionary *overlappingScaleAnchorCentersForItems; // ivar: _overlappingScaleAnchorCentersForItems
@property (retain, nonatomic) NSMutableDictionary *partiallyOccludedForItems; // ivar: _partiallyOccludedForItems
@property (retain, nonatomic) NSMutableDictionary *sizesForItems; // ivar: _sizesForItems
@property (nonatomic) CGRect stageArea; // ivar: _stageArea
@property (nonatomic) CGRect stageAreaForResizing; // ivar: _stageAreaForResizing
@property (retain, nonatomic) NSMutableDictionary *unoccludedPeekingCentersForItems; // ivar: _unoccludedPeekingCentersForItems
@property (retain, nonatomic) NSMutableDictionary *userConfiguredSizesBeforeAutoResizingForItems; // ivar: _userConfiguredSizesBeforeAutoResizingForItems
@property (nonatomic) CGFloat widthThresholdToHideStrip; // ivar: _widthThresholdToHideStrip


-(BOOL)isContinuousExposeStripVisible;
-(BOOL)isItemCoveredByFullyOccludedPeekingItem:(id)arg0 ;
-(BOOL)isItemFullyOccluded:(id)arg0 ;
-(BOOL)isItemPartiallyOccluded:(id)arg0 ;
-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithItems:(id)arg0 centersForItems:(id)arg1 sizesForItems:(id)arg2 containerBounds:(struct CGRect )arg3 ;
-(id)modelByModifyingModelWithBlock:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct CGPoint )centerForItem:(id)arg0 ;
-(struct CGPoint )compactedCenterForItem:(id)arg0 ;
-(struct CGPoint )overlappingScaleAnchorCenterForItem:(id)arg0 ;
-(struct CGPoint )unoccludedPeekingCenterForItem:(id)arg0 ;
-(struct CGSize )sizeForItem:(id)arg0 ;
-(struct CGSize )userConfiguredSizeBeforeOverlappingForItem:(id)arg0 ;


@end


#endif
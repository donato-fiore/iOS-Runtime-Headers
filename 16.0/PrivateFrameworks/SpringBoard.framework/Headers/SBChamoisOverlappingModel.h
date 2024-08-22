// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBCHAMOISOVERLAPPINGMODEL_H
#define SBCHAMOISOVERLAPPINGMODEL_H

@class NSMutableDictionary, NSMutableArray;
@protocol NSMutableCopying;

#import <Foundation/Foundation.h>


@interface SBChamoisOverlappingModel : NSObject <NSMutableCopying>



@property (nonatomic) CGRect boundingBox; // ivar: _boundingBox
@property (retain, nonatomic) NSMutableDictionary *centersForItems; // ivar: _centersForItems
@property (nonatomic) CGRect containerBounds; // ivar: _containerBounds
@property (retain, nonatomic) NSMutableDictionary *fullyOccludedForItems; // ivar: _fullyOccludedForItems
@property (retain, nonatomic) NSMutableArray *items; // ivar: _items
@property (retain, nonatomic) NSMutableDictionary *partiallyOccludedForItems; // ivar: _partiallyOccludedForItems
@property (retain, nonatomic) NSMutableDictionary *sizesForItems; // ivar: _sizesForItems
@property (retain, nonatomic) NSMutableDictionary *userConfiguredSizesBeforeAutoResizingForItems; // ivar: _userConfiguredSizesBeforeAutoResizingForItems


-(BOOL)isItemFullyOccluded:(id)arg0 ;
-(BOOL)isItemPartiallyOccluded:(id)arg0 ;
-(id)initWithItems:(id)arg0 centersForItems:(id)arg1 sizesForItems:(id)arg2 userConfiguredSizesBeforeAutoResizingForItems:(id)arg3 containerBounds:(struct CGRect )arg4 boundingBox:(struct CGRect )arg5 ;
-(id)modelByModifyingModelWithBlock:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(struct CGPoint )centerForItem:(id)arg0 ;
-(struct CGSize )sizeForItem:(id)arg0 ;
-(struct CGSize )userConfiguredSizeBeforeOverlappingForItem:(id)arg0 ;


@end


#endif
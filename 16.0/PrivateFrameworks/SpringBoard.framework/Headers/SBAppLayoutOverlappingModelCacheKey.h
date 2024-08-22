// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBAPPLAYOUTOVERLAPPINGMODELCACHEKEY_H
#define SBAPPLAYOUTOVERLAPPINGMODELCACHEKEY_H

@class NSArray, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SBDisplayItem.h"

@interface SBAppLayoutOverlappingModelCacheKey : NSObject <NSCopying>

 {
    NSArray *_zOrderedItems;
    NSDictionary *_sizesForItems;
    NSDictionary *_sizingPolicyForItems;
    NSDictionary *_centersForItems;
    CGRect _containerBounds;
    NSInteger _containerOrientation;
    BOOL _hideStrips;
    BOOL _hideDock;
    SBDisplayItem *_draggingItemIfAny;
    NSUInteger _hash;
}




+(id)cacheKeyForSnapshotOfAppLayout:(id)arg0 containerBounds:(struct CGRect )arg1 containerOrientation:(NSInteger)arg2 hideStrips:(BOOL)arg3 hideDock:(BOOL)arg4 draggingItem:(id)arg5 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithAppLayout:(id)arg0 containerBounds:(struct CGRect )arg1 containerOrientation:(NSInteger)arg2 hideStrips:(BOOL)arg3 hideDock:(BOOL)arg4 draggingItem:(id)arg5 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
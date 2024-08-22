// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAPPLAYOUTOVERLAPPINGMODELCACHEKEY_H
#define SBAPPLAYOUTOVERLAPPINGMODELCACHEKEY_H

@class NSArray, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SBDisplayItem.h"

@interface SBAppLayoutOverlappingModelCacheKey : NSObject <NSCopying>

 {
    NSArray *_zOrderedItems;
    NSDictionary *_recordsForItems;
    CGRect _containerBounds;
    NSInteger _containerOrientation;
    CGFloat _floatingDockHeight;
    BOOL _hideStrips;
    BOOL _hideDock;
    SBDisplayItem *_draggingItemIfAny;
    NSUInteger _hash;
}




+(id)cacheKeyForSnapshotOfAppLayout:(id)arg0 containerBounds:(struct CGRect )arg1 containerOrientation:(NSInteger)arg2 floatingDockHeight:(CGFloat)arg3 hideStrips:(BOOL)arg4 hideDock:(BOOL)arg5 draggingItem:(id)arg6 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithAppLayout:(id)arg0 containerBounds:(struct CGRect )arg1 containerOrientation:(NSInteger)arg2 floatingDockHeight:(CGFloat)arg3 hideStrips:(BOOL)arg4 hideDock:(BOOL)arg5 draggingItem:(id)arg6 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif
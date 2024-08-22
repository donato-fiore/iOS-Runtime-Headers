// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUTILINGLAYOUTINVALIDATIONCONTEXT_H
#define PUTILINGLAYOUTINVALIDATIONCONTEXT_H

@class NSMutableDictionary, NSSet;

#import <Foundation/Foundation.h>


@interface PUTilingLayoutInvalidationContext : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_invalidatedIndexPathsByTileKind; // ivar: __invalidatedIndexPathsByTileKind
@property (nonatomic) BOOL invalidatedAllTiles; // ivar: _invalidatedAllTiles
@property (nonatomic) BOOL invalidatedAnyTile; // ivar: _invalidatedAnyTile
@property (readonly, nonatomic) BOOL invalidatedContentBounds; // ivar: _invalidatedContentBounds
@property (readonly, nonatomic) NSSet *invalidatedTileKinds; // ivar: _invalidatedTileKinds


-(id)init;
-(void)enumerateInvalidatedTilesUsingBlock:(id)arg0 ;
-(void)invalidateAllTiles;
-(void)invalidateAllTilesWithKind:(id)arg0 ;
-(void)invalidateContentBounds;
-(void)invalidateTileWithIndexPath:(id)arg0 kind:(id)arg1 ;


@end


#endif
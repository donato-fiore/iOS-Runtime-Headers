// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXTILINGLAYOUTINVALIDATIONCONTEXT_H
#define PXTILINGLAYOUTINVALIDATIONCONTEXT_H

@class NSMutableArray, NSMutableIndexSet, NSIndexSet, NSString;

#import <Foundation/Foundation.h>


@interface PXTilingLayoutInvalidationContext : NSObject {
    NSMutableArray *_invalidatedTileIdentifiers;
    NSMutableIndexSet *_invalidatedTileGroups;
}


@property (readonly, nonatomic) BOOL invalidatedAllTiles; // ivar: _invalidatedAllTiles
@property (readonly, nonatomic) BOOL invalidatedContentBounds; // ivar: _invalidatedContentBounds
@property (readonly, nonatomic) BOOL invalidatedScrollBounds; // ivar: _invalidatedScrollBounds
@property (readonly, nonatomic) BOOL invalidatedScrollInfo; // ivar: _invalidatedScrollInfo
@property (readonly, nonatomic) NSIndexSet *invalidatedTileGroups;
@property (readonly, nonatomic) BOOL invalidatedVisibleRect; // ivar: _invalidatedVisibleRect
@property (copy, nonatomic) NSString *tag; // ivar: _tag


-(id)description;
-(void)enumerateInvalidatedTileIdentifiersUsingBlock:(id)arg0 ;
-(void)invalidateAllTiles;
-(void)invalidateContentBounds;
-(void)invalidateEverything;
-(void)invalidateScrollBounds;
-(void)invalidateScrollInfo;
-(void)invalidateTileWithIdentifier:(struct PXTileIdentifier )arg0 ;
-(void)invalidateTilesInGroup:(NSUInteger)arg0 ;
-(void)invalidateVisibleRect;


@end


#endif
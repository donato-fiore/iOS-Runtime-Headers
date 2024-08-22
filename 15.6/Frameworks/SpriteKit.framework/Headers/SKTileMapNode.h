// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKTILEMAPNODE_H
#define SKTILEMAPNODE_H

@class NSDictionary, UIColor, NSString;
@protocol NSCopying, NSSecureCoding;


#import "SKNode.h"
#import "SKTileSet.h"
#import "SKShader.h"

@interface SKTileMapNode : SKNode <NSCopying, NSSecureCoding>

 {
    *void _skcTileMapNode;
    SKTileSet *_tileSet;
    CGSize _tileSize;
    ? _isoOrigin;
    ? _isoColumnVector;
    ? _isoRowVector;
    float _isoColumnWidth;
    float _isoRowHeight;
    float _isoHeightScalar;
    float _hexRadius;
    BOOL _enableAutomapping;
}


@property (nonatomic) CGPoint anchorPoint;
@property (copy, nonatomic) NSDictionary *attributeValues;
@property (nonatomic) NSInteger blendMode;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) CGFloat colorBlendFactor;
@property (nonatomic) BOOL enableAutomapping;
@property (nonatomic) unsigned int lightingBitMask;
@property (readonly, nonatomic) CGSize mapSize;
@property (nonatomic) NSUInteger numberOfColumns;
@property (nonatomic) NSUInteger numberOfRows;
@property (retain, nonatomic) SKShader *shader;
@property (retain, nonatomic) SKTileSet *tileSet;
@property (retain, nonatomic) NSString *tileSetName; // ivar: _tileSetName
@property (nonatomic) CGSize tileSize;


+(BOOL)supportsSecureCoding;
+(id)debugHierarchyPropertyDescriptions;
+(id)debugHierarchyValueForPropertyWithName:(id)arg0 onObject:(id)arg1 outOptions:(*id)arg2 outError:(*id)arg3 ;
+(id)tileMapNodeWithTileSet:(id)arg0 columns:(NSUInteger)arg1 rows:(NSUInteger)arg2 tileSize:(struct CGSize )arg3 ;
+(id)tileMapNodeWithTileSet:(id)arg0 columns:(NSUInteger)arg1 rows:(NSUInteger)arg2 tileSize:(struct CGSize )arg3 fillWithTileGroup:(id)arg4 ;
+(id)tileMapNodeWithTileSet:(id)arg0 columns:(NSUInteger)arg1 rows:(NSUInteger)arg2 tileSize:(struct CGSize )arg3 tileGroupLayout:(id)arg4 ;
-(*void)_makeBackingNode;
-(BOOL)isEqualToNode:(id)arg0 ;
-(BOOL)shouldUnarchiveTileSet;
-(CGFloat)alpha;
-(NSUInteger)tileColumnIndexFromPosition:(struct CGPoint )arg0 ;
-(NSUInteger)tileRowIndexFromPosition:(struct CGPoint )arg0 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createTileStampFromColumn:(NSUInteger)arg0 row:(NSUInteger)arg1 withWidth:(NSUInteger)arg2 height:(NSUInteger)arg3 addToTileSet:(BOOL)arg4 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTileSet:(id)arg0 columns:(NSUInteger)arg1 rows:(NSUInteger)arg2 tileSize:(struct CGSize )arg3 ;
-(id)initWithTileSet:(id)arg0 columns:(NSUInteger)arg1 rows:(NSUInteger)arg2 tileSize:(struct CGSize )arg3 fillWithTileGroup:(id)arg4 ;
-(id)initWithTileSet:(id)arg0 columns:(NSUInteger)arg1 rows:(NSUInteger)arg2 tileSize:(struct CGSize )arg3 tileGroupLayout:(id)arg4 ;
-(id)tileDefinitionAtColumn:(NSUInteger)arg0 row:(NSUInteger)arg1 ;
-(id)tileDefinitionForTileID:(unsigned int)arg0 ;
-(id)tileGroupAtColumn:(NSUInteger)arg0 row:(NSUInteger)arg1 ;
-(id)valueForAttributeNamed:(id)arg0 ;
-(struct CGPoint )centerOfTileAtColumn:(NSUInteger)arg0 row:(NSUInteger)arg1 ;
-(unsigned int)getTileIDWithTileGroup:(id)arg0 andTileDefinition:(id)arg1 ;
-(void)_didMakeBackingNode;
-(void)applyTileStamp:(id)arg0 inColumn:(NSInteger)arg1 row:(NSInteger)arg2 ;
-(void)calculateSize;
-(void)clearModifiedTileTracking;
-(void)commonInit;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fillArray:(*unsigned int)arg0 withTilesFromColumn:(NSUInteger)arg1 row:(NSUInteger)arg2 forWidth:(NSUInteger)arg3 height:(NSUInteger)arg4 ;
-(void)fillArrayWithTiles:(*unsigned int)arg0 ;
-(void)fillWithTileDefinition:(id)arg0 ;
-(void)fillWithTileGroup:(id)arg0 ;
-(void)forceRedraw;
-(void)getTileModifiedData:(*NSInteger)arg0 outMinRowModified:(*NSInteger)arg1 outMaxColumnModified:(*NSInteger)arg2 outmaxRowModified:(*NSInteger)arg3 ;
-(void)rebuildTileSprites;
-(void)removeAllTiles;
-(void)setAlpha:(CGFloat)arg0 ;
-(void)setColumns:(NSUInteger)arg0 andRows:(NSInteger)arg1 ;
-(void)setRawTiles:(*unsigned int)arg0 rows:(NSUInteger)arg1 columns:(NSUInteger)arg2 ;
-(void)setStartData:(NSUInteger)arg0 rows:(NSUInteger)arg1 tileSize:(struct CGSize )arg2 tileSet:(id)arg3 ;
-(void)setTileGroup:(id)arg0 andTileDefinition:(id)arg1 forColumn:(NSUInteger)arg2 row:(NSUInteger)arg3 ;
-(void)setTileGroup:(id)arg0 andTileDefinition:(id)arg1 forTileIndicies:(id)arg2 ;
-(void)setTileGroup:(id)arg0 forColumn:(NSUInteger)arg1 row:(NSUInteger)arg2 ;
-(void)setTileGroup:(id)arg0 forTileIndicies:(id)arg1 ;
-(void)setTileGroupWithoutUpdate:(id)arg0 forColumn:(NSUInteger)arg1 row:(NSUInteger)arg2 ;
-(void)setTileGroupWithoutUpdate:(id)arg0 tileDefinition:(id)arg1 forColumn:(NSUInteger)arg2 row:(NSUInteger)arg3 ;
-(void)setTilesFromArray:(*unsigned int)arg0 ;
-(void)setTilesFromArray:(*unsigned int)arg0 fromColumn:(NSUInteger)arg1 row:(NSUInteger)arg2 forWidth:(NSUInteger)arg3 height:(NSUInteger)arg4 ;
-(void)setValue:(id)arg0 forAttributeNamed:(id)arg1 ;
-(void)updateTileDefinitionWithoutAutomappingAtX:(NSUInteger)arg0 y:(NSUInteger)arg1 ;
-(void)updateTileGroupsAtX:(NSUInteger)arg0 y:(NSUInteger)arg1 ;
-(void)validateAllTiles;


@end


#endif
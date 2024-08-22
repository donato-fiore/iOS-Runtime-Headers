// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKTILESET_H
#define SKTILESET_H

@class NSMutableArray, NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SKTileGroup.h"

@interface SKTileSet : NSObject <NSCopying, NSSecureCoding>

 {
    NSMutableArray *_definitions;
    NSMutableArray *_groups;
    NSArray *_stamps;
    NSUInteger _type;
    CGSize _defaultTileSize;
    SKTileGroup *_defaultTileGroup;
}


@property (retain, nonatomic) SKTileGroup *defaultTileGroup;
@property (nonatomic) CGSize defaultTileSize;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSArray *stamps;
@property (readonly, nonatomic) NSArray *tileDefinitions;
@property (copy, nonatomic) NSArray *tileGroups;
@property (nonatomic) NSUInteger type;


+(BOOL)supportsSecureCoding;
+(id)findTileSetInBundleNamed:(id)arg0 ;
+(id)recursivePathsForResourcesOfType:(id)arg0 inDirectory:(id)arg1 ;
+(id)tileSetFromURL:(id)arg0 ;
+(id)tileSetNamed:(id)arg0 ;
+(id)tileSetWithTileGroups:(id)arg0 ;
+(id)tileSetWithTileGroups:(id)arg0 tileSetType:(NSUInteger)arg1 ;
+(void)clearTileSetTableCache;
-(BOOL)isEqualToNode:(id)arg0 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)findTileDefinitionForGroup:(id)arg0 withGroupAdjacency:(*NSUInteger)arg1 ;
-(id)findTileDefinitionsForGroup:(id)arg0 withGroupAdjacency:(*NSUInteger)arg1 ;
-(id)getCenterTileDefinitionForGroup:(id)arg0 withRequiredOutputGroupAdjacency:(*NSUInteger)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTileGroups:(id)arg0 ;
-(id)initWithTileGroups:(id)arg0 tileSetType:(NSUInteger)arg1 ;
-(void)calcDefaultTileSize;
-(void)commonInit;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)lookForMissingDefinitionsInGroups;
-(void)observeAllTileDefinitions;
-(void)observeTileDefinition:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeTileDefinitionObservers:(id)arg0 ;
-(void)setGroupParentPointers;
-(void)unobserveAllTileDefinitions;
-(void)updateTileDefinitionIDsInGroupRules;


@end


#endif
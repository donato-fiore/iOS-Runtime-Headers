// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKTILEGROUP_H
#define SKTILEGROUP_H

@class NSMutableArray, NSString, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SKTileSet.h"

@interface SKTileGroup : NSObject <NSCopying, NSSecureCoding>

 {
    NSMutableArray *_rules;
    NSUInteger _type;
}


@property (copy, nonatomic) NSString *name; // ivar: _name
@property (weak, nonatomic) SKTileSet *parentSet; // ivar: _parentSet
@property (copy, nonatomic) NSArray *rules;
@property (nonatomic) NSUInteger type;


+(BOOL)supportsSecureCoding;
+(id)emptyTileGroup;
+(id)tileGroupWithRules:(id)arg0 ;
+(id)tileGroupWithTileDefinition:(id)arg0 ;
-(BOOL)isEqualToNode:(id)arg0 ;
-(NSUInteger)findTileDefinitionIndexForAdjacencyData:(NSUInteger)arg0 tileSetType:(NSUInteger)arg1 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)findTileDefinitionIDsForAdjacencyData:(NSUInteger)arg0 tileSetType:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRules:(id)arg0 ;
-(id)initWithTileDefinition:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setRuleParentPointers;


@end


#endif
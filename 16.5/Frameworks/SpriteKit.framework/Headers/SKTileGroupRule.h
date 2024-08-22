// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKTILEGROUPRULE_H
#define SKTILEGROUPRULE_H

@class NSMutableArray, NSString, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SKTileGroup.h"

@interface SKTileGroupRule : NSObject <NSCopying, NSSecureCoding>

 {
    NSMutableArray *_tileDefinitions;
    NSMutableArray *_tileDefinitionIDs;
    unsigned char _adjacency;
}


@property (nonatomic) NSUInteger adjacency;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (weak, nonatomic) SKTileGroup *parentGroup; // ivar: _parentGroup
@property (readonly, nonatomic) NSArray *tileDefinitionIDs;
@property (copy, nonatomic) NSArray *tileDefinitions;


+(BOOL)supportsSecureCoding;
+(id)tileGroupRuleWithAdjacency:(NSUInteger)arg0 tileDefinitions:(id)arg1 ;
-(BOOL)isEqualToNode:(id)arg0 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAdjacency:(NSUInteger)arg0 tileDefinitions:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)calcTileDefinitionIDsWithTileSet:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setTileDefinitionParentPointers;


@end


#endif
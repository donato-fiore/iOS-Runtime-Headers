// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUTILETREE_H
#define PUTILETREE_H

@class NSMutableDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PUTileTree : NSObject <NSCopying>



@property (readonly, nonatomic) NSMutableDictionary *_objectsByTileIdentifier; // ivar: __objectsByTileIdentifier
@property (readonly, nonatomic) BOOL useUniqueLeafs; // ivar: _useUniqueLeafs


-(BOOL)containsObject:(id)arg0 withTileIdentifier:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initUsingUniqueLeafs:(BOOL)arg0 ;
-(id)initWithTileTree:(id)arg0 ;
-(id)objectWithTileIdentifier:(id)arg0 ;
-(void)addObject:(id)arg0 withTileIdentifier:(id)arg1 ;
-(void)enumerateObjectsUsingBlock:(id)arg0 ;
-(void)enumerateObjectsWithTileIdentifier:(id)arg0 usingBlock:(id)arg1 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg0 withTileIdentifier:(id)arg1 ;
-(void)removeObjectWithTileIdentifier:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKMENTIONENTITYNODE_H
#define CKMENTIONENTITYNODE_H

@class NSMutableDictionary, NSMutableSet, NSString;

#import <Foundation/Foundation.h>


@interface CKMentionEntityNode : NSObject

@property (retain, nonatomic) NSMutableDictionary *children; // ivar: _children
@property (retain, nonatomic) NSMutableSet *entities; // ivar: _entities
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSMutableSet *possibleEntities; // ivar: _possibleEntities


-(void)addChild:(id)arg0 ;
-(void)addEntity:(id)arg0 ;
-(void)addPossibleEntity:(id)arg0 ;


@end


#endif
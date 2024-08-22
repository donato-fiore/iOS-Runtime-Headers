// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKPARTICIPANTSTRIE_H
#define CKPARTICIPANTSTRIE_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface CKParticipantsTrie : NSObject

@property (retain, nonatomic) NSMutableArray *children; // ivar: _children
@property (retain, nonatomic) NSMutableArray *entities; // ivar: _entities
@property (retain, nonatomic) NSString *key; // ivar: _key


-(BOOL)_trieContainsEntity:(id)arg0 ;
-(BOOL)hasPrefix:(id)arg0 ;
-(id)_composedCharactersForString:(id)arg0 appendRootKey:(BOOL)arg1 ;
-(id)_lastNodeForString:(id)arg0 ;
-(id)entitiesForPrefix:(id)arg0 ;
-(id)init;
-(id)initWithKey:(id)arg0 ;
-(id)rawHandlesForParticipantName:(id)arg0 ;
-(void)_addEntity:(id)arg0 named:(id)arg1 forCharacters:(id)arg2 ;
-(void)addParticipantName:(id)arg0 entity:(id)arg1 ;
-(void)loadHandleEntityFromLastNode:(id)arg0 intoResult:(id)arg1 ;


@end


#endif
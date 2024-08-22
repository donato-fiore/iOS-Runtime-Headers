// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICMENTIONSPARTICIPANTNODE_H
#define ICMENTIONSPARTICIPANTNODE_H

@class NSMutableDictionary, NSString, NSMutableSet;

#import <Foundation/Foundation.h>


@interface ICMentionsParticipantNode : NSObject

@property (readonly, nonatomic) NSMutableDictionary *children; // ivar: _children
@property (nonatomic) BOOL isAll; // ivar: _isAll
@property (nonatomic) BOOL isPossibleAll; // ivar: _isPossibleAll
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) NSMutableSet *participants; // ivar: _participants
@property (readonly, nonatomic) NSMutableSet *possibleParticipants; // ivar: _possibleParticipants


-(void)addChild:(id)arg0 ;
-(void)addParticipant:(id)arg0 ;
-(void)addPossibleParticipant:(id)arg0 ;


@end


#endif
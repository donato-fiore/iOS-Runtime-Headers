// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMENTITY_H
#define BMENTITY_H

@protocol BMProtoBufWrapper;

#import <Foundation/Foundation.h>

#import "BMPersonEntity.h"
#import "BMTopicEntity.h"

@interface BMEntity : NSObject <BMProtoBufWrapper>



@property (readonly, nonatomic) BOOL isPersonType; // ivar: _isPersonType
@property (readonly, nonatomic) BOOL isTopicType; // ivar: _isTopicType
@property (readonly, nonatomic) BMPersonEntity *personEntity; // ivar: _personEntity
@property (readonly, nonatomic) BMTopicEntity *topicEntity; // ivar: _topicEntity


-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithIsPersonType:(BOOL)arg0 isTopicType:(BOOL)arg1 topicEntity:(id)arg2 personEntity:(id)arg3 ;
-(id)initWithPersonEntity:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithTopicEntity:(id)arg0 ;
-(id)proto;


@end


#endif
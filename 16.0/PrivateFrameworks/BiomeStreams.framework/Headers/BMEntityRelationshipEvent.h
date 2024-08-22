// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMENTITYRELATIONSHIPEVENT_H
#define BMENTITYRELATIONSHIPEVENT_H

@class NSDictionary, NSString;
@protocol BMStoreData, BMProtoBufWrapper;

#import <Foundation/Foundation.h>

#import "BMEntity.h"

@interface BMEntityRelationshipEvent : NSObject <BMStoreData, BMProtoBufWrapper>



@property (readonly, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (readonly, nonatomic) NSString *clientId; // ivar: _clientId
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *relationship; // ivar: _relationship
@property (readonly, nonatomic) BMEntity *sourceEntity; // ivar: _sourceEntity
@property (readonly) Class superclass;
@property (readonly, nonatomic) BMEntity *targetEntity; // ivar: _targetEntity


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)entityFromPBEntity:(id)arg0 ;
-(id)initWithClientId:(id)arg0 relationship:(id)arg1 sourceEntity:(id)arg2 targetEntity:(id)arg3 attributes:(id)arg4 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;
-(id)serialize;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SICSCHEMASICINVOCATIONSTARTED_H
#define SICSCHEMASICINVOCATIONSTARTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SICSchemaSICInvocationStarted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int callAppType; // ivar: _callAppType
@property (nonatomic) int callState; // ivar: _callState
@property (nonatomic) int callType; // ivar: _callType
@property (nonatomic) BOOL hasCallAppType;
@property (nonatomic) BOOL hasCallState;
@property (nonatomic) BOOL hasCallType;
@property (nonatomic) BOOL hasIsMuted;
@property (nonatomic) BOOL hasParticipantCountBucket;
@property (nonatomic) BOOL isMuted; // ivar: _isMuted
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int participantCountBucket; // ivar: _participantCountBucket


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCallAppType;
-(void)deleteCallState;
-(void)deleteCallType;
-(void)deleteIsMuted;
-(void)deleteParticipantCountBucket;
-(void)writeTo:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASRSCHEMAASRFINALAUDIOPACKETCONTAININGSPEECHRECEIVED_H
#define ASRSCHEMAASRFINALAUDIOPACKETCONTAININGSPEECHRECEIVED_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface ASRSchemaASRFinalAudioPacketContainingSpeechReceived : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL exists; // ivar: _exists
@property (nonatomic) BOOL hasExists;
@property (nonatomic) BOOL hasLoggableSharedUserId; // ivar: _hasLoggableSharedUserId
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *loggableSharedUserId; // ivar: _loggableSharedUserId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteExists;
-(void)deleteLoggableSharedUserId;
-(void)writeTo:(id)arg0 ;


@end


#endif
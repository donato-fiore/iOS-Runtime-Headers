// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SISCHEMAINTERCOMMESSAGERECORDED_H
#define SISCHEMAINTERCOMMESSAGERECORDED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaIntercomMessageRecorded : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL disambiguationRequired; // ivar: _disambiguationRequired
@property (nonatomic) NSInteger durationInMs; // ivar: _durationInMs
@property (nonatomic) BOOL hasDisambiguationRequired;
@property (nonatomic) BOOL hasDurationInMs;
@property (nonatomic) BOOL hasIntercomTarget;
@property (nonatomic) BOOL hasIsReply;
@property (nonatomic) int intercomTarget; // ivar: _intercomTarget
@property (nonatomic) BOOL isReply; // ivar: _isReply
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteDisambiguationRequired;
-(void)deleteDurationInMs;
-(void)deleteIntercomTarget;
-(void)deleteIsReply;
-(void)writeTo:(id)arg0 ;


@end


#endif
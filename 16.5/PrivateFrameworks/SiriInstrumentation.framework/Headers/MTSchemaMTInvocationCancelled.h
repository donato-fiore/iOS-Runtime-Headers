// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSCHEMAMTINVOCATIONCANCELLED_H
#define MTSCHEMAMTINVOCATIONCANCELLED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface MTSchemaMTInvocationCancelled : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL exists; // ivar: _exists
@property (nonatomic) BOOL hasExists;
@property (nonatomic) BOOL hasQssSessionId; // ivar: _hasQssSessionId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *qssSessionId; // ivar: _qssSessionId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteExists;
-(void)deleteQssSessionId;
-(void)writeTo:(id)arg0 ;


@end


#endif
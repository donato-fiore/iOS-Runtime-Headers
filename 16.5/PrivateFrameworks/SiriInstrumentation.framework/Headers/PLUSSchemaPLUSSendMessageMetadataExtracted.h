// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLUSSCHEMAPLUSSENDMESSAGEMETADATAEXTRACTED_H
#define PLUSSCHEMAPLUSSENDMESSAGEMETADATAEXTRACTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface PLUSSchemaPLUSSendMessageMetadataExtracted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasInitialSendMessageRequestHasPayload;
@property (nonatomic) BOOL hasInitialSendMessageRequestNumberOfContacts;
@property (nonatomic) BOOL hasNumberOfTimesMessageContactChanged;
@property (nonatomic) BOOL hasNumberOfTimesMessagePayloadChanged;
@property (nonatomic) BOOL hasOriginalPlusId; // ivar: _hasOriginalPlusId
@property (nonatomic) BOOL initialSendMessageRequestHasPayload; // ivar: _initialSendMessageRequestHasPayload
@property (nonatomic) unsigned int initialSendMessageRequestNumberOfContacts; // ivar: _initialSendMessageRequestNumberOfContacts
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int numberOfTimesMessageContactChanged; // ivar: _numberOfTimesMessageContactChanged
@property (nonatomic) unsigned int numberOfTimesMessagePayloadChanged; // ivar: _numberOfTimesMessagePayloadChanged
@property (retain, nonatomic) SISchemaUUID *originalPlusId; // ivar: _originalPlusId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteInitialSendMessageRequestHasPayload;
-(void)deleteInitialSendMessageRequestNumberOfContacts;
-(void)deleteNumberOfTimesMessageContactChanged;
-(void)deleteNumberOfTimesMessagePayloadChanged;
-(void)deleteOriginalPlusId;
-(void)writeTo:(id)arg0 ;


@end


#endif
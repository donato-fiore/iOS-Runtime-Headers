// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TTSSCHEMATTSREQUESTRECEIVED_H
#define TTSSCHEMATTSREQUESTRECEIVED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"
#import "TTSSchemaTTSVoiceContext.h"

@interface TTSSchemaTTSRequestReceived : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasInputTextLength;
@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (nonatomic) BOOL hasRequestedVoiceContext; // ivar: _hasRequestedVoiceContext
@property (nonatomic) int inputTextLength; // ivar: _inputTextLength
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId
@property (retain, nonatomic) TTSSchemaTTSVoiceContext *requestedVoiceContext; // ivar: _requestedVoiceContext


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteInputTextLength;
-(void)deleteLinkId;
-(void)deleteRequestedVoiceContext;
-(void)writeTo:(id)arg0 ;


@end


#endif
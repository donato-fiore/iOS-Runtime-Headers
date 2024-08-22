// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLXSCHEMANLXLEGACYNLCONTEXT_H
#define NLXSCHEMANLXLEGACYNLCONTEXT_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface NLXSchemaNLXLegacyNLContext : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasIsDictationPrompt;
@property (nonatomic) BOOL hasIsListenAfterSpeaking;
@property (nonatomic) BOOL hasIsStrictPrompt;
@property (nonatomic) BOOL hasLegacyContextSource;
@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (nonatomic) BOOL hasPreviousDomainName; // ivar: _hasPreviousDomainName
@property (nonatomic) BOOL isDictationPrompt; // ivar: _isDictationPrompt
@property (nonatomic) BOOL isListenAfterSpeaking; // ivar: _isListenAfterSpeaking
@property (nonatomic) BOOL isStrictPrompt; // ivar: _isStrictPrompt
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int legacyContextSource; // ivar: _legacyContextSource
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId
@property (copy, nonatomic) NSString *previousDomainName; // ivar: _previousDomainName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteIsDictationPrompt;
-(void)deleteIsListenAfterSpeaking;
-(void)deleteIsStrictPrompt;
-(void)deleteLegacyContextSource;
-(void)deleteLinkId;
-(void)deletePreviousDomainName;
-(void)writeTo:(id)arg0 ;


@end


#endif
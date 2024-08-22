// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef POMMESSCHEMAPOMMESPEGASUSREQUESTARGUMENTS_H
#define POMMESSCHEMAPOMMESPEGASUSREQUESTARGUMENTS_H

@class NSString, NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "POMMESSchemaPOMMESClientConversationMetadata.h"
#import "POMMESSchemaPOMMESPegasusQueryMetadata.h"
#import "POMMESSchemaPOMMESSiriPegasusMetadata.h"

@interface POMMESSchemaPOMMESPegasusRequestArguments : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) POMMESSchemaPOMMESClientConversationMetadata *clientConversationMetadata; // ivar: _clientConversationMetadata
@property (nonatomic) unsigned int conversationContextBytesLength; // ivar: _conversationContextBytesLength
@property (copy, nonatomic) NSString *featureFlag; // ivar: _featureFlag
@property (nonatomic) BOOL hasClientConversationMetadata; // ivar: _hasClientConversationMetadata
@property (nonatomic) BOOL hasConversationContextBytesLength;
@property (nonatomic) BOOL hasFeatureFlag; // ivar: _hasFeatureFlag
@property (nonatomic) BOOL hasIsDataOnlyRequest;
@property (nonatomic) BOOL hasQueryMetadata; // ivar: _hasQueryMetadata
@property (nonatomic) BOOL hasSiriPegasusMetadata; // ivar: _hasSiriPegasusMetadata
@property (nonatomic) BOOL isDataOnlyRequest; // ivar: _isDataOnlyRequest
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *queries; // ivar: _queries
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusQueryMetadata *queryMetadata; // ivar: _queryMetadata
@property (retain, nonatomic) POMMESSchemaPOMMESSiriPegasusMetadata *siriPegasusMetadata; // ivar: _siriPegasusMetadata


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)queriesAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addQueries:(id)arg0 ;
-(void)clearQueries;
-(void)deleteClientConversationMetadata;
-(void)deleteConversationContextBytesLength;
-(void)deleteFeatureFlag;
-(void)deleteIsDataOnlyRequest;
-(void)deleteQueries;
-(void)deleteQueryMetadata;
-(void)deleteSiriPegasusMetadata;
-(void)writeTo:(id)arg0 ;


@end


#endif
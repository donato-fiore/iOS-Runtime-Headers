// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLXSCHEMANLXCLIENTEVENTMETADATA_H
#define NLXSCHEMANLXCLIENTEVENTMETADATA_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface NLXSchemaNLXClientEventMetadata : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int componentInvocationSource; // ivar: _componentInvocationSource
@property (nonatomic) BOOL hasComponentInvocationSource;
@property (nonatomic) BOOL hasNlId; // ivar: _hasNlId
@property (nonatomic) BOOL hasRequestId; // ivar: _hasRequestId
@property (nonatomic) BOOL hasResultCandidateId; // ivar: _hasResultCandidateId
@property (nonatomic) BOOL hasTrpId; // ivar: _hasTrpId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *nlId; // ivar: _nlId
@property (retain, nonatomic) SISchemaUUID *requestId; // ivar: _requestId
@property (copy, nonatomic) NSString *resultCandidateId; // ivar: _resultCandidateId
@property (retain, nonatomic) SISchemaUUID *trpId; // ivar: _trpId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteComponentInvocationSource;
-(void)deleteNlId;
-(void)deleteRequestId;
-(void)deleteResultCandidateId;
-(void)deleteTrpId;
-(void)writeTo:(id)arg0 ;


@end


#endif
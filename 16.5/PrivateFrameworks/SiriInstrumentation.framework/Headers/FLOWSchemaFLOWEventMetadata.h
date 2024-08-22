// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLOWSCHEMAFLOWEVENTMETADATA_H
#define FLOWSCHEMAFLOWEVENTMETADATA_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"
#import "SISchemaVersion.h"

@interface FLOWSchemaFLOWEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *flowId; // ivar: _flowId
@property (nonatomic) BOOL hasFlowId; // ivar: _hasFlowId
@property (nonatomic) BOOL hasRequestId; // ivar: _hasRequestId
@property (nonatomic) BOOL hasResultCandidateId; // ivar: _hasResultCandidateId
@property (nonatomic) BOOL hasTaskId; // ivar: _hasTaskId
@property (nonatomic) BOOL hasTrpId; // ivar: _hasTrpId
@property (nonatomic) BOOL hasVersion; // ivar: _hasVersion
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *requestId; // ivar: _requestId
@property (copy, nonatomic) NSString *resultCandidateId; // ivar: _resultCandidateId
@property (retain, nonatomic) SISchemaUUID *taskId; // ivar: _taskId
@property (retain, nonatomic) SISchemaUUID *trpId; // ivar: _trpId
@property (retain, nonatomic) SISchemaVersion *version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteFlowId;
-(void)deleteRequestId;
-(void)deleteResultCandidateId;
-(void)deleteTaskId;
-(void)deleteTrpId;
-(void)deleteVersion;
-(void)writeTo:(id)arg0 ;


@end


#endif
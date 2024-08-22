// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ORCHSCHEMAORCHREQUESTSTARTED_H
#define ORCHSCHEMAORCHREQUESTSTARTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface ORCHSchemaORCHRequestStarted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasOrchestratorSessionId; // ivar: _hasOrchestratorSessionId
@property (nonatomic) BOOL hasRequestType;
@property (nonatomic) BOOL hasSiriAsrMode;
@property (nonatomic) BOOL hasSiriNlMode;
@property (nonatomic) BOOL hasSiriUODEnabled;
@property (nonatomic) BOOL hasSiriUODMode;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *orchestratorSessionId; // ivar: _orchestratorSessionId
@property (nonatomic) int requestType; // ivar: _requestType
@property (nonatomic) int siriAsrMode; // ivar: _siriAsrMode
@property (nonatomic) int siriNlMode; // ivar: _siriNlMode
@property (nonatomic) BOOL siriUODEnabled; // ivar: _siriUODEnabled
@property (nonatomic) int siriUODMode; // ivar: _siriUODMode


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteOrchestratorSessionId;
-(void)deleteRequestType;
-(void)deleteSiriAsrMode;
-(void)deleteSiriNlMode;
-(void)deleteSiriUODEnabled;
-(void)deleteSiriUODMode;
-(void)writeTo:(id)arg0 ;


@end


#endif
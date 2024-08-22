// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
@property (nonatomic) BOOL hasSiriUODEnabled;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *orchestratorSessionId; // ivar: _orchestratorSessionId
@property (nonatomic) int requestType; // ivar: _requestType
@property (nonatomic) BOOL siriUODEnabled; // ivar: _siriUODEnabled


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
-(void)deleteSiriUODEnabled;
-(void)writeTo:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POMMESSCHEMAPOMMESPEGASUSREQUESTENDED_H
#define POMMESSCHEMAPOMMESPEGASUSREQUESTENDED_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"
#import "POMMESSchemaPOMMESPegasusResponseClientDrivenContext.h"
#import "POMMESSchemaPOMMESPegasusRequestKfedLatency.h"
#import "POMMESSchemaPOMMESPegasusRequestArguments.h"
#import "POMMESSchemaPOMMESPegasusResponseServerDrivenContext.h"

@interface POMMESSchemaPOMMESPegasusRequestEnded : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) POMMESSchemaPOMMESPegasusResponseClientDrivenContext *clientDriven; // ivar: _clientDriven
@property (nonatomic) CGFloat confidenceScore; // ivar: _confidenceScore
@property (nonatomic) BOOL hasClientDriven; // ivar: _hasClientDriven
@property (nonatomic) BOOL hasConfidenceScore;
@property (nonatomic) BOOL hasIsRewrittenUtteranceUsed;
@property (nonatomic) BOOL hasKfedLatency; // ivar: _hasKfedLatency
@property (nonatomic) BOOL hasPayloadSizeInKB;
@property (nonatomic) BOOL hasPegasusDomain; // ivar: _hasPegasusDomain
@property (nonatomic) BOOL hasRequestArguments; // ivar: _hasRequestArguments
@property (nonatomic) BOOL hasServerDriven; // ivar: _hasServerDriven
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL isRewrittenUtteranceUsed; // ivar: _isRewrittenUtteranceUsed
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusRequestKfedLatency *kfedLatency; // ivar: _kfedLatency
@property (nonatomic) CGFloat payloadSizeInKB; // ivar: _payloadSizeInKB
@property (copy, nonatomic) NSString *pegasusDomain; // ivar: _pegasusDomain
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusRequestArguments *requestArguments; // ivar: _requestArguments
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusResponseServerDrivenContext *serverDriven; // ivar: _serverDriven
@property (nonatomic) int status; // ivar: _status
@property (readonly, nonatomic) NSUInteger whichContextevent; // ivar: _whichContextevent


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteClientDriven;
-(void)deleteConfidenceScore;
-(void)deleteIsRewrittenUtteranceUsed;
-(void)deleteKfedLatency;
-(void)deletePayloadSizeInKB;
-(void)deletePegasusDomain;
-(void)deleteRequestArguments;
-(void)deleteServerDriven;
-(void)deleteStatus;
-(void)writeTo:(id)arg0 ;


@end


#endif
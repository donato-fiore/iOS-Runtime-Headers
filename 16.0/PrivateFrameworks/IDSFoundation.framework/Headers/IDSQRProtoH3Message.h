// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSQRPROTOH3MESSAGE_H
#define IDSQRPROTOH3MESSAGE_H

@class PBCodable;
@protocol NSCopying;


#import "IDSQRProtoAllocBindRequest.h"
#import "IDSQRProtoAllocBindResponse.h"
#import "IDSQRProtoDiagnosticIndication.h"
#import "IDSQRProtoErrorIndication.h"
#import "IDSQRProtoGetMaterialRequest.h"
#import "IDSQRProtoGetMaterialResponse.h"
#import "IDSQRProtoGoAwayIndication.h"
#import "IDSQRProtoInfoRequest.h"
#import "IDSQRProtoInfoResponse.h"
#import "IDSQRProtoParticipantUpdateIndication.h"
#import "IDSQRProtoParticipantUpdateRequest.h"
#import "IDSQRProtoParticipantUpdateResponse.h"
#import "IDSQRProtoPluginControlIndication.h"
#import "IDSQRProtoPluginControlRequest.h"
#import "IDSQRProtoPluginControlResponse.h"
#import "IDSQRProtoPutMaterialIndication.h"
#import "IDSQRProtoPutMaterialRequest.h"
#import "IDSQRProtoPutMaterialResponse.h"
#import "IDSQRProtoReallocateIndication.h"
#import "IDSQRProtoSessionInfoIndication.h"
#import "IDSQRProtoSessionInfoRequest.h"
#import "IDSQRProtoSessionInfoResponse.h"
#import "IDSQRProtoStatsRequest.h"
#import "IDSQRProtoStatsResponse.h"
#import "IDSQRProtoTestRequest.h"
#import "IDSQRProtoTestResponse.h"
#import "IDSQRProtoUnAllocBindRequest.h"
#import "IDSQRProtoUnAllocBindResponse.h"

@interface IDSQRProtoH3Message : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) IDSQRProtoAllocBindRequest *allocbindRequest; // ivar: _allocbindRequest
@property (retain, nonatomic) IDSQRProtoAllocBindResponse *allocbindResponse; // ivar: _allocbindResponse
@property (retain, nonatomic) IDSQRProtoDiagnosticIndication *diagnosticIndication; // ivar: _diagnosticIndication
@property (retain, nonatomic) IDSQRProtoErrorIndication *errorIndication; // ivar: _errorIndication
@property (retain, nonatomic) IDSQRProtoGetMaterialRequest *getmaterialRequest; // ivar: _getmaterialRequest
@property (retain, nonatomic) IDSQRProtoGetMaterialResponse *getmaterialResponse; // ivar: _getmaterialResponse
@property (retain, nonatomic) IDSQRProtoGoAwayIndication *goawayIndication; // ivar: _goawayIndication
@property (readonly, nonatomic) BOOL hasAllocbindRequest;
@property (readonly, nonatomic) BOOL hasAllocbindResponse;
@property (readonly, nonatomic) BOOL hasDiagnosticIndication;
@property (readonly, nonatomic) BOOL hasErrorIndication;
@property (readonly, nonatomic) BOOL hasGetmaterialRequest;
@property (readonly, nonatomic) BOOL hasGetmaterialResponse;
@property (readonly, nonatomic) BOOL hasGoawayIndication;
@property (readonly, nonatomic) BOOL hasInfoRequest;
@property (readonly, nonatomic) BOOL hasInfoResponse;
@property (nonatomic) BOOL hasInnerMessage;
@property (readonly, nonatomic) BOOL hasParticipantupdateIndication;
@property (readonly, nonatomic) BOOL hasParticipantupdateRequest;
@property (readonly, nonatomic) BOOL hasParticipantupdateResponse;
@property (readonly, nonatomic) BOOL hasPlugincontrolIndication;
@property (readonly, nonatomic) BOOL hasPlugincontrolRequest;
@property (readonly, nonatomic) BOOL hasPlugincontrolResponse;
@property (readonly, nonatomic) BOOL hasPutmaterialIndication;
@property (readonly, nonatomic) BOOL hasPutmaterialRequest;
@property (readonly, nonatomic) BOOL hasPutmaterialResponse;
@property (readonly, nonatomic) BOOL hasReallocateIndication;
@property (readonly, nonatomic) BOOL hasSessioninfoIndication;
@property (readonly, nonatomic) BOOL hasSessioninfoRequest;
@property (readonly, nonatomic) BOOL hasSessioninfoResponse;
@property (readonly, nonatomic) BOOL hasStatsRequest;
@property (readonly, nonatomic) BOOL hasStatsResponse;
@property (readonly, nonatomic) BOOL hasTestRequest;
@property (readonly, nonatomic) BOOL hasTestResponse;
@property (readonly, nonatomic) BOOL hasUnallocbindRequest;
@property (readonly, nonatomic) BOOL hasUnallocbindResponse;
@property (retain, nonatomic) IDSQRProtoInfoRequest *infoRequest; // ivar: _infoRequest
@property (retain, nonatomic) IDSQRProtoInfoResponse *infoResponse; // ivar: _infoResponse
@property (nonatomic) int innerMessage; // ivar: _innerMessage
@property (retain, nonatomic) IDSQRProtoParticipantUpdateIndication *participantupdateIndication; // ivar: _participantupdateIndication
@property (retain, nonatomic) IDSQRProtoParticipantUpdateRequest *participantupdateRequest; // ivar: _participantupdateRequest
@property (retain, nonatomic) IDSQRProtoParticipantUpdateResponse *participantupdateResponse; // ivar: _participantupdateResponse
@property (retain, nonatomic) IDSQRProtoPluginControlIndication *plugincontrolIndication; // ivar: _plugincontrolIndication
@property (retain, nonatomic) IDSQRProtoPluginControlRequest *plugincontrolRequest; // ivar: _plugincontrolRequest
@property (retain, nonatomic) IDSQRProtoPluginControlResponse *plugincontrolResponse; // ivar: _plugincontrolResponse
@property (retain, nonatomic) IDSQRProtoPutMaterialIndication *putmaterialIndication; // ivar: _putmaterialIndication
@property (retain, nonatomic) IDSQRProtoPutMaterialRequest *putmaterialRequest; // ivar: _putmaterialRequest
@property (retain, nonatomic) IDSQRProtoPutMaterialResponse *putmaterialResponse; // ivar: _putmaterialResponse
@property (retain, nonatomic) IDSQRProtoReallocateIndication *reallocateIndication; // ivar: _reallocateIndication
@property (retain, nonatomic) IDSQRProtoSessionInfoIndication *sessioninfoIndication; // ivar: _sessioninfoIndication
@property (retain, nonatomic) IDSQRProtoSessionInfoRequest *sessioninfoRequest; // ivar: _sessioninfoRequest
@property (retain, nonatomic) IDSQRProtoSessionInfoResponse *sessioninfoResponse; // ivar: _sessioninfoResponse
@property (retain, nonatomic) IDSQRProtoStatsRequest *statsRequest; // ivar: _statsRequest
@property (retain, nonatomic) IDSQRProtoStatsResponse *statsResponse; // ivar: _statsResponse
@property (retain, nonatomic) IDSQRProtoTestRequest *testRequest; // ivar: _testRequest
@property (retain, nonatomic) IDSQRProtoTestResponse *testResponse; // ivar: _testResponse
@property (retain, nonatomic) IDSQRProtoUnAllocBindRequest *unallocbindRequest; // ivar: _unallocbindRequest
@property (retain, nonatomic) IDSQRProtoUnAllocBindResponse *unallocbindResponse; // ivar: _unallocbindResponse


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)innerMessageAsString:(int)arg0 ;
-(int)StringAsInnerMessage:(id)arg0 ;
-(void)clearOneofValuesForInnerMessage;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
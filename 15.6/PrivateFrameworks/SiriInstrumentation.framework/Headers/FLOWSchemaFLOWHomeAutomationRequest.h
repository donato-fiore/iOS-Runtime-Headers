// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FLOWSCHEMAFLOWHOMEAUTOMATIONREQUEST_H
#define FLOWSCHEMAFLOWHOMEAUTOMATIONREQUEST_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"
#import "FLOWSchemaFLOWHomeAutomationRequestMetadata.h"

@interface FLOWSchemaFLOWHomeAutomationRequest : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasHomeAutomationRequestDuration;
@property (nonatomic) BOOL hasHomeAutomationRequestId; // ivar: _hasHomeAutomationRequestId
@property (nonatomic) BOOL hasHomeAutomationRequestMetadata; // ivar: _hasHomeAutomationRequestMetadata
@property (nonatomic) BOOL hasHomeAutomationRequestOutcome;
@property (nonatomic) BOOL hasHomeAutomationRequestType;
@property (nonatomic) unsigned int homeAutomationRequestDuration; // ivar: _homeAutomationRequestDuration
@property (copy, nonatomic) NSArray *homeAutomationRequestErrorReasons; // ivar: _homeAutomationRequestErrorReasons
@property (retain, nonatomic) SISchemaUUID *homeAutomationRequestId; // ivar: _homeAutomationRequestId
@property (retain, nonatomic) FLOWSchemaFLOWHomeAutomationRequestMetadata *homeAutomationRequestMetadata; // ivar: _homeAutomationRequestMetadata
@property (nonatomic) int homeAutomationRequestOutcome; // ivar: _homeAutomationRequestOutcome
@property (nonatomic) int homeAutomationRequestType; // ivar: _homeAutomationRequestType
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)homeAutomationRequestErrorReasonCount;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)homeAutomationRequestErrorReasonAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addHomeAutomationRequestErrorReason:(id)arg0 ;
-(void)clearHomeAutomationRequestErrorReason;
-(void)deleteHomeAutomationRequestDuration;
-(void)deleteHomeAutomationRequestErrorReason;
-(void)deleteHomeAutomationRequestId;
-(void)deleteHomeAutomationRequestMetadata;
-(void)deleteHomeAutomationRequestOutcome;
-(void)deleteHomeAutomationRequestType;
-(void)writeTo:(id)arg0 ;


@end


#endif
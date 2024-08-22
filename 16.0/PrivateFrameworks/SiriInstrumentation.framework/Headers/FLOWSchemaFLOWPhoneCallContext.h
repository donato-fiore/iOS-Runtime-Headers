// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLOWSCHEMAFLOWPHONECALLCONTEXT_H
#define FLOWSCHEMAFLOWPHONECALLCONTEXT_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "FLOWSchemaFLOWPhoneCallEmergencyContext.h"

@interface FLOWSchemaFLOWPhoneCallContext : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) FLOWSchemaFLOWPhoneCallEmergencyContext *emergencyContext; // ivar: _emergencyContext
@property (nonatomic) BOOL hasEmergencyContext; // ivar: _hasEmergencyContext
@property (nonatomic) BOOL hasIsThirdPartyFaceTime;
@property (nonatomic) BOOL hasPhoneCallAppType;
@property (nonatomic) BOOL hasPhoneCallType;
@property (nonatomic) BOOL hasSearchCallHistoryIntent;
@property (nonatomic) BOOL isThirdPartyFaceTime; // ivar: _isThirdPartyFaceTime
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *personTypes; // ivar: _personTypes
@property (nonatomic) int phoneCallAppType; // ivar: _phoneCallAppType
@property (nonatomic) int phoneCallType; // ivar: _phoneCallType
@property (copy, nonatomic) NSArray *recipientTypes; // ivar: _recipientTypes
@property (nonatomic) int searchCallHistoryIntent; // ivar: _searchCallHistoryIntent


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)personTypeCount;
-(NSUInteger)recipientTypeCount;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(int)personTypeAtIndex:(NSUInteger)arg0 ;
-(int)recipientTypeAtIndex:(NSUInteger)arg0 ;
-(void)addPersonType:(int)arg0 ;
-(void)addRecipientType:(int)arg0 ;
-(void)clearPersonType;
-(void)clearRecipientType;
-(void)deleteEmergencyContext;
-(void)deleteIsThirdPartyFaceTime;
-(void)deletePersonType;
-(void)deletePhoneCallAppType;
-(void)deletePhoneCallType;
-(void)deleteRecipientType;
-(void)deleteSearchCallHistoryIntent;
-(void)writeTo:(id)arg0 ;


@end


#endif
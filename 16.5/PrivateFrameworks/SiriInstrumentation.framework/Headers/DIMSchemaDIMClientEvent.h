// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIMSCHEMADIMCLIENTEVENT_H
#define DIMSCHEMADIMCLIENTEVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "DIMSchemaDIMDeviceFixedContext.h"
#import "SISchemaInstrumentationMessage.h"
#import "DIMSchemaDIMLocaleNotRecognized.h"
#import "DIMSchemaDIMSiriAccountInformation.h"

@interface DIMSchemaDIMClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (retain, nonatomic) DIMSchemaDIMDeviceFixedContext *deviceFixedContext; // ivar: _deviceFixedContext
@property (nonatomic) BOOL hasDeviceFixedContext; // ivar: _hasDeviceFixedContext
@property (nonatomic) BOOL hasLocaleNotRecognized; // ivar: _hasLocaleNotRecognized
@property (nonatomic) BOOL hasSiriAccountInformation; // ivar: _hasSiriAccountInformation
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) DIMSchemaDIMLocaleNotRecognized *localeNotRecognized; // ivar: _localeNotRecognized
@property (retain, nonatomic) DIMSchemaDIMSiriAccountInformation *siriAccountInformation; // ivar: _siriAccountInformation
@property (readonly, nonatomic) NSUInteger whichEvent_Type; // ivar: _whichEvent_Type


+(int)joinability;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)qualifiedMessageName;
-(id)suppressMessageUnderConditions;
-(int)getAnyEventType;
-(void)deleteDeviceFixedContext;
-(void)deleteLocaleNotRecognized;
-(void)deleteSiriAccountInformation;
-(void)writeTo:(id)arg0 ;


@end


#endif
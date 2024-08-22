// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DIMSCHEMADIMSIRIACCOUNTINFORMATION_H
#define DIMSCHEMADIMSIRIACCOUNTINFORMATION_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface DIMSchemaDIMSiriAccountInformation : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasSiriDeviceId; // ivar: _hasSiriDeviceId
@property (nonatomic) BOOL hasSiriSpeechId; // ivar: _hasSiriSpeechId
@property (nonatomic) BOOL hasSiriUserId; // ivar: _hasSiriUserId
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *siriDeviceId; // ivar: _siriDeviceId
@property (copy, nonatomic) NSString *siriSpeechId; // ivar: _siriSpeechId
@property (copy, nonatomic) NSString *siriUserId; // ivar: _siriUserId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteSiriDeviceId;
-(void)deleteSiriSpeechId;
-(void)deleteSiriUserId;
-(void)writeTo:(id)arg0 ;


@end


#endif
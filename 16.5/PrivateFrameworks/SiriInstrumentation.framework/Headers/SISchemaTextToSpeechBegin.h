// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SISCHEMATEXTTOSPEECHBEGIN_H
#define SISCHEMATEXTTOSPEECHBEGIN_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaHardwareInterfaceIdentifier.h"

@interface SISchemaTextToSpeechBegin : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *aceID; // ivar: _aceID
@property (nonatomic) int audioOutputRoute; // ivar: _audioOutputRoute
@property (retain, nonatomic) SISchemaHardwareInterfaceIdentifier *hardwareInterfaceVendorID; // ivar: _hardwareInterfaceVendorID
@property (nonatomic) BOOL hasAceID; // ivar: _hasAceID
@property (nonatomic) BOOL hasAudioOutputRoute;
@property (nonatomic) BOOL hasHardwareInterfaceVendorID; // ivar: _hasHardwareInterfaceVendorID
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAceID;
-(void)deleteAudioOutputRoute;
-(void)deleteHardwareInterfaceVendorID;
-(void)writeTo:(id)arg0 ;


@end


#endif
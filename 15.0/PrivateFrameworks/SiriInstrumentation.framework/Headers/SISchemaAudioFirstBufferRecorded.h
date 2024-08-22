// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SISCHEMAAUDIOFIRSTBUFFERRECORDED_H
#define SISCHEMAAUDIOFIRSTBUFFERRECORDED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaHardwareInterfaceIdentifier.h"

@interface SISchemaAudioFirstBufferRecorded : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int audioInputRoute; // ivar: _audioInputRoute
@property (retain, nonatomic) SISchemaHardwareInterfaceIdentifier *hardwareInterfaceVendorID; // ivar: _hardwareInterfaceVendorID
@property (nonatomic) BOOL hasAudioInputRoute;
@property (nonatomic) BOOL hasHardwareInterfaceVendorID; // ivar: _hasHardwareInterfaceVendorID
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
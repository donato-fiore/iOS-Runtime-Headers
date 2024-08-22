// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MHSCHEMAMHASSISTANTDAEMONAUDIORECORDINGFIRSTBUFFERSTART_H
#define MHSCHEMAMHASSISTANTDAEMONAUDIORECORDINGFIRSTBUFFERSTART_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface MHSchemaMHAssistantDaemonAudioRecordingFirstBufferStart : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *audioInterfaceProductName; // ivar: _audioInterfaceProductName
@property (copy, nonatomic) NSString *audioInterfaceVendorId; // ivar: _audioInterfaceVendorId
@property (nonatomic) NSUInteger firstBufferStartTimeOffsetInNs; // ivar: _firstBufferStartTimeOffsetInNs
@property (nonatomic) BOOL hasAudioInterfaceProductName; // ivar: _hasAudioInterfaceProductName
@property (nonatomic) BOOL hasAudioInterfaceVendorId; // ivar: _hasAudioInterfaceVendorId
@property (nonatomic) BOOL hasFirstBufferStartTimeOffsetInNs;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAudioInterfaceProductName;
-(void)deleteAudioInterfaceVendorId;
-(void)deleteFirstBufferStartTimeOffsetInNs;
-(void)writeTo:(id)arg0 ;


@end


#endif
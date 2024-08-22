// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MHSCHEMAMHASSISTANTDAEMONAUDIORECORDINGFAILED_H
#define MHSCHEMAMHASSISTANTDAEMONAUDIORECORDINGFAILED_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface MHSchemaMHAssistantDaemonAudioRecordingFailed : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *audioInterfaceProductId; // ivar: _audioInterfaceProductId
@property (copy, nonatomic) NSString *audioInterfaceVendorId; // ivar: _audioInterfaceVendorId
@property (nonatomic) BOOL hasAudioInterfaceProductId; // ivar: _hasAudioInterfaceProductId
@property (nonatomic) BOOL hasAudioInterfaceVendorId; // ivar: _hasAudioInterfaceVendorId
@property (nonatomic) BOOL hasReason;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int reason; // ivar: _reason


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAudioInterfaceProductId;
-(void)deleteAudioInterfaceVendorId;
-(void)deleteReason;
-(void)writeTo:(id)arg0 ;


@end


#endif
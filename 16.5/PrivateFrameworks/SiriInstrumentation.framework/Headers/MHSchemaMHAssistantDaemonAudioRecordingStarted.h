// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MHSCHEMAMHASSISTANTDAEMONAUDIORECORDINGSTARTED_H
#define MHSCHEMAMHASSISTANTDAEMONAUDIORECORDINGSTARTED_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface MHSchemaMHAssistantDaemonAudioRecordingStarted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int audioInputRoute; // ivar: _audioInputRoute
@property (copy, nonatomic) NSString *audioInterfaceProductId; // ivar: _audioInterfaceProductId
@property (copy, nonatomic) NSString *audioInterfaceVendorId; // ivar: _audioInterfaceVendorId
@property (nonatomic) BOOL hasAudioInputRoute;
@property (nonatomic) BOOL hasAudioInterfaceProductId; // ivar: _hasAudioInterfaceProductId
@property (nonatomic) BOOL hasAudioInterfaceVendorId; // ivar: _hasAudioInterfaceVendorId
@property (nonatomic) BOOL hasSource;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int source; // ivar: _source


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAudioInputRoute;
-(void)deleteAudioInterfaceProductId;
-(void)deleteAudioInterfaceVendorId;
-(void)deleteSource;
-(void)writeTo:(id)arg0 ;


@end


#endif
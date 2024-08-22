// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MHSCHEMAMHASSISTANTDAEMONAUDIOBLUETOOTHINFO_H
#define MHSCHEMAMHASSISTANTDAEMONAUDIOBLUETOOTHINFO_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface MHSchemaMHAssistantDaemonAudioBluetoothInfo : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasState;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int state; // ivar: _state


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
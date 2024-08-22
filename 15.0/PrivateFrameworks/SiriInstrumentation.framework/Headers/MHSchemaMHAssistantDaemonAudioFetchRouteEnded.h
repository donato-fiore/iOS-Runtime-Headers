// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MHSCHEMAMHASSISTANTDAEMONAUDIOFETCHROUTEENDED_H
#define MHSCHEMAMHASSISTANTDAEMONAUDIOFETCHROUTEENDED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface MHSchemaMHAssistantDaemonAudioFetchRouteEnded : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL exists; // ivar: _exists
@property (nonatomic) BOOL hasExists;
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
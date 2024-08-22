// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTSCHEMAMTASRSTATEUPDATED_H
#define MTSCHEMAMTASRSTATEUPDATED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface MTSchemaMTASRStateUpdated : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int asrState; // ivar: _asrState
@property (nonatomic) BOOL hasAsrState;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAsrState;
-(void)writeTo:(id)arg0 ;


@end


#endif
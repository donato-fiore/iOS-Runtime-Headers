// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HALSCHEMAHALMEDIAPLAYERCONTEXT_H
#define HALSCHEMAHALMEDIAPLAYERCONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface HALSchemaHALMediaPlayerContext : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasState;
@property (nonatomic) BOOL hasTimeSinceLastMediaPlaybackInSeconds;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int state; // ivar: _state
@property (nonatomic) unsigned int timeSinceLastMediaPlaybackInSeconds; // ivar: _timeSinceLastMediaPlaybackInSeconds
@property (nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteState;
-(void)deleteTimeSinceLastMediaPlaybackInSeconds;
-(void)deleteType;
-(void)writeTo:(id)arg0 ;


@end


#endif
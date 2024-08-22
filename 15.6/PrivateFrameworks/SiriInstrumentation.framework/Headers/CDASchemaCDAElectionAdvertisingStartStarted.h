// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDASCHEMACDAELECTIONADVERTISINGSTARTSTARTED_H
#define CDASCHEMACDAELECTIONADVERTISINGSTARTSTARTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface CDASchemaCDAElectionAdvertisingStartStarted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) float advertisementDelay; // ivar: _advertisementDelay
@property (nonatomic) float advertisementInterval; // ivar: _advertisementInterval
@property (nonatomic) BOOL hasAdvertisementDelay;
@property (nonatomic) BOOL hasAdvertisementInterval;
@property (nonatomic) BOOL hasState;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int state; // ivar: _state


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAdvertisementDelay;
-(void)deleteAdvertisementInterval;
-(void)deleteState;
-(void)writeTo:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HALSCHEMAHALALARMCONTEXT_H
#define HALSCHEMAHALALARMCONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface HALSchemaHALAlarmContext : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasTimeSinceAlarmFiredInSeconds;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger timeSinceAlarmFiredInSeconds; // ivar: _timeSinceAlarmFiredInSeconds


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteTimeSinceAlarmFiredInSeconds;
-(void)writeTo:(id)arg0 ;


@end


#endif
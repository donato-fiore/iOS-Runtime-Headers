// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HOMESCHEMAHOMEASSISTANTDEVICEBIRTHDAY_H
#define HOMESCHEMAHOMEASSISTANTDEVICEBIRTHDAY_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface HOMESchemaHOMEAssistantDeviceBirthday : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasMonth;
@property (nonatomic) BOOL hasYear;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int month; // ivar: _month
@property (nonatomic) unsigned int year; // ivar: _year


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteMonth;
-(void)deleteYear;
-(void)writeTo:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SISCHEMAACTIVESTATUS_H
#define SISCHEMAACTIVESTATUS_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaActiveStatus : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSArray *audioDevicesActiveWithin24Hours; // ivar: _audioDevicesActiveWithin24Hours
@property (nonatomic) BOOL carPlayActiveWithin24Hours; // ivar: _carPlayActiveWithin24Hours
@property (nonatomic) BOOL hasCarPlayActiveWithin24Hours;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)audioDevicesActiveWithin24HoursAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addAudioDevicesActiveWithin24Hours:(id)arg0 ;
-(void)clearAudioDevicesActiveWithin24Hours;
-(void)deleteAudioDevicesActiveWithin24Hours;
-(void)deleteCarPlayActiveWithin24Hours;
-(void)writeTo:(id)arg0 ;


@end


#endif
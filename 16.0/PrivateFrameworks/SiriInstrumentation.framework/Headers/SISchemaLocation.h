// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCHEMALOCATION_H
#define SISCHEMALOCATION_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaLocation : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasHorizontalAccuracyInMeters;
@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) float horizontalAccuracyInMeters; // ivar: _horizontalAccuracyInMeters
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) float latitude; // ivar: _latitude
@property (nonatomic) float longitude; // ivar: _longitude


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteHorizontalAccuracyInMeters;
-(void)deleteLatitude;
-(void)deleteLongitude;
-(void)writeTo:(id)arg0 ;


@end


#endif
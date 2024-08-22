// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SISCHEMADEVICEDYNAMICCONTEXT_H
#define SISCHEMADEVICEDYNAMICCONTEXT_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaLocation.h"

@interface SISchemaDeviceDynamicContext : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (nonatomic) BOOL hasCountryCode; // ivar: _hasCountryCode
@property (nonatomic) BOOL hasLocation; // ivar: _hasLocation
@property (nonatomic) BOOL hasTimeIntervalSince1970;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaLocation *location; // ivar: _location
@property (nonatomic) CGFloat timeIntervalSince1970; // ivar: _timeIntervalSince1970


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCountryCode;
-(void)deleteLocation;
-(void)deleteTimeIntervalSince1970;
-(void)writeTo:(id)arg0 ;


@end


#endif
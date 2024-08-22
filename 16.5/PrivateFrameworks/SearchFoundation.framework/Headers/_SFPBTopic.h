// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFPBTOPIC_H
#define _SFPBTOPIC_H

@class PBCodable, NSString, NSData;
@protocol _SFPBTopic, NSSecureCoding;


#import "_SFPBFlightDetails.h"
#import "_SFPBWeatherDetails.h"

@interface _SFPBTopic : PBCodable <_SFPBTopic, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _SFPBFlightDetails *flight; // ivar: _flight
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *query; // ivar: _query
@property (readonly) Class superclass;
@property (nonatomic) int type; // ivar: _type
@property (retain, nonatomic) _SFPBWeatherDetails *weather; // ivar: _weather
@property (readonly, nonatomic) NSUInteger whichDetail; // ivar: _whichDetail


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initWithSFTopic:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
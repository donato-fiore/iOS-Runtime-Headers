// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFPBBEGINMAPSROUTINGCOMMAND_H
#define _SFPBBEGINMAPSROUTINGCOMMAND_H

@class PBCodable, NSString, NSData;
@protocol _SFPBBeginMapsRoutingCommand, NSSecureCoding;


#import "_SFPBLatLng.h"

@interface _SFPBBeginMapsRoutingCommand : PBCodable <_SFPBBeginMapsRoutingCommand, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int directionsMode; // ivar: _directionsMode
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) _SFPBLatLng *location; // ivar: _location
@property (copy, nonatomic) NSData *mapsData; // ivar: _mapsData
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL shouldSearchDirectionsAlongCurrentRoute; // ivar: _shouldSearchDirectionsAlongCurrentRoute
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
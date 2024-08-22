// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFBEGINMAPSROUTINGCOMMAND_H
#define SFBEGINMAPSROUTINGCOMMAND_H

@class NSString, NSDictionary, NSData;
@protocol SFBeginMapsRoutingCommand, NSSecureCoding, NSCopying;


#import "SFCommand.h"
#import "SFLatLng.h"

@interface SFBeginMapsRoutingCommand : SFCommand <SFBeginMapsRoutingCommand, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSString *commandDetail;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) int directionsMode; // ivar: _directionsMode
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SFLatLng *location; // ivar: _location
@property (copy, nonatomic) NSData *mapsData; // ivar: _mapsData
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL shouldSearchDirectionsAlongCurrentRoute; // ivar: _shouldSearchDirectionsAlongCurrentRoute
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)hasDirectionsMode;
-(BOOL)hasShouldSearchDirectionsAlongCurrentRoute;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
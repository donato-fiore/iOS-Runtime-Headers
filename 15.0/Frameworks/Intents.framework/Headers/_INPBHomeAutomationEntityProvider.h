// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBHOMEAUTOMATIONENTITYPROVIDER_H
#define _INPBHOMEAUTOMATIONENTITYPROVIDER_H

@class PBCodable, NSArray, NSString;
@protocol _INPBHomeAutomationEntityProvider, NSSecureCoding, NSCopying;


#import "_INPBString.h"

@interface _INPBHomeAutomationEntityProvider : PBCodable <_INPBHomeAutomationEntityProvider, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSArray *accessoryNames; // ivar: _accessoryNames
@property (readonly, nonatomic) NSUInteger accessoryNamesCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBString *destinationDeviceId; // ivar: _destinationDeviceId
@property (readonly, nonatomic) BOOL hasDestinationDeviceId;
@property (readonly, nonatomic) BOOL hasHomeName;
@property (readonly, nonatomic) BOOL hasIntentDeviceQuantifier;
@property (readonly, nonatomic) BOOL hasIntentDeviceType;
@property (readonly, nonatomic) BOOL hasIntentPlaceHint;
@property (readonly, nonatomic) BOOL hasIntentReference;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBString *homeName; // ivar: _homeName
@property (retain, nonatomic) _INPBString *intentDeviceQuantifier; // ivar: _intentDeviceQuantifier
@property (retain, nonatomic) _INPBString *intentDeviceType; // ivar: _intentDeviceType
@property (copy, nonatomic) NSArray *intentFromEntities; // ivar: _intentFromEntities
@property (readonly, nonatomic) NSUInteger intentFromEntitiesCount;
@property (retain, nonatomic) _INPBString *intentPlaceHint; // ivar: _intentPlaceHint
@property (retain, nonatomic) _INPBString *intentReference; // ivar: _intentReference
@property (copy, nonatomic) NSArray *roomNames; // ivar: _roomNames
@property (readonly, nonatomic) NSUInteger roomNamesCount;
@property (copy, nonatomic) NSArray *serviceGroups; // ivar: _serviceGroups
@property (readonly, nonatomic) NSUInteger serviceGroupsCount;
@property (copy, nonatomic) NSArray *serviceNames; // ivar: _serviceNames
@property (readonly, nonatomic) NSUInteger serviceNamesCount;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *zoneNames; // ivar: _zoneNames
@property (readonly, nonatomic) NSUInteger zoneNamesCount;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)accessoryNamesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)intentFromEntitiesAtIndex:(NSUInteger)arg0 ;
-(id)roomNamesAtIndex:(NSUInteger)arg0 ;
-(id)serviceGroupsAtIndex:(NSUInteger)arg0 ;
-(id)serviceNamesAtIndex:(NSUInteger)arg0 ;
-(id)zoneNamesAtIndex:(NSUInteger)arg0 ;
-(void)addAccessoryNames:(id)arg0 ;
-(void)addIntentFromEntities:(id)arg0 ;
-(void)addRoomNames:(id)arg0 ;
-(void)addServiceGroups:(id)arg0 ;
-(void)addServiceNames:(id)arg0 ;
-(void)addZoneNames:(id)arg0 ;
-(void)clearAccessoryNames;
-(void)clearIntentFromEntities;
-(void)clearRoomNames;
-(void)clearServiceGroups;
-(void)clearServiceNames;
-(void)clearZoneNames;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
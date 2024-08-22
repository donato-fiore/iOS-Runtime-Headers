// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBHOMEENTITY_H
#define _INPBHOMEENTITY_H

@class PBCodable, NSString, NSArray;
@protocol _INPBHomeEntity, NSSecureCoding, NSCopying;


#import "_INPBDataString.h"
#import "_INPBString.h"

@interface _INPBHomeEntity : PBCodable <_INPBHomeEntity, NSSecureCoding, NSCopying>

 {
    ? _deviceTypes;
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int deviceType; // ivar: _deviceType
@property (readonly, nonatomic) *int deviceTypes;
@property (readonly, nonatomic) NSUInteger deviceTypesCount;
@property (copy, nonatomic) NSString *entityIdentifier; // ivar: _entityIdentifier
@property (retain, nonatomic) _INPBDataString *entityName; // ivar: _entityName
@property (nonatomic) int entityType; // ivar: _entityType
@property (retain, nonatomic) _INPBDataString *group; // ivar: _group
@property (nonatomic) BOOL hasDeviceType;
@property (readonly, nonatomic) BOOL hasEntityIdentifier;
@property (readonly, nonatomic) BOOL hasEntityName;
@property (nonatomic) BOOL hasEntityType;
@property (readonly, nonatomic) BOOL hasGroup;
@property (readonly, nonatomic) BOOL hasHome;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasRoom;
@property (nonatomic) BOOL hasSceneType;
@property (readonly, nonatomic) BOOL hasZone;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBDataString *home; // ivar: _home
@property (retain, nonatomic) _INPBString *name; // ivar: _name
@property (retain, nonatomic) _INPBDataString *room; // ivar: _room
@property (nonatomic) int sceneType; // ivar: _sceneType
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBDataString *zone; // ivar: _zone
@property (copy, nonatomic) NSArray *zones; // ivar: _zones
@property (readonly, nonatomic) NSUInteger zonesCount;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deviceTypeAsString:(int)arg0 ;
-(id)deviceTypesAsString:(int)arg0 ;
-(id)dictionaryRepresentation;
-(id)entityTypeAsString:(int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)sceneTypeAsString:(int)arg0 ;
-(id)zonesAtIndex:(NSUInteger)arg0 ;
-(int)StringAsDeviceType:(id)arg0 ;
-(int)StringAsDeviceTypes:(id)arg0 ;
-(int)StringAsEntityType:(id)arg0 ;
-(int)StringAsSceneType:(id)arg0 ;
-(int)deviceTypesAtIndex:(NSUInteger)arg0 ;
-(void)addDeviceTypes:(int)arg0 ;
-(void)addZones:(id)arg0 ;
-(void)clearDeviceTypes;
-(void)clearZones;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
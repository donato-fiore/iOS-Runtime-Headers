// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBHOMEFILTER_H
#define _INPBHOMEFILTER_H

@class PBCodable, NSString, NSArray;
@protocol _INPBHomeFilter, NSSecureCoding, NSCopying;


#import "_INPBDataString.h"

@interface _INPBHomeFilter : PBCodable <_INPBHomeFilter, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBDataString *accessory; // ivar: _accessory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int deviceType; // ivar: _deviceType
@property (copy, nonatomic) NSArray *entityIdentifiers; // ivar: _entityIdentifiers
@property (readonly, nonatomic) NSUInteger entityIdentifiersCount;
@property (retain, nonatomic) _INPBDataString *entityName; // ivar: _entityName
@property (nonatomic) int entityType; // ivar: _entityType
@property (retain, nonatomic) _INPBDataString *group; // ivar: _group
@property (readonly, nonatomic) BOOL hasAccessory;
@property (nonatomic) BOOL hasAllQuantifier; // ivar: _hasAllQuantifier
@property (nonatomic) BOOL hasDeviceType;
@property (readonly, nonatomic) BOOL hasEntityName;
@property (nonatomic) BOOL hasEntityType;
@property (readonly, nonatomic) BOOL hasGroup;
@property (nonatomic) BOOL hasHasAllQuantifier;
@property (readonly, nonatomic) BOOL hasHome;
@property (nonatomic) BOOL hasIsExcludeFilter;
@property (readonly, nonatomic) BOOL hasOuterDeviceName;
@property (nonatomic) BOOL hasOuterDeviceType;
@property (readonly, nonatomic) BOOL hasRoom;
@property (readonly, nonatomic) BOOL hasScene;
@property (readonly, nonatomic) BOOL hasService;
@property (nonatomic) BOOL hasServiceType;
@property (nonatomic) BOOL hasSubServiceType;
@property (readonly, nonatomic) BOOL hasZone;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBDataString *home; // ivar: _home
@property (nonatomic) BOOL isExcludeFilter; // ivar: _isExcludeFilter
@property (retain, nonatomic) _INPBDataString *outerDeviceName; // ivar: _outerDeviceName
@property (nonatomic) int outerDeviceType; // ivar: _outerDeviceType
@property (retain, nonatomic) _INPBDataString *room; // ivar: _room
@property (retain, nonatomic) _INPBDataString *scene; // ivar: _scene
@property (retain, nonatomic) _INPBDataString *service; // ivar: _service
@property (nonatomic) int serviceType; // ivar: _serviceType
@property (nonatomic) int subServiceType; // ivar: _subServiceType
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBDataString *zone; // ivar: _zone


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deviceTypeAsString:(int)arg0 ;
-(id)dictionaryRepresentation;
-(id)entityIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)entityTypeAsString:(int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)outerDeviceTypeAsString:(int)arg0 ;
-(id)serviceTypeAsString:(int)arg0 ;
-(id)subServiceTypeAsString:(int)arg0 ;
-(int)StringAsDeviceType:(id)arg0 ;
-(int)StringAsEntityType:(id)arg0 ;
-(int)StringAsOuterDeviceType:(id)arg0 ;
-(int)StringAsServiceType:(id)arg0 ;
-(int)StringAsSubServiceType:(id)arg0 ;
-(void)addEntityIdentifiers:(id)arg0 ;
-(void)clearEntityIdentifiers;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMPBHOMEKITCLIENTMEDIAACCESSORYCONTROLEVENT_H
#define BMPBHOMEKITCLIENTMEDIAACCESSORYCONTROLEVENT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "BMPBHomeKitClientBase.h"

@interface BMPBHomeKitClientMediaAccessoryControlEvent : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *accessoryMediaRouteIdentifier; // ivar: _accessoryMediaRouteIdentifier
@property (retain, nonatomic) NSString *accessoryName; // ivar: _accessoryName
@property (retain, nonatomic) NSMutableArray *accessoryStates; // ivar: _accessoryStates
@property (retain, nonatomic) NSString *accessoryUniqueIdentifier; // ivar: _accessoryUniqueIdentifier
@property (retain, nonatomic) BMPBHomeKitClientBase *base; // ivar: _base
@property (readonly, nonatomic) BOOL hasAccessoryMediaRouteIdentifier;
@property (readonly, nonatomic) BOOL hasAccessoryName;
@property (readonly, nonatomic) BOOL hasAccessoryUniqueIdentifier;
@property (readonly, nonatomic) BOOL hasBase;
@property (readonly, nonatomic) BOOL hasHomeName;
@property (readonly, nonatomic) BOOL hasRoomName;
@property (readonly, nonatomic) BOOL hasRoomUniqueIdentifier;
@property (retain, nonatomic) NSString *homeName; // ivar: _homeName
@property (retain, nonatomic) NSString *roomName; // ivar: _roomName
@property (retain, nonatomic) NSString *roomUniqueIdentifier; // ivar: _roomUniqueIdentifier
@property (retain, nonatomic) NSMutableArray *zoneNames; // ivar: _zoneNames
@property (retain, nonatomic) NSMutableArray *zoneUniqueIdentifiers; // ivar: _zoneUniqueIdentifiers


+(Class)accessoryStateType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)accessoryStateAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)zoneNamesAtIndex:(NSUInteger)arg0 ;
-(id)zoneUniqueIdentifiersAtIndex:(NSUInteger)arg0 ;
-(void)addAccessoryState:(id)arg0 ;
-(void)addZoneNames:(id)arg0 ;
-(void)addZoneUniqueIdentifiers:(id)arg0 ;
-(void)clearAccessoryStates;
-(void)clearZoneNames;
-(void)clearZoneUniqueIdentifiers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
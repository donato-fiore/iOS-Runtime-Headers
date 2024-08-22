// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HOMECONTROLANALYSISPETCOREBEHAVIORANALYSISEVENT_H
#define HOMECONTROLANALYSISPETCOREBEHAVIORANALYSISEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface HomeControlAnalysisPETCoreBehaviorAnalysisEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *accessoryUUID; // ivar: _accessoryUUID
@property (retain, nonatomic) NSString *associatedAccessoryUUIDs; // ivar: _associatedAccessoryUUIDs
@property (retain, nonatomic) NSString *characteristicType; // ivar: _characteristicType
@property (retain, nonatomic) NSString *eventStreamTitle; // ivar: _eventStreamTitle
@property (readonly, nonatomic) BOOL hasAccessoryUUID;
@property (readonly, nonatomic) BOOL hasAssociatedAccessoryUUIDs;
@property (readonly, nonatomic) BOOL hasCharacteristicType;
@property (readonly, nonatomic) BOOL hasEventStreamTitle;
@property (nonatomic) BOOL hasHomeOccupancy;
@property (readonly, nonatomic) BOOL hasHomeUUID;
@property (readonly, nonatomic) BOOL hasHomekitSource;
@property (readonly, nonatomic) BOOL hasMicrolocation;
@property (readonly, nonatomic) BOOL hasSceneUUID;
@property (readonly, nonatomic) BOOL hasServiceType;
@property (readonly, nonatomic) BOOL hasServiceUUID;
@property (readonly, nonatomic) BOOL hasValue;
@property (nonatomic) unsigned int homeOccupancy; // ivar: _homeOccupancy
@property (retain, nonatomic) NSString *homeUUID; // ivar: _homeUUID
@property (retain, nonatomic) NSString *homekitSource; // ivar: _homekitSource
@property (retain, nonatomic) NSString *microlocation; // ivar: _microlocation
@property (retain, nonatomic) NSString *sceneUUID; // ivar: _sceneUUID
@property (retain, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (retain, nonatomic) NSString *serviceUUID; // ivar: _serviceUUID
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSString *value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
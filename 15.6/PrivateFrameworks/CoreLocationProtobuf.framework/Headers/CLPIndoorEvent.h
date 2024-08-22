// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLPINDOOREVENT_H
#define CLPINDOOREVENT_H

@class PBCodable;
@protocol NSCopying;


#import "CLPBundleId.h"
#import "CLPIndoorCMAttitude.h"
#import "CLPIndoorCMPedometer.h"
#import "CLPLocation.h"
#import "CLPIndoorMotionActivity.h"
#import "CLPIndoorPressure.h"
#import "CLPIndoorWifiScan.h"

@interface CLPIndoorEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) CLPBundleId *bundleId; // ivar: _bundleId
@property (retain, nonatomic) CLPIndoorCMAttitude *cmAttitude; // ivar: _cmAttitude
@property (retain, nonatomic) CLPIndoorCMPedometer *cmPedometer; // ivar: _cmPedometer
@property (readonly, nonatomic) BOOL hasBundleId;
@property (readonly, nonatomic) BOOL hasCmAttitude;
@property (readonly, nonatomic) BOOL hasCmPedometer;
@property (readonly, nonatomic) BOOL hasLocation;
@property (readonly, nonatomic) BOOL hasMotionActivity;
@property (readonly, nonatomic) BOOL hasPressure;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasWifiScan;
@property (retain, nonatomic) CLPLocation *location; // ivar: _location
@property (retain, nonatomic) CLPIndoorMotionActivity *motionActivity; // ivar: _motionActivity
@property (retain, nonatomic) CLPIndoorPressure *pressure; // ivar: _pressure
@property (nonatomic) int type; // ivar: _type
@property (retain, nonatomic) CLPIndoorWifiScan *wifiScan; // ivar: _wifiScan


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLLOCATION_H
#define CLLOCATION_H

@class NSData, NSString, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_CLLocationFusionInfo.h"
#import "_CLLocationGroundAltitude.h"
#import "CLFloor.h"
#import "CLLocationMatchInfo.h"
#import "CLLocationSourceInformation.h"

@interface CLLocation : NSObject <NSCopying, NSSecureCoding>

 {
    id *_internal;
}


@property (readonly, nonatomic) _CLLocationFusionInfo *_fusionInfo;
@property (readonly, nonatomic) _CLLocationGroundAltitude *_groundAltitude;
@property (readonly, nonatomic) CGFloat altitude;
@property (readonly, nonatomic) CGFloat altitudeWgs84;
@property (readonly, nonatomic) ? clientLocation;
@property (readonly, nonatomic) NSData *coarseMetaData;
@property (readonly, nonatomic) CLLocationCoordinate2D coordinate;
@property (readonly, nonatomic, getter=isCoordinateFused) BOOL coordinateFused;
@property (readonly, nonatomic, getter=isCoordinateFusedWithVL) BOOL coordinateFusedWithVL;
@property (readonly, nonatomic) CGFloat course;
@property (readonly, nonatomic) CGFloat courseAccuracy;
@property (readonly, nonatomic) CGFloat ellipsoidalAltitude;
@property (readonly, copy, nonatomic) CLFloor *floor;
@property (readonly, nonatomic) CGFloat horizontalAccuracy;
@property (readonly, nonatomic) unsigned int integrity;
@property (readonly, nonatomic) BOOL isAltitudeWgs84Available;
@property (readonly, nonatomic) NSString *iso6709Notation;
@property (readonly, nonatomic) CLLocationMatchInfo *matchInfo;
@property (readonly, nonatomic) int positionContextState;
@property (readonly, nonatomic) CGFloat probabilityPositionContextStateIndoor;
@property (readonly, nonatomic) CGFloat probabilityPositionContextStateOutdoor;
@property (readonly, nonatomic) CGFloat rawAltitude;
@property (readonly, nonatomic) CLLocationCoordinate2D rawCoordinate;
@property (readonly, nonatomic) CGFloat rawCourse;
@property (readonly, nonatomic) CGFloat rawCourseAccuracy;
@property (readonly, nonatomic) CGFloat rawHorizontalAccuracy;
@property (readonly, nonatomic) CGFloat rawVerticalAccuracy;
@property (nonatomic) int referenceFrame;
@property (readonly, nonatomic) int signalEnvironmentType;
@property (readonly, nonatomic) CLLocationSourceInformation *sourceInformation;
@property (readonly, nonatomic) CGFloat speed;
@property (readonly, nonatomic) CGFloat speedAccuracy;
@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) CGFloat trustedTimestamp;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) CGFloat verticalAccuracy;


+(BOOL)supportsSecureCoding;
-(CGFloat)distanceFromLocation:(id)arg0 ;
-(CGFloat)getDistanceFrom:(id)arg0 ;
-(id)_initWithCoordinate:(struct CLLocationCoordinate2D )arg0 altitude:(CGFloat)arg1 horizontalAccuracy:(CGFloat)arg2 verticalAccuracy:(CGFloat)arg3 course:(CGFloat)arg4 courseAccuracy:(CGFloat)arg5 speed:(CGFloat)arg6 speedAccuracy:(CGFloat)arg7 timestamp:(id)arg8 floor:(int)arg9 sourceParams:(id)arg10 ;
-(id)_initWithRTLocation:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithClientLocation:(struct ? )arg0 ;
-(id)initWithClientLocation:(struct ? )arg0 clientLocationPrivate:(struct ? )arg1 ;
-(id)initWithClientLocation:(struct ? )arg0 clientLocationPrivate:(struct ? )arg1 coarseMetaData:(id)arg2 ;
-(id)initWithClientLocation:(struct ? )arg0 coarseMetaData:(id)arg1 ;
-(id)initWithClientLocation:(struct ? )arg0 matchInfo:(id)arg1 ;
-(id)initWithClientLocation:(struct ? )arg0 matchInfo:(id)arg1 trustedTimestamp:(CGFloat)arg2 ;
-(id)initWithClientLocation:(struct ? )arg0 matchInfo:(id)arg1 trustedTimestamp:(CGFloat)arg2 groundAltitude:(id)arg3 ;
-(id)initWithClientLocation:(struct ? )arg0 matchInfo:(id)arg1 trustedTimestamp:(CGFloat)arg2 groundAltitude:(id)arg3 fusionInfo:(id)arg4 rawHorizontalAccuracy:(CGFloat)arg5 rawAltitude:(CGFloat)arg6 rawVerticalAccuracy:(CGFloat)arg7 rawCourseAccuracy:(CGFloat)arg8 positionContextStateType:(int)arg9 probabilityPositionContextStateIndoor:(CGFloat)arg10 probabilityPositionContextStateOutdoor:(CGFloat)arg11 coarseMetaData:(id)arg12 ;
-(id)initWithClientLocation:(struct ? )arg0 matchInfo:(id)arg1 trustedTimestamp:(CGFloat)arg2 groundAltitude:(id)arg3 fusionInfo:(id)arg4 rawHorizontalAccuracy:(CGFloat)arg5 rawCourseAccuracy:(CGFloat)arg6 coarseMetaData:(id)arg7 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoordinate:(struct CLLocationCoordinate2D )arg0 altitude:(CGFloat)arg1 horizontalAccuracy:(CGFloat)arg2 verticalAccuracy:(CGFloat)arg3 course:(CGFloat)arg4 courseAccuracy:(CGFloat)arg5 speed:(CGFloat)arg6 speedAccuracy:(CGFloat)arg7 timestamp:(id)arg8 ;
-(id)initWithCoordinate:(struct CLLocationCoordinate2D )arg0 altitude:(CGFloat)arg1 horizontalAccuracy:(CGFloat)arg2 verticalAccuracy:(CGFloat)arg3 course:(CGFloat)arg4 courseAccuracy:(CGFloat)arg5 speed:(CGFloat)arg6 speedAccuracy:(CGFloat)arg7 timestamp:(id)arg8 sourceInfo:(id)arg9 ;
-(id)initWithCoordinate:(struct CLLocationCoordinate2D )arg0 altitude:(CGFloat)arg1 horizontalAccuracy:(CGFloat)arg2 verticalAccuracy:(CGFloat)arg3 course:(CGFloat)arg4 speed:(CGFloat)arg5 timestamp:(id)arg6 ;
-(id)initWithCoordinate:(struct CLLocationCoordinate2D )arg0 altitude:(CGFloat)arg1 horizontalAccuracy:(CGFloat)arg2 verticalAccuracy:(CGFloat)arg3 timestamp:(id)arg4 ;
-(id)initWithLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 ;
-(id)jsonObject;
-(id)propagateLocationToTime:(CGFloat)arg0 ;
-(id)shortDescription;
-(id)snapToResolution:(CGFloat)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)unmatch;


@end


#endif
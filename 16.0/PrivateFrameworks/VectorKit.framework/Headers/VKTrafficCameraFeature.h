// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKTRAFFICCAMERAFEATURE_H
#define VKTRAFFICCAMERAFEATURE_H

@class NSString;


#import "VKTrafficFeature.h"

@interface VKTrafficCameraFeature : VKTrafficFeature {
    unsigned int _speedLimit;
}


@property (readonly, nonatomic) unsigned int countryCode; // ivar: _countryCode
@property (readonly, nonatomic) BOOL hasCountryCode; // ivar: _hasCountryCode
@property (nonatomic) BOOL isAboveSpeedThreshold; // ivar: _isAboveSpeedThreshold
@property (readonly, nonatomic) NSString *speedLimitText; // ivar: _speedLimitText
@property (readonly, nonatomic) unsigned int speedThreshold; // ivar: _speedThreshold
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)stringForTrafficCameraType:(NSInteger)arg0 ;
-(BOOL)isSpeedLimitCamera;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTrafficCamera:(id)arg0 onRoute:(id)arg1 ;
-(id)initWithTrafficCameraType:(NSInteger)arg0 uniqueIdentifier:(id)arg1 routeOffset:(struct PolylineCoordinate )arg2 onRoute:(id)arg3 ;
-(void)populateDebugNode:(*void)arg0 ;


@end


#endif
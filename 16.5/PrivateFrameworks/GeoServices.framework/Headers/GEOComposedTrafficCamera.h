// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOCOMPOSEDTRAFFICCAMERA_H
#define GEOCOMPOSEDTRAFFICCAMERA_H

@class NSString;
@protocol NSSecureCoding;


#import "GEOComposedEnrouteNotice.h"
#import "GEOTrafficCamera.h"

@interface GEOComposedTrafficCamera : GEOComposedEnrouteNotice <NSSecureCoding>

 {
    GEOTrafficCamera *_trafficCamera;
}


@property (readonly, nonatomic) unsigned int cameraPriority;
@property (readonly, nonatomic) unsigned int countryCode;
@property (readonly, nonatomic) BOOL hasCameraPriority;
@property (readonly, nonatomic) BOOL hasCountryCode;
@property (readonly, nonatomic) BOOL hasSpeedLimitText;
@property (readonly, nonatomic) BOOL hasSpeedThreshold;
@property (readonly, nonatomic) unsigned int highlightDistance;
@property (readonly, nonatomic) NSString *speedLimitText;
@property (readonly, nonatomic) CGFloat speedThreshold;
@property (readonly, nonatomic) int type;


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)detailFormatForLocation:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEnrouteNotice:(id)arg0 enrouteNoticeIndex:(NSUInteger)arg1 legIndex:(NSUInteger)arg2 trafficCamera:(id)arg3 onRoute:(id)arg4 ;
-(id)position;
-(id)titleFormatForLocation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
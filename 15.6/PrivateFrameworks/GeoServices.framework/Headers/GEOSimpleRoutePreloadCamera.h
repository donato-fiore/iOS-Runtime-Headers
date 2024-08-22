// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOSIMPLEROUTEPRELOADCAMERA_H
#define GEOSIMPLEROUTEPRELOADCAMERA_H

@class NSString;
@protocol GEORoutePreloadCamera;

#import <Foundation/Foundation.h>


@interface GEOSimpleRoutePreloadCamera : NSObject <GEORoutePreloadCamera>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)implicateAssetMetadataTilesForCoordinate:(struct ? )arg0 size:(CGFloat)arg1 ;
-(void)implicateTilesForCoordinate:(struct ? )arg0 route:(id)arg1 nearestRoutePointIdx:(CGFloat)arg2 stepNearManeuever:(BOOL)arg3 into:(id)arg4 stepSize:(CGFloat)arg5 maneuverSize:(CGFloat)arg6 tileSetStyles:(id)arg7 ;


@end


#endif
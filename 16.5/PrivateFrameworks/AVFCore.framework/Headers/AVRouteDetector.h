// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVROUTEDETECTOR_H
#define AVROUTEDETECTOR_H


#import <Foundation/Foundation.h>

#import "AVRouteDetectorInternal.h"

@interface AVRouteDetector : NSObject {
    AVRouteDetectorInternal *_routeDetectorInternal;
}


@property (nonatomic) BOOL detectsCustomRoutes;
@property (readonly) BOOL multipleRoutesDetected;
@property (getter=isRouteDetectionEnabled) BOOL routeDetectionEnabled;


+(void)initialize;
-(BOOL)_isAirPlayDevicePresenceDetected;
-(BOOL)_isCustomRoutePresenceDetected;
-(id)init;
-(void)_didEnterBackground;
-(void)_didEnterForeground;
-(void)_updateMultipleRoutesDetected;
-(void)_updateRouteDetectionEnabled;
-(void)dealloc;


@end


#endif
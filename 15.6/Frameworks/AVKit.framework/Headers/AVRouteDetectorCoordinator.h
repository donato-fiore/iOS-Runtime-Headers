// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVROUTEDETECTORCOORDINATOR_H
#define AVROUTEDETECTORCOORDINATOR_H


#import <Foundation/Foundation.h>


@interface AVRouteDetectorCoordinator : NSObject

@property (readonly, nonatomic) BOOL multipleRoutesDetected;
@property (nonatomic, getter=isRouteDetectionEnabled) BOOL routeDetectionEnabled; // ivar: _routeDetectionEnabled


+(id)routeDetectorCoordinatorQueue;
+(id)sharedSystemRouteDetector;
+(void)beginDetectingRoutes;
+(void)endDetectingRoutes;
+(void)updateMultipleRoutesDetected;
-(void)dealloc;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVROUTEDETECTOR_H
#define AVROUTEDETECTOR_H


#import <Foundation/Foundation.h>

#import "AVRouteDetectorInternal.h"

@interface AVRouteDetector : NSObject {
    AVRouteDetectorInternal *_routeDetectorInternal;
}


@property (readonly) BOOL multipleRoutesDetected;
@property (getter=isRouteDetectionEnabled) BOOL routeDetectionEnabled;


+(void)initialize;
-(id)init;
-(void)_updateMultipleRoutesDetected;
-(void)dealloc;


@end


#endif
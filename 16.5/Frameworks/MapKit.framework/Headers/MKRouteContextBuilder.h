// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKROUTECONTEXTBUILDER_H
#define MKROUTECONTEXTBUILDER_H

@class NSCache;

#import <Foundation/Foundation.h>


@interface MKRouteContextBuilder : NSObject {
    NSCache *_routeOverlapCache;
}




-(id)buildRouteContextForRoutes:(id)arg0 selectedRouteIndex:(NSUInteger)arg1 ;


@end


#endif
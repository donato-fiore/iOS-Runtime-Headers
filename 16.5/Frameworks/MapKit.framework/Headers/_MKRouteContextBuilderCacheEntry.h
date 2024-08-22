// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKROUTECONTEXTBUILDERCACHEENTRY_H
#define _MKROUTECONTEXTBUILDERCACHEENTRY_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _MKRouteContextBuilderCacheEntry : NSObject

@property (retain, nonatomic) NSArray *overlapResults; // ivar: _overlapResults
@property (retain, nonatomic) NSArray *overlappingSections; // ivar: _overlappingSections
@property (retain, nonatomic) NSArray *routeIDs; // ivar: _routeIDs


-(id)initWithRoutes:(id)arg0 ;


@end


#endif
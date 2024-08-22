// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVFIGREMOTEROUTEDISCOVERERFACTORY_H
#define AVFIGREMOTEROUTEDISCOVERERFACTORY_H

@class NSString;
@protocol AVFigRouteDiscovererFactory;

#import <Foundation/Foundation.h>


@interface AVFigRemoteRouteDiscovererFactory : NSObject <AVFigRouteDiscovererFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(struct OpaqueFigRouteDiscoverer *)createRouteDiscovererWithAllocator:(struct __CFAllocator *)arg0 options:(struct __CFDictionary *)arg1 ;


@end


#endif
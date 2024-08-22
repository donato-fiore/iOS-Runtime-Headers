// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKROUTELINEOBSERVER_H
#define VKROUTELINEOBSERVER_H

@protocol VKRouteLineObserverProtocol;

#import <Foundation/Foundation.h>

#import "VKRouteLine.h"

@interface VKRouteLineObserver : NSObject <VKRouteLineObserverProtocol>

 {
    *void _transitSupport;
    VKRouteLine *_routeLine;
}




-(id)initWithTransitSupport:(*void)arg0 andRouteLine:(id)arg1 ;
-(void)dealloc;
-(void)routeLineDidUpdateSections:(id)arg0 ;


@end


#endif
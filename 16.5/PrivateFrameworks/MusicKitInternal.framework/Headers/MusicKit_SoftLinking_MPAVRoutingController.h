// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUSICKIT_SOFTLINKING_MPAVROUTINGCONTROLLER_H
#define MUSICKIT_SOFTLINKING_MPAVROUTINGCONTROLLER_H

@class MPAVRoutingController, NSString;
@protocol MPAVRoutingControllerDelegate;

#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking_MPAVRoutingController : NSObject <MPAVRoutingControllerDelegate>

 {
    MPAVRoutingController *_underlyingRoutingController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *routesDidUpdate; // ivar: _routesDidUpdate
@property (readonly) Class superclass;


-(id)init;
-(void)_handleRoutesDidChange:(id)arg0 ;
-(void)beginRouteDiscovery;
-(void)endRouteDiscovery;
-(void)routingControllerAvailableRoutesDidChange:(id)arg0 ;


@end


#endif
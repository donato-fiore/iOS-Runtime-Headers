// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRDESTINATIONRESOLVERDEPENDENCIES_H
#define MRDESTINATIONRESOLVERDEPENDENCIES_H


#import <Foundation/Foundation.h>


@interface MRDestinationResolverDependencies : NSObject



+(id)defaultDependencies;
-(id)addPlayerPathInvalidationHandler:(id)arg0 queue:(id)arg1 handler:(id)arg2 ;
-(id)createEndpointObserverWithUID:(id)arg0 ;
-(void)createPlayerPathForEndpoint:(id)arg0 client:(id)arg1 player:(id)arg2 queue:(id)arg3 completion:(id)arg4 ;
-(void)removePlayerPathInvalidationHandler:(id)arg0 ;
-(void)resolvePlayerPath:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)retrieveEndpointForUID:(id)arg0 endpointGroupUID:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)retrieveOutputDeviceUIDForOrigin:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMPCASSISTANTREMOTECONTROLDESTINATIONFACTORY_H
#define HMDMPCASSISTANTREMOTECONTROLDESTINATIONFACTORY_H

@protocol HMDMPCAssistantRemoteControlDestinationFactory;

#import <Foundation/Foundation.h>


@interface HMDMPCAssistantRemoteControlDestinationFactory : NSObject <HMDMPCAssistantRemoteControlDestinationFactory>





-(id)mutableCopyForMPCDestination:(id)arg0 ;
-(id)nowPlayingApplicationDestination;
-(id)systemMediaApplicationDestination;
-(void)resolveMPCDestination:(id)arg0 withHashedRouteIdentifiers:(id)arg1 audioRoutingInfo:(struct ? )arg2 completion:(id)arg3 ;


@end


#endif
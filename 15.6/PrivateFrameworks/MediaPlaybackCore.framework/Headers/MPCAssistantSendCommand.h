// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCASSISTANTSENDCOMMAND_H
#define MPCASSISTANTSENDCOMMAND_H


#import <Foundation/Foundation.h>

#import "MPCAssistantConnection.h"
#import "MPCAssistantDiscovery.h"

@interface MPCAssistantSendCommand : NSObject {
    MPCAssistantConnection *_connection;
    MPCAssistantDiscovery *_discovery;
}




-(*void)_findEndpointFromEndpoints:(id)arg0 byGroupLeader:(id)arg1 ;
-(BOOL)_isAnyDeviceControllable:(id)arg0 ;
-(id)init;
-(void)_checkForAccount:(id)arg0 destination:(id)arg1 origin:(id)arg2 queue:(id)arg3 completion:(id)arg4 ;
-(void)_formGroupAndSendCommand:(unsigned int)arg0 withOptions:(id)arg1 toExternalDestination:(id)arg2 completion:(id)arg3 ;
-(void)_sendCommand:(unsigned int)arg0 path:(id)arg1 options:(id)arg2 queue:(id)arg3 completion:(id)arg4 ;
-(void)_sendCommand:(unsigned int)arg0 withOptions:(id)arg1 toEndpoint:(*void)arg2 toDestination:(id)arg3 completion:(id)arg4 ;
-(void)sendCommand:(unsigned int)arg0 withOptions:(id)arg1 toEndpoint:(id)arg2 toDestination:(id)arg3 completion:(id)arg4 ;
-(void)sendMediaRemoteCommand:(unsigned int)arg0 withOptions:(id)arg1 toEndpointDestination:(id)arg2 completion:(id)arg3 ;
-(void)sendMediaRemoteCommand:(unsigned int)arg0 withOptions:(id)arg1 toLocalDestination:(id)arg2 completion:(id)arg3 ;


@end


#endif
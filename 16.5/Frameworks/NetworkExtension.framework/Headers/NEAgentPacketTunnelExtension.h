// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEAGENTPACKETTUNNELEXTENSION_H
#define NEAGENTPACKETTUNNELEXTENSION_H



#import "NEAgentTunnelExtension.h"

@interface NEAgentPacketTunnelExtension : NEAgentTunnelExtension {
    BOOL _isUserEthernetInterfaceCreated;
    NSInteger _interfaceType;
}




-(void)extension:(id)arg0 didSetTunnelConfiguration:(id)arg1 completionHandler:(id)arg2 ;
-(void)handleExtensionStartedWithCompletionHandler:(id)arg0 ;
-(void)setAppUUIDMap:(id)arg0 ;


@end


#endif
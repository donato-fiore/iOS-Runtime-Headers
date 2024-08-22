// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RPBROADCASTHOSTVIEWCONTROLLER_H
#define RPBROADCASTHOSTVIEWCONTROLLER_H

@class UIRemoteViewController, NSXPCListenerEndpoint;


#import "RPBroadcastExtensionHostContext.h"

@interface RPBroadcastHostViewController : UIRemoteViewController

@property (retain, nonatomic) RPBroadcastExtensionHostContext *hostContext; // ivar: _hostContext
@property (retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // ivar: _listenerEndpoint


-(void)completeSetupWithBroadcastURL:(id)arg0 ;
-(void)updateBroadcastHandlerListenerEndpoint;


@end


#endif
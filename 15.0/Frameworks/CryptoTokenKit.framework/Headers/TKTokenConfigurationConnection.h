// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TKTOKENCONFIGURATIONCONNECTION_H
#define TKTOKENCONFIGURATIONCONNECTION_H

@class NSXPCConnection, NSXPCListenerEndpoint;

#import <Foundation/Foundation.h>


@interface TKTokenConfigurationConnection : NSObject {
    NSXPCConnection *_connection;
    NSXPCListenerEndpoint *_endpoint;
}




-(id)configurationProtocol;
-(id)initWithEndpoint:(id)arg0 ;
-(void)dealloc;


@end


#endif
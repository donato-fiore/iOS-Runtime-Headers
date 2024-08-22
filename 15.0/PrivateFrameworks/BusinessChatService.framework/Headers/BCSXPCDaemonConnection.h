// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSXPCDAEMONCONNECTION_H
#define BCSXPCDAEMONCONNECTION_H

@class NSXPCConnection, NSString;
@protocol BCSXPCDaemonConnectionProtocol, BCSXPCDaemonProtocol;

#import <Foundation/Foundation.h>


@interface BCSXPCDaemonConnection : NSObject <BCSXPCDaemonConnectionProtocol>

 {
    NSXPCConnection *_connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, retain) NSObject<BCSXPCDaemonProtocol> *remoteObjectProxy;
@property (readonly) Class superclass;


-(void)resume;


@end


#endif
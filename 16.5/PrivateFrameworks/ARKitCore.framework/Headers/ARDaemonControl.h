// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARDAEMONCONTROL_H
#define ARDAEMONCONTROL_H

@class NSXPCConnection, NSString;
@protocol ARControlProtocol;

#import <Foundation/Foundation.h>

#import "ARServer.h"

@interface ARDaemonControl : NSObject <ARControlProtocol>

 {
    NSXPCConnection *_connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) ARServer *server; // ivar: _server
@property (readonly) Class superclass;


+(id)controlInterface;
+(id)controlProxyInterface;
-(id)initWithConnection:(id)arg0 ;
-(void)getStatusDictionaryWithReply:(id)arg0 ;
-(void)getStatusWithVerboseOutput:(BOOL)arg0 reply:(id)arg1 ;
-(void)interruptionHandler;
-(void)invalidationHandler;


@end


#endif
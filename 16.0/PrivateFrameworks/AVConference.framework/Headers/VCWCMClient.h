// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCWCMCLIENT_H
#define VCWCMCLIENT_H

@protocol OS_xpc_object, OS_dispatch_queue, WCMClientDelegate;

#import <Foundation/Foundation.h>


@interface VCWCMClient : NSObject

@property (readonly) NSObject<OS_xpc_object> *connection; // ivar: connection
@property (readonly) NSObject<OS_dispatch_queue> *connectionQueue; // ivar: connectionQueue
@property (retain, nonatomic) NSObject<WCMClientDelegate> *wcmClientDelegate; // ivar: wcmClientDelegate


-(id)init;
-(void)dealloc;
-(void)startWCMClient;
-(void)stopWCMClient;


@end


#endif
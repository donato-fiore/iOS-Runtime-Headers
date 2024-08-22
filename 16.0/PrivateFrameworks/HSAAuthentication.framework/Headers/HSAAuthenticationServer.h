// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HSAAUTHENTICATIONSERVER_H
#define HSAAUTHENTICATIONSERVER_H

@class NSMutableArray;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface HSAAuthenticationServer : NSObject {
    NSObject<OS_xpc_object> *_connection;
    NSMutableArray *_clients;
    BOOL _hasRegistered;
}




+(id)sharedInstance;
-(id)init;
-(void)_cleanup;
-(void)_cleanupClient:(id)arg0 ;
-(void)_clientConnected;
-(void)_configureWithClient:(id)arg0 ;
-(void)dealloc;
-(void)parseIncomingMessageFromNumber:(id)arg0 forService:(id)arg1 messageBody:(id)arg2 ;


@end


#endif
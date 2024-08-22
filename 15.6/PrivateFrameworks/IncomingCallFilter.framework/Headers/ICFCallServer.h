// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICFCALLSERVER_H
#define ICFCALLSERVER_H

@class NSMutableArray;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface ICFCallServer : NSObject {
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
-(void)_requestCallGrantForIdentifier:(id)arg0 forProviderIdentifier:(id)arg1 waitForResponse:(BOOL)arg2 completionBlock:(id)arg3 ;
-(void)dealloc;
-(void)shouldAllowIncomingCallForNumber:(id)arg0 forProviderIdentifier:(id)arg1 response:(id)arg2 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CXNOTIFICATIONSERVICEEXTENSIONVOIPXPCCLIENT_H
#define CXNOTIFICATIONSERVICEEXTENSIONVOIPXPCCLIENT_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface CXNotificationServiceExtensionVoIPXPCClient : NSObject

@property (readonly, nonatomic) os_unfair_lock_s accessorLock; // ivar: _accessorLock
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection


-(BOOL)requestDidArriveFromExtensionPoint;
-(BOOL)taskHasEntitlement:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)requestApplicationLaunchForIncomingCall:(id)arg0 completion:(id)arg1 ;


@end


#endif
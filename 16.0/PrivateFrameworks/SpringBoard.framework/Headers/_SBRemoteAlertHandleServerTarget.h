// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBREMOTEALERTHANDLESERVERTARGET_H
#define _SBREMOTEALERTHANDLESERVERTARGET_H

@class BSServiceConnection;
@protocol SBSRemoteAlertHandleServiceServerInterface;

#import <Foundation/Foundation.h>


@interface _SBRemoteAlertHandleServerTarget : NSObject <SBSRemoteAlertHandleServiceServerInterface>



@property (readonly, weak, nonatomic) BSServiceConnection *connection; // ivar: _connection
@property (weak, nonatomic) NSObject<SBSRemoteAlertHandleServiceServerInterface> *proxyInterface; // ivar: _proxyInterface


+(id)currentTarget;
-(id)createRemoteAlertHandleContextWithDefinition:(id)arg0 configurationContext:(id)arg1 ;
-(id)initWithConnection:(id)arg0 proxyInterface:(id)arg1 ;
-(id)remoteAlertHandleContextsForDefinition:(id)arg0 allowsCreationValue:(id)arg1 configurationContext:(id)arg2 ;
-(void)_performBlock:(id)arg0 ;
-(void)activateRemoteAlertHandleWithID:(id)arg0 activationContext:(id)arg1 ;
-(void)invalidateRemoteAlertHandleWithID:(id)arg0 ;


@end


#endif
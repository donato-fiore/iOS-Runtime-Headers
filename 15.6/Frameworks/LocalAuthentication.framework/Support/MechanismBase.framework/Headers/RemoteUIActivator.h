// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMOTEUIACTIVATOR_H
#define REMOTEUIACTIVATOR_H

@class SBSRemoteAlertHandle, NSString;
@protocol SBSRemoteAlertHandleObserver, RemoteUIActivating, RemoteUIActivatorDelegate;

#import <Foundation/Foundation.h>


@interface RemoteUIActivator : NSObject <SBSRemoteAlertHandleObserver, RemoteUIActivating>



@property (weak, nonatomic) SBSRemoteAlertHandle *activatingHandle; // ivar: _activatingHandle
@property (weak, nonatomic) SBSRemoteAlertHandle *activeHandle; // ivar: _activeHandle
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RemoteUIActivatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL remoteAlertWasInvalidated; // ivar: _remoteAlertWasInvalidated
@property (readonly) Class superclass;


-(BOOL)activateUIWithParams:(id)arg0 ;
-(BOOL)invalidated;
-(void)remoteAlertHandle:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)remoteAlertHandleDidActivate:(id)arg0 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PGBACKGROUNDPIPSERVICECONNECTIONTARGET_H
#define _PGBACKGROUNDPIPSERVICECONNECTIONTARGET_H

@class NSString, BSServiceConnection;
@protocol PGBackgroundPIPClientToServerInterface, _PGBackgroundPIPServiceConnectionTargetDelegate;

#import <Foundation/Foundation.h>


@interface _PGBackgroundPIPServiceConnectionTarget : NSObject <PGBackgroundPIPClientToServerInterface>

 {
    os_unfair_lock_s _lock;
    NSString *_lock_activitySessionIdentifier;
    NSString *_lock_bundleIdentifier;
    NSInteger _lock_state;
    BSServiceConnection *_connection;
}


@property (readonly, copy) NSString *activitySessionIdentifier;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, nonatomic, getter=isConnectionActive) BOOL connectionActive;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_PGBackgroundPIPServiceConnectionTargetDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger state;
@property (readonly) Class superclass;


-(id)initWithConnection:(id)arg0 delegate:(id)arg1 ;
-(void)grantAuthorizationForActivitySessionWithIdentifier:(id)arg0 bundleIdentifier:(id)arg1 ;
-(void)invalidate;
-(void)revokeAuthorization;
-(void)transitionToStateIfPossible:(NSInteger)arg0 ;


@end


#endif
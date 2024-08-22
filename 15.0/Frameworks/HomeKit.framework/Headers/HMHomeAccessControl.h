// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMHOMEACCESSCONTROL_H
#define HMHOMEACCESSCONTROL_H



#import "HMAccessControl.h"
#import "HMUserCameraAccess.h"
#import "HMUserPresenceAuthorization.h"
#import "HMUserPresenceCompute.h"

@interface HMHomeAccessControl : HMAccessControl

@property (getter=isAccessAllowed) BOOL accessAllowed; // ivar: _accessAllowed
@property (nonatomic, getter=isAdministrator) BOOL administrator; // ivar: _administrator
@property (getter=isAnnounceAccessAllowed) BOOL announceAccessAllowed; // ivar: _announceAccessAllowed
@property (retain, nonatomic) HMUserCameraAccess *camerasAccess; // ivar: _camerasAccess
@property (getter=isOwner) BOOL owner; // ivar: _owner
@property (retain, nonatomic) HMUserPresenceAuthorization *presenceAuthStatus; // ivar: _presenceAuthStatus
@property (retain, nonatomic) HMUserPresenceCompute *presenceComputeStatus; // ivar: _presenceComputeStatus
@property (getter=isRemoteAccessAllowed) BOOL remoteAccessAllowed; // ivar: _remoteAccessAllowed


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)presenceAuthorizationStatus;
-(NSUInteger)presenceComputationStatus;
-(id)initWithUser:(id)arg0 allowAccess:(BOOL)arg1 owner:(BOOL)arg2 administratorPrivilege:(BOOL)arg3 remoteAccess:(BOOL)arg4 presenceAuthStatus:(id)arg5 presenceComputeStatus:(id)arg6 announceAccess:(BOOL)arg7 camerasAccess:(id)arg8 ;
-(void)updateAdministratorAccess:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)updateAnnounceAccess:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)updateCamerasAccessLevel:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)updatePresenceAuthorizationStatus:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)updateRemoteAccess:(BOOL)arg0 completionHandler:(id)arg1 ;


@end


#endif
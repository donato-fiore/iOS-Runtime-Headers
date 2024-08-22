// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMUSERINVITEINFORMATION_H
#define HMUSERINVITEINFORMATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HMUserInviteInformation : NSObject

@property (readonly, nonatomic, getter=isAdministrator) BOOL administrator; // ivar: _administrator
@property (readonly, nonatomic, getter=isAnnounceAccessAllowed) BOOL announceAccessAllowed; // ivar: _announceAccessAllowed
@property (readonly, nonatomic) NSUInteger camerasAccessLevel; // ivar: _camerasAccessLevel
@property (readonly, nonatomic, getter=isRemoteAccessAllowed) BOOL remoteAccessAllowed; // ivar: _remoteAccessAllowed
@property (readonly, copy, nonatomic) NSString *userID; // ivar: _userID


-(id)init;
-(id)initWithUser:(id)arg0 administrator:(BOOL)arg1 remoteAccess:(BOOL)arg2 ;
-(id)initWithUser:(id)arg0 administrator:(BOOL)arg1 remoteAccess:(BOOL)arg2 announceAccess:(BOOL)arg3 camerasAccessLevel:(NSUInteger)arg4 ;


@end


#endif
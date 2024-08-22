// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMUSERCLOUDSHAREINVITATION_H
#define HMUSERCLOUDSHAREINVITATION_H

@class NSString, CKDeviceToDeviceShareInvitationToken, NSURL;

#import <Foundation/Foundation.h>

#import "HMUser.h"
#import "HMHome.h"

@interface HMUserCloudShareInvitation : NSObject

@property (readonly) NSString *containerID; // ivar: _containerID
@property (readonly) HMUser *fromUser; // ivar: _fromUser
@property (readonly) HMHome *home; // ivar: _home
@property (readonly) CKDeviceToDeviceShareInvitationToken *shareToken; // ivar: _shareToken
@property (readonly) NSURL *shareURL; // ivar: _shareURL
@property (readonly) HMUser *user; // ivar: _user


-(id)initWithUser:(id)arg0 URL:(id)arg1 shareToken:(id)arg2 containerID:(id)arg3 forHome:(id)arg4 fromUser:(id)arg5 ;


@end


#endif
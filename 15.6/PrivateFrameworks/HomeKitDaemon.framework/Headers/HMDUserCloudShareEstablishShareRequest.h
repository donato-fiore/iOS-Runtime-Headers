// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDUSERCLOUDSHAREESTABLISHSHAREREQUEST_H
#define HMDUSERCLOUDSHAREESTABLISHSHAREREQUEST_H

@class NSData;


#import "HMDUserCloudShareRequest.h"
#import "HMDUser.h"

@interface HMDUserCloudShareEstablishShareRequest : HMDUserCloudShareRequest

@property (readonly, copy) id *completion; // ivar: _completion
@property (readonly) NSData *encodedShareURL; // ivar: _encodedShareURL
@property (readonly, weak) HMDUser *fromUser; // ivar: _fromUser
@property (readonly) NSData *shareToken; // ivar: _shareToken
@property (readonly, weak) HMDUser *toUser; // ivar: _toUser


-(id)description;
-(id)initWithHome:(id)arg0 fromUser:(id)arg1 toUser:(id)arg2 encodedShareURL:(id)arg3 shareToken:(id)arg4 containerID:(id)arg5 currentDate:(id)arg6 completion:(id)arg7 ;


@end


#endif
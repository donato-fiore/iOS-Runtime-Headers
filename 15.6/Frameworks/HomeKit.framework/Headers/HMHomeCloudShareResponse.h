// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMHOMECLOUDSHARERESPONSE_H
#define HMHOMECLOUDSHARERESPONSE_H

@class CKShareParticipant;

#import <Foundation/Foundation.h>

#import "HMUserCloudShareClientInfo.h"
#import "HMUser.h"

@interface HMHomeCloudShareResponse : NSObject

@property (readonly) HMUserCloudShareClientInfo *clientInfo; // ivar: _clientInfo
@property (readonly) HMUser *ownerUser; // ivar: _ownerUser
@property (readonly) CKShareParticipant *participant; // ivar: _participant


-(id)initWithOwnerUser:(id)arg0 pariticipant:(id)arg1 clientInfo:(id)arg2 ;


@end


#endif
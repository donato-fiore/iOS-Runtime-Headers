// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMEREPROVISIONINGPENDINGINFORMATION_H
#define HMDHOMEREPROVISIONINGPENDINGINFORMATION_H

@class NSUUID;

#import <Foundation/Foundation.h>

#import "HMDAccessoryNetworkCredential.h"

@interface HMDHomeReprovisioningPendingInformation : NSObject

@property (readonly) NSUUID *messageIdentifier; // ivar: _messageIdentifier
@property (readonly) HMDAccessoryNetworkCredential *networkCredential; // ivar: _networkCredential


-(id)initWithMessageUUID:(id)arg0 networkCredential:(id)arg1 ;


@end


#endif
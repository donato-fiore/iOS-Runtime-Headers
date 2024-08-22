// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYSETUPCOORDINATORSTAGINGREQUEST_H
#define HMDACCESSORYSETUPCOORDINATORSTAGINGREQUEST_H

@class NSUUID, NSError, HMFMessage, NSMutableArray;

#import <Foundation/Foundation.h>


@interface HMDAccessorySetupCoordinatorStagingRequest : NSObject

@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property (copy, nonatomic) id *confirmDeviceCredentialCompletionHandler; // ivar: _confirmDeviceCredentialCompletionHandler
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) HMFMessage *pendingRequestMessage; // ivar: _pendingRequestMessage
@property (retain, nonatomic) NSMutableArray *pendingResponsePayloads; // ivar: _pendingResponsePayloads
@property (copy, nonatomic) id *selectThreadNetworkHandler; // ivar: _selectThreadNetworkHandler
@property (copy, nonatomic) id *selectWiFiNetworkHandler; // ivar: _selectWiFiNetworkHandler


-(id)init;


@end


#endif
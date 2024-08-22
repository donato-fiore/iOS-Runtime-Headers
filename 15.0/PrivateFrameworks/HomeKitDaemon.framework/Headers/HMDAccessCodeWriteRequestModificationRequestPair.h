// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDACCESSCODEWRITEREQUESTMODIFICATIONREQUESTPAIR_H
#define HMDACCESSCODEWRITEREQUESTMODIFICATIONREQUESTPAIR_H

@class HMFObject, NSArray;


#import "HMDCharacteristicWriteRequest.h"

@interface HMDAccessCodeWriteRequestModificationRequestPair : HMFObject

@property (readonly, copy) NSArray *modificationRequests; // ivar: _modificationRequests
@property (readonly) HMDCharacteristicWriteRequest *writeRequest; // ivar: _writeRequest


-(id)initWithWriteRequest:(id)arg0 modificationRequests:(id)arg1 ;


@end


#endif
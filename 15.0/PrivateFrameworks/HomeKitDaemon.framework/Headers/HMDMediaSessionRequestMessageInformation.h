// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDMEDIASESSIONREQUESTMESSAGEINFORMATION_H
#define HMDMEDIASESSIONREQUESTMESSAGEINFORMATION_H

@class HMFObject, NSString, HMFMessage, NSUUID;
@protocol HMFLogging;


#import "HMDDevice.h"

@interface HMDMediaSessionRequestMessageInformation : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMFMessage *message; // ivar: _message
@property (readonly, copy) NSUUID *messageIdentifier;
@property (readonly) HMDDevice *remoteSourceDevice;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)attributeDescriptions;
-(id)initWithMessage:(id)arg0 ;


@end


#endif
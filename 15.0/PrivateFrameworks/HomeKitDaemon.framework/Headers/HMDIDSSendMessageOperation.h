// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDIDSSENDMESSAGEOPERATION_H
#define HMDIDSSENDMESSAGEOPERATION_H

@class HMFOperation, NSString, NSArray, HMFMessage, IDSService;
@protocol HMFLogging, HMFObject, IDSServiceDelegate;


#import "HMDRemoteMessageDestination.h"

@interface HMDIDSSendMessageOperation : HMFOperation <HMFLogging, HMFObject, IDSServiceDelegate>

 {
    CGFloat _timeout;
    HMDRemoteMessageDestination *_destination;
    NSString *_messageIdentifier;
}


@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMFMessage *message; // ivar: _message
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) IDSService *service; // ivar: _service
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(CGFloat)timeout;
+(id)logCategory;
-(id)initWithMessage:(id)arg0 ;
-(id)initWithMessage:(id)arg0 service:(id)arg1 ;
-(id)logIdentifier;
-(void)main;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 context:(id)arg5 ;


@end


#endif
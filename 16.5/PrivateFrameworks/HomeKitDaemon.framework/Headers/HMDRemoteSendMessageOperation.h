// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDREMOTESENDMESSAGEOPERATION_H
#define HMDREMOTESENDMESSAGEOPERATION_H

@class HMFOperation, NSArray, NSString, HMFMessage;
@protocol HMFLogging, HMFObject;


#import "HMDSecureRemoteMessageTransport.h"

@interface HMDRemoteSendMessageOperation : HMFOperation <HMFLogging, HMFObject>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMFMessage *message; // ivar: _message
@property (getter=isMessageResponseHandled) BOOL messageResponseHandled; // ivar: _messageResponseHandled
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, weak) HMDSecureRemoteMessageTransport *transport; // ivar: _transport


+(id)logCategory;
-(id)initWithMessage:(id)arg0 transport:(id)arg1 ;
-(id)logIdentifier;
-(void)_respondWithError:(id)arg0 playload:(id)arg1 ;
-(void)cancelWithError:(id)arg0 ;
-(void)main;


@end


#endif
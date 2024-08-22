// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef __HMFMESSAGEHANDLER_H
#define __HMFMESSAGEHANDLER_H

@class NSArray, NSString, NSUUID;
@protocol HMFLogging, HMFObject, OS_dispatch_queue, HMFMessageReceiver;


#import "HMFObject.h"

@interface __HMFMessageHandler : HMFObject <HMFLogging, HMFObject>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash; // ivar: _hash
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly, copy) NSArray *policies; // ivar: _policies
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, weak) NSObject<HMFMessageReceiver> *receiver; // ivar: _receiver
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *target; // ivar: _target


+(id)handlerWithReceiver:(id)arg0 name:(id)arg1 policies:(id)arg2 handler:(id)arg3 ;
+(id)handlerWithReceiver:(id)arg0 targetUUID:(id)arg1 name:(id)arg2 policies:(id)arg3 selector:(SEL)arg4 ;
+(id)logCategory;
-(BOOL)hasReceiver:(id)arg0 ;
-(BOOL)invokeWithMessage:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithReceiver:(id)arg0 targetUUID:(id)arg1 name:(id)arg2 policies:(id)arg3 ;
-(id)logIdentifier;


@end


#endif
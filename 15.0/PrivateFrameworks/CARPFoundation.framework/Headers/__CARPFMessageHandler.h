// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __CARPFMESSAGEHANDLER_H
#define __CARPFMESSAGEHANDLER_H

@class NSArray, NSString, NSUUID;
@protocol CARPFLogging, CARPFObject, OS_dispatch_queue, CARPFMessageReceiver;


#import "CARPFObject.h"
#import "CARPFObjectObserver.h"

@interface __CARPFMessageHandler : CARPFObject <CARPFLogging, CARPFObject>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *carpf_privateDescription;
@property (readonly, copy) NSString *carpf_shortDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash; // ivar: _hash
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly) CARPFObjectObserver *observer; // ivar: _observer
@property (readonly, copy) NSArray *policies; // ivar: _policies
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, weak) NSObject<CARPFMessageReceiver> *receiver; // ivar: _receiver
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *target; // ivar: _target


+(id)handlerWithReceiver:(id)arg0 name:(id)arg1 policies:(id)arg2 handler:(id)arg3 ;
+(id)handlerWithReceiver:(id)arg0 name:(id)arg1 policies:(id)arg2 selector:(SEL)arg3 ;
+(id)logCategory;
-(BOOL)invokeWithMessage:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithReceiver:(id)arg0 name:(id)arg1 policies:(id)arg2 ;
-(id)logIdentifier;


@end


#endif
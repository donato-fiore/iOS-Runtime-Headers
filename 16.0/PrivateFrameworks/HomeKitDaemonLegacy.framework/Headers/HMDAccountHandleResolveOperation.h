// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCOUNTHANDLERESOLVEOPERATION_H
#define HMDACCOUNTHANDLERESOLVEOPERATION_H

@class HMFOperation, NSString, NSMutableArray;
@protocol HMFLogging, HMDIDSServiceDelegate, HMDIDSService;


#import "HMDAccountHandle.h"
#import "HMDIDSMessageContext.h"

@interface HMDAccountHandleResolveOperation : HMFOperation <HMFLogging, HMDIDSServiceDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HMDAccountHandle *handle; // ivar: _handle
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMDIDSMessageContext *messageContext; // ivar: _messageContext
@property (readonly) NSMutableArray *resolveBlocks; // ivar: _resolveBlocks
@property (readonly) NSObject<HMDIDSService> *service; // ivar: _service
@property (readonly) Class superclass;


+(CGFloat)timeout;
+(id)logCategory;
-(id)init;
-(id)initWithHandle:(id)arg0 ;
-(id)initWithQualityOfService:(NSInteger)arg0 timeout:(CGFloat)arg1 ;
-(id)initWithTimeout:(CGFloat)arg0 ;
-(void)addResolveBlock:(id)arg0 ;
-(void)main;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg0 account:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;


@end


#endif
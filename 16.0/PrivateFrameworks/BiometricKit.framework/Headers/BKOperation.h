// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKOPERATION_H
#define BKOPERATION_H

@class NSString;
@protocol BiometricKitXPCClientDelegate, BiometricKitDelegateXpcProtocol, BKOperationDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BiometricKitXPCClient.h"
#import "BKDevice.h"

@interface BKOperation : NSObject <BiometricKitXPCClientDelegate, BiometricKitDelegateXpcProtocol>

 {
    BiometricKitXPCClient *_xpcClient;
    BOOL _startPending;
    BOOL _cancelPending;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BKOperationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BKDevice *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


-(BOOL)isDelegate;
-(BOOL)startWithError:(*id)arg0 ;
-(id)dispatchQueue;
-(id)initWithDevice:(id)arg0 ;
-(id)optionsDictionaryWithError:(*id)arg0 ;
-(id)userPresentWithError:(*id)arg0 ;
-(void)cancel;
-(void)changeState:(NSInteger)arg0 ;
-(void)connectionInterrupted;
-(void)dealloc;
-(void)enrollFeedback:(id)arg0 client:(NSUInteger)arg1 ;
-(void)enrollResult:(id)arg0 details:(id)arg1 client:(NSUInteger)arg2 ;
-(void)enrollUpdate:(id)arg0 client:(NSUInteger)arg1 ;
-(void)homeButtonPressed:(NSUInteger)arg0 ;
-(void)matchResult:(id)arg0 details:(id)arg1 client:(NSUInteger)arg2 ;
-(void)operationEndsWithReason:(NSInteger)arg0 ;
-(void)operationInterrupted;
-(void)startBioOperation:(BOOL)arg0 reply:(id)arg1 ;
-(void)startOperation:(BOOL)arg0 reply:(id)arg1 ;
-(void)startWithReply:(id)arg0 ;
-(void)statusMessage:(unsigned int)arg0 client:(NSUInteger)arg1 ;
-(void)statusMessage:(unsigned int)arg0 details:(id)arg1 client:(NSUInteger)arg2 ;
-(void)taskResumeStatus:(int)arg0 client:(NSUInteger)arg1 ;
-(void)templateUpdate:(id)arg0 details:(id)arg1 client:(NSUInteger)arg2 ;
-(void)touchIDButtonPressed:(BOOL)arg0 client:(NSUInteger)arg1 ;


@end


#endif
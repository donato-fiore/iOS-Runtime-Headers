// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMFLOGEVENTSESSION_H
#define HMFLOGEVENTSESSION_H

@class NSString, NSUUID;
@protocol HMFLogging, HMFLogBackendSession;

#import <Foundation/Foundation.h>

#import "HMFLogEventSessionVoucher.h"

@interface HMFLogEventSession : NSObject <HMFLogging>



@property (readonly, nonatomic) NSObject<HMFLogBackendSession> *backend; // ivar: _backend
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *rootUUID; // ivar: _rootUUID
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSUInteger signpostId; // ivar: _signpostId
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (readonly, nonatomic) HMFLogEventSessionVoucher *voucher;


+(id)backendWithServiceName:(id)arg0 samplingUUID:(id)arg1 uploadImmediately:(BOOL)arg2 ;
+(id)logCategory;
+(void)addCommonField:(id)arg0 withValue:(id)arg1 ;
+(void)removeCommonField:(id)arg0 ;
+(void)submitEventWithName:(id)arg0 serviceName:(id)arg1 payload:(id)arg2 ;
+(void)submitEventWithName:(id)arg0 serviceName:(id)arg1 uploadImmediately:(BOOL)arg2 payload:(id)arg3 ;
-(id)initWithUUID:(id)arg0 backend:(id)arg1 ;
-(id)initWithUUID:(id)arg0 serviceName:(id)arg1 uploadImmediately:(BOOL)arg2 ;
-(void)dealloc;
-(void)submitEventWithName:(id)arg0 payload:(id)arg1 ;


@end


#endif
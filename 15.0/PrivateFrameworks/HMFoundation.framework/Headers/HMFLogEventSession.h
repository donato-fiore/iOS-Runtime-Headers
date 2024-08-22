// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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


+(id)logCategory;
-(id)initWithUUID:(id)arg0 rootUUID:(id)arg1 backend:(id)arg2 ;
-(void)dealloc;
-(void)submitEventWithName:(id)arg0 payload:(id)arg1 ;


@end


#endif
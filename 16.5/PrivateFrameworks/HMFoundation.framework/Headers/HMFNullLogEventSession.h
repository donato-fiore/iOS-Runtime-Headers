// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMFNULLLOGEVENTSESSION_H
#define HMFNULLLOGEVENTSESSION_H

@class NSString, NSUUID;
@protocol HMFLogEventSession;


#import "HMFObject.h"
#import "HMFLogEventSessionVoucher.h"

@interface HMFNullLogEventSession : HMFObject <HMFLogEventSession>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (readonly, nonatomic) HMFLogEventSessionVoucher *voucher;


+(id)logCategory;
-(id)initWithUUID:(id)arg0 serviceName:(id)arg1 ;
-(id)objectForChildActivity;
-(void)submitEventWithName:(id)arg0 payload:(id)arg1 ;


@end


#endif
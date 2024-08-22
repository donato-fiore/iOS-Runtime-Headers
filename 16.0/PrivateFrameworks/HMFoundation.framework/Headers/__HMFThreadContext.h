// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __HMFTHREADCONTEXT_H
#define __HMFTHREADCONTEXT_H

@class NSThread;
@protocol OS_voucher;


#import "HMFObject.h"

@interface __HMFThreadContext : HMFObject

@property (nonatomic) NSUInteger count; // ivar: _count
@property (nonatomic) BOOL shouldRestoreVoucher; // ivar: _shouldRestoreVoucher
@property (readonly) NSThread *thread; // ivar: _thread
@property (retain, nonatomic) NSObject<OS_voucher> *voucher; // ivar: _voucher


+(id)currentContext;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)__init;
-(id)description;
-(id)init;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __CARPFTHREADCONTEXT_H
#define __CARPFTHREADCONTEXT_H

@class NSThread;
@protocol OS_voucher;


#import "CARPFObject.h"

@interface __CARPFThreadContext : CARPFObject

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
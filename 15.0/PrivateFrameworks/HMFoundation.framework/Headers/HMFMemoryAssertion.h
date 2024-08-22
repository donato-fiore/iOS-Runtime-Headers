// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMFMEMORYASSERTION_H
#define HMFMEMORYASSERTION_H

@protocol OS_os_transaction;


#import "HMFAssertion.h"

@interface HMFMemoryAssertion : HMFAssertion

@property (retain, nonatomic) NSObject<OS_os_transaction> *internal; // ivar: _internal


-(id)initWithName:(id)arg0 ;
-(void)invalidate;
-(void)mark;


@end


#endif
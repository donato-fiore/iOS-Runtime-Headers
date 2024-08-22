// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CARPFMEMORYASSERTION_H
#define CARPFMEMORYASSERTION_H

@protocol OS_os_transaction;


#import "CARPFAssertion.h"

@interface CARPFMemoryAssertion : CARPFAssertion

@property (retain, nonatomic) NSObject<OS_os_transaction> *internal; // ivar: _internal


-(id)initWithName:(id)arg0 ;
-(void)invalidate;
-(void)mark;


@end


#endif
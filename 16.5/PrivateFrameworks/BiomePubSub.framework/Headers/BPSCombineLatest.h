// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BPSCOMBINELATEST_H
#define BPSCOMBINELATEST_H

@protocol BPSPublisher;


#import "BPSPublisher.h"

@interface BPSCombineLatest : BPSPublisher

@property (readonly, nonatomic) NSObject<BPSPublisher> *a; // ivar: _a
@property (readonly, nonatomic) NSObject<BPSPublisher> *b; // ivar: _b


+(id)new;
-(id)init;
-(id)initWithA:(id)arg0 b:(id)arg1 ;
-(void)subscribe:(id)arg0 ;


@end


#endif
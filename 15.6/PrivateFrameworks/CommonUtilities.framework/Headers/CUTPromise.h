// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUTPROMISE_H
#define CUTPROMISE_H



#import "CUTUnsafePromise.h"

@interface CUTPromise : CUTUnsafePromise



+(id)all:(id)arg0 ;
+(id)failedPromiseWithError:(id)arg0 ;
+(id)fulfilledPromiseWithValue:(id)arg0 ;
-(id)then:(id)arg0 ;
-(void)registerResultBlock:(id)arg0 ;


@end


#endif
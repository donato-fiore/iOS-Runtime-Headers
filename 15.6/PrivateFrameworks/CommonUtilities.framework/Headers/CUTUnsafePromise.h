// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUTUNSAFEPROMISE_H
#define CUTUNSAFEPROMISE_H


#import <Foundation/Foundation.h>


@interface CUTUnsafePromise : NSObject



+(id)all:(id)arg0 ;
+(id)failedPromiseWithError:(id)arg0 ;
+(id)fulfilledPromiseWithValue:(id)arg0 ;
-(id)_init;
-(id)then:(id)arg0 ;
-(void)registerResultBlock:(id)arg0 ;


@end


#endif
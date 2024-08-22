// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUTUNSAFEPROMISESEAL_H
#define CUTUNSAFEPROMISESEAL_H


#import <Foundation/Foundation.h>

#import "CUTUnsafePromise.h"

@interface CUTUnsafePromiseSeal : NSObject

@property (retain, nonatomic) CUTUnsafePromise *promise; // ivar: _promise


-(id)init;
-(void)failWithError:(id)arg0 ;
-(void)fulfillWithValue:(id)arg0 ;


@end


#endif
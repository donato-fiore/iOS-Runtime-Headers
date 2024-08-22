// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUTPROMISESEAL_H
#define CUTPROMISESEAL_H


#import <Foundation/Foundation.h>

#import "CUTPromise.h"

@interface CUTPromiseSeal : NSObject

@property (retain, nonatomic) CUTPromise *promise; // ivar: _promise


-(id)initWithQueue:(id)arg0 ;
-(void)failWithError:(id)arg0 ;
-(void)fulfillWithValue:(id)arg0 ;


@end


#endif
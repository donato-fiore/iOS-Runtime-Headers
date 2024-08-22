// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSSTOREFRONTCODELOADOPERATION_H
#define VSSTOREFRONTCODELOADOPERATION_H

@class NSOperationQueue;


#import "VSAsyncOperation.h"
#import "VSOptional.h"

@interface VSStorefrontCodeLoadOperation : VSAsyncOperation

@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue
@property (retain, nonatomic) VSOptional *result; // ivar: _result


-(id)init;
-(void)executionDidBegin;


@end


#endif
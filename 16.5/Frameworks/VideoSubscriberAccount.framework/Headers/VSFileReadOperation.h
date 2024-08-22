// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSFILEREADOPERATION_H
#define VSFILEREADOPERATION_H

@class NSURL;


#import "VSAsyncOperation.h"
#import "VSOptional.h"

@interface VSFileReadOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result; // ivar: _result
@property (copy, nonatomic) NSURL *source; // ivar: _source


-(id)init;
-(void)executionDidBegin;


@end


#endif
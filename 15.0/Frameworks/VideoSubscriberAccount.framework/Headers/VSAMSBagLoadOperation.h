// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSAMSBAGLOADOPERATION_H
#define VSAMSBAGLOADOPERATION_H

@class NSString, NSError;


#import "VSAsyncOperation.h"

@interface VSAMSBagLoadOperation : VSAsyncOperation

@property (copy, nonatomic) NSString *bagKey; // ivar: _bagKey
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) id *value; // ivar: _value


-(void)executionDidBegin;


@end


#endif
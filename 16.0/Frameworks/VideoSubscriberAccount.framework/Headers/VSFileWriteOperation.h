// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSFILEWRITEOPERATION_H
#define VSFILEWRITEOPERATION_H

@class NSError;


#import "VSAsyncOperation.h"
#import "VSOptional.h"

@interface VSFileWriteOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *data; // ivar: _data
@property (retain, nonatomic) VSOptional *destination; // ivar: _destination
@property (retain, nonatomic) NSError *error; // ivar: _error


-(id)init;
-(void)executionDidBegin;


@end


#endif
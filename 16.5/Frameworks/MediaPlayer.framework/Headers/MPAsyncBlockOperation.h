// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPASYNCBLOCKOPERATION_H
#define MPASYNCBLOCKOPERATION_H



#import "MPAsyncOperation.h"

@interface MPAsyncBlockOperation : MPAsyncOperation

@property (readonly, copy, nonatomic) id *startHandler; // ivar: _startHandler


-(id)initWithStartHandler:(id)arg0 ;
-(void)execute;


@end


#endif
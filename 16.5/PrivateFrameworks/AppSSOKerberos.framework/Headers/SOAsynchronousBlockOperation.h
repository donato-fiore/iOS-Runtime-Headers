// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SOASYNCHRONOUSBLOCKOPERATION_H
#define SOASYNCHRONOUSBLOCKOPERATION_H



#import "SOAsynchronousOperation.h"

@interface SOAsynchronousBlockOperation : SOAsynchronousOperation

@property (copy) id *block; // ivar: _block


-(id)initWithBlock:(id)arg0 ;
-(void)main;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OPERATORTASK_H
#define OPERATORTASK_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface OperatorTask : NSObject

@property (copy) id *operatorBlock; // ivar: _operatorBlock
@property (retain) NSObject<OS_dispatch_queue> *operatorQueue; // ivar: _operatorQueue


-(id)initWithQueue:(id)arg0 withBlock:(id)arg1 ;


@end


#endif
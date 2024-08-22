// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DAWAITERWRAPPER_H
#define DAWAITERWRAPPER_H

@protocol DADataclassLockWatcher;

#import <Foundation/Foundation.h>


@interface DAWaiterWrapper : NSObject

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (nonatomic) NSInteger dataclasses; // ivar: _dataclasses
@property (retain, nonatomic) NSObject<DADataclassLockWatcher> *waiter; // ivar: _waiter
@property (readonly, nonatomic) int waiterNum; // ivar: _waiterNum


-(id)description;
-(id)init;


@end


#endif
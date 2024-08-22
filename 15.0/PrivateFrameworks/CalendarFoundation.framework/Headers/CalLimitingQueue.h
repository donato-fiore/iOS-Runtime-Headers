// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALLIMITINGQUEUE_H
#define CALLIMITINGQUEUE_H

@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface CalLimitingQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
}




-(id)initWithQueue:(id)arg0 andBlock:(id)arg1 ;
-(id)queue;
-(void)executeBlock;


@end


#endif
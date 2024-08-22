// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DECSCHEDULER_H
#define _DECSCHEDULER_H

@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface _DECScheduler : NSObject {
    NSObject<OS_xpc_object> *_executionCriteria;
}


@property (copy, nonatomic) id *block; // ivar: _block


-(id)initWithActivityIdentifier:(id)arg0 andExecutionCriteria:(id)arg1 ;
-(void)forceRun;


@end


#endif
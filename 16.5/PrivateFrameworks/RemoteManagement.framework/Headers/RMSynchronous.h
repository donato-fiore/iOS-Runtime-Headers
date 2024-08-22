// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMSYNCHRONOUS_H
#define RMSYNCHRONOUS_H

@class NSConditionLock;

#import <Foundation/Foundation.h>


@interface RMSynchronous : NSObject {
    NSConditionLock *_lock;
}




-(id)init;
-(void)complete;
-(void)waitForCompletion;


@end


#endif
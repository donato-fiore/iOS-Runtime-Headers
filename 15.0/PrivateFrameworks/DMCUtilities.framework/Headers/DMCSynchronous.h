// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMCSYNCHRONOUS_H
#define DMCSYNCHRONOUS_H

@class NSConditionLock;

#import <Foundation/Foundation.h>


@interface DMCSynchronous : NSObject {
    NSConditionLock *_lock;
}




-(id)init;
-(void)complete;
-(void)waitForCompletion;


@end


#endif
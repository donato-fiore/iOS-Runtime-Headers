// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKREADWRITELOCK_H
#define EKREADWRITELOCK_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface EKReadWriteLock : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)initWithName:(char *)arg0 ;
-(void)performWithReadLock:(id)arg0 ;
-(void)performWithWriteLock:(id)arg0 ;


@end


#endif
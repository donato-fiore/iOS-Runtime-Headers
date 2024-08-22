// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACDKEYCHAINLOCK_H
#define ACDKEYCHAINLOCK_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ACDKeychainLock : NSObject {
    os_unfair_lock_s _containerLock;
    NSMutableDictionary *_locksByServiceUsername;
}




-(id)init;
-(void)lockPerformForService:(id)arg0 username:(id)arg1 block:(id)arg2 ;


@end


#endif
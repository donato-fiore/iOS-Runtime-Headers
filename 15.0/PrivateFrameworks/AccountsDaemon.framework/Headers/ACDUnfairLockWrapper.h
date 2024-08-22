// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACDUNFAIRLOCKWRAPPER_H
#define ACDUNFAIRLOCKWRAPPER_H


#import <Foundation/Foundation.h>


@interface ACDUnfairLockWrapper : NSObject {
    os_unfair_lock_s _lock;
}




-(id)init;


@end


#endif
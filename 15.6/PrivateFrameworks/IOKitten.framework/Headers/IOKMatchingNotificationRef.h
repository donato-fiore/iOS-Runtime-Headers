// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IOKMATCHINGNOTIFICATIONREF_H
#define IOKMATCHINGNOTIFICATIONREF_H


#import <Foundation/Foundation.h>

#import "IOKMatchingNotification.h"

@interface IOKMatchingNotificationRef : NSObject {
    os_unfair_recursive_lock_s _lock;
}


@property (nonatomic) IOKMatchingNotification *notification; // ivar: _notification


-(id)init;
-(void)lock;
-(void)unlock;


@end


#endif
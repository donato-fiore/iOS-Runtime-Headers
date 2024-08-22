// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IOKINTERESTNOTIFICATIONREF_H
#define IOKINTERESTNOTIFICATIONREF_H


#import <Foundation/Foundation.h>

#import "IOKInterestNotification.h"

@interface IOKInterestNotificationRef : NSObject {
    os_unfair_recursive_lock_s _lock;
}


@property (nonatomic) IOKInterestNotification *notification; // ivar: _notification


-(id)init;
-(void)lock;
-(void)unlock;


@end


#endif
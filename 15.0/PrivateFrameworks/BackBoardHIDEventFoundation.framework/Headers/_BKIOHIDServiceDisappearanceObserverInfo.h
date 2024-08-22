// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _BKIOHIDSERVICEDISAPPEARANCEOBSERVERINFO_H
#define _BKIOHIDSERVICEDISAPPEARANCEOBSERVERINFO_H

@protocol BKIOHIDServiceDisappearanceObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _BKIOHIDServiceDisappearanceObserverInfo : NSObject {
    id<BKIOHIDServiceDisappearanceObserver> *_observer;
    NSObject<OS_dispatch_queue> *_queue;
}






@end


#endif
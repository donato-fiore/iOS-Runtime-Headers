// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTSINGLETONHOLDER_H
#define MTSINGLETONHOLDER_H


#import <Foundation/Foundation.h>


@interface MTSingletonHolder : NSObject {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) id *instance; // ivar: _instance




@end


#endif
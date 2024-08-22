// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SESATOMICARRAY_H
#define SESATOMICARRAY_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface SESAtomicArray : NSObject {
    os_unfair_lock_s _lock;
    NSMutableArray *_objects;
}




-(id)init;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLATOMICOBJECT_H
#define PLATOMICOBJECT_H


#import <Foundation/Foundation.h>


@interface PLAtomicObject : NSObject {
    os_unfair_lock_s _lock;
    id *_object;
}




-(id)initWithObject:(id)arg0 ;
-(void)atomicallyPerformBlockAndWait:(id)arg0 ;
-(void)invalidateWithHandler:(id)arg0 ;


@end


#endif
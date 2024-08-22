// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __CARPFOSUNFAIRLOCK_H
#define __CARPFOSUNFAIRLOCK_H



#import "CARPFUnfairLock.h"

@interface __CARPFOSUnfairLock : CARPFUnfairLock {
    os_unfair_lock_s _internal;
    unsigned int _internalOptions;
}




-(id)initWithOptions:(NSUInteger)arg0 ;
-(void)assertNotOwner;
-(void)assertOwner;
-(void)lock;
-(void)performBlock:(id)arg0 ;
-(void)unlock;


@end


#endif
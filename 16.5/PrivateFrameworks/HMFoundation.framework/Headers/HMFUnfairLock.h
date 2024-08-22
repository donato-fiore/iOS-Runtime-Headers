// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMFUNFAIRLOCK_H
#define HMFUNFAIRLOCK_H

@protocol HMFLocking;


#import "HMFObject.h"

@interface HMFUnfairLock : HMFObject <HMFLocking>



@property (readonly) NSUInteger options; // ivar: _options


+(id)lock;
+(id)lockWithOptions:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithOptions:(NSUInteger)arg0 ;
-(void)assertNotOwner;
-(void)assertOwner;
-(void)lock;
-(void)performBlock:(id)arg0 ;
-(void)unlock;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CARPFUNFAIRLOCK_H
#define CARPFUNFAIRLOCK_H

@protocol CARPFLocking;


#import "CARPFObject.h"

@interface CARPFUnfairLock : CARPFObject <CARPFLocking>



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
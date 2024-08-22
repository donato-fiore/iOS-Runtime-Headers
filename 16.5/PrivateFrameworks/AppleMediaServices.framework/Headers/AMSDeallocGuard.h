// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSDEALLOCGUARD_H
#define AMSDEALLOCGUARD_H


#import <Foundation/Foundation.h>


@interface AMSDeallocGuard : NSObject

@property (readonly, copy, nonatomic) id *block; // ivar: _block
@property (readonly, nonatomic) BOOL invalidated; // ivar: _invalidated
@property (readonly, nonatomic) os_unfair_lock_s invalidationLock; // ivar: _invalidationLock


-(id)initWithDeallocGuardBlock:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif
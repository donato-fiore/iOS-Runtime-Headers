// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHDELEGATECONTROLLER_H
#define CHDELEGATECONTROLLER_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface CHDelegateController : NSObject

@property (readonly, nonatomic) os_unfair_lock_s delegateLock; // ivar: _delegateLock
@property (readonly, nonatomic) NSMapTable *delegateToQueue; // ivar: _delegateToQueue


-(id)init;
-(void)addDelegate:(id)arg0 queue:(id)arg1 ;
-(void)enumerateDelegatesUsingBlock:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;


@end


#endif
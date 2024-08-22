// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKCONTEXTSEMAPHORE_H
#define CKCONTEXTSEMAPHORE_H

@protocol NSSecureCoding, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface CKContextSemaphore : NSObject <NSSecureCoding>

 {
    BOOL _semaOwner;
    unsigned int _sema;
    NSUInteger _shmSize;
    *? _shm;
    NSObject<OS_xpc_object> *_shmObject;
}




+(BOOL)supportsSecureCoding;
+(void)initialize;
-(BOOL)busy;
-(BOOL)tryAcquireNeedsIncPending:(BOOL)arg0 ;
-(NSInteger)pending;
-(NSInteger)pendingExceptionsCount;
-(NSInteger)waitFor:(CGFloat)arg0 ;
-(NSUInteger)activeGauge;
-(NSUInteger)gauge;
-(NSUInteger)numAcquired;
-(NSUInteger)requestsServed;
-(NSUInteger)sharedMemorySize;
-(id)initSemaphoreForXPCService;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)decPending;
-(void)encodeWithCoder:(id)arg0 ;
-(void)incPending;
-(void)notify;
-(void)notifyAll;
-(void)resetPending;
-(void)setActiveGauge:(NSUInteger)arg0 ;


@end


#endif
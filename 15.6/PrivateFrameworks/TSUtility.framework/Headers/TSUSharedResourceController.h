// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSUSHAREDRESOURCECONTROLLER_H
#define TSUSHAREDRESOURCECONTROLLER_H

@class NSString, NSCondition;
@protocol TSUSharedResourceControllerDelegate, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface TSUSharedResourceController : NSObject {
    int _acquirerCount;
    id<TSUSharedResourceControllerDelegate> *_delegate;
    NSString *_resourceForThreadKey;
    NSString *_hasResourceForThreadKey;
    NSCondition *_resourceLock;
    id *_resource;
    ? _flags;
    int _threadsAcquiringResourceCount;
    NSCondition *_waitLock;
    int _waitCount;
    NSObject<OS_dispatch_group> *_accessInProgressGroup;
    NSObject<OS_dispatch_group> *_willEndAccessGroup;
}


@property (readonly, nonatomic) NSString *UUID; // ivar: _UUID
@property (nonatomic) BOOL canWaitOnMainThread;


-(BOOL)performSynchronousAccessIfResourceIsAvailable:(BOOL)arg0 usingBlock:(id)arg1 ;
-(BOOL)performSynchronousAccessIfResourceIsAvailableUsingBlock:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithName:(id)arg0 delegate:(id)arg1 ;
-(void)acquireResourceWithLockAndPerformSynchronousAccessUsingBlock:(id)arg0 ;
-(void)dealloc;
-(void)didBeginAccessToResource:(id)arg0 ;
-(void)didBeginAccessToResource:(id)arg0 isFromThreadWaitingToAcquireResource:(BOOL)arg1 ;
-(void)performSynchronousAccessUsingBlock:(id)arg0 ;
-(void)waitForResourceWithLockAndPerformSynchronousAccessUsingBlock:(id)arg0 ;
-(void)wakeUpAllThreadsWaitingForResourceWithLock;
-(void)willEndAccessToResource;
-(void)willEndAccessToResourceForcingToWaitForPendingAccesses:(BOOL)arg0 ;


@end


#endif
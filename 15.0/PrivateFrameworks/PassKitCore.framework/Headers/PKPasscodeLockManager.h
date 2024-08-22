// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPASSCODELOCKMANAGER_H
#define PKPASSCODELOCKMANAGER_H

@class MCProfileConnection, NSHashTable, NSString;
@protocol MCProfileConnectionObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PKPasscodeLockManager : NSObject <MCProfileConnectionObserver>

 {
    MCProfileConnection *_profileConnection;
    BOOL _isPasscodeSet;
    os_unfair_lock_s _lock;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_replyQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isPasscodeSet;
@property (readonly) Class superclass;


+(id)sharedManager;
-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)profileConnectionDidReceivePasscodeChangedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif
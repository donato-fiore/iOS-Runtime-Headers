// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBSSERVICE_H
#define RBSSERVICE_H

@class NSMutableSet, NSString;
@protocol RBSConnectionServiceDelegate, RBSServiceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "RBSConnection.h"

@interface RBSService : NSObject <RBSConnectionServiceDelegate>

 {
    id<RBSServiceDelegate> *_delegate;
    os_unfair_lock_s _lock;
    NSMutableSet *_inheritances;
    RBSConnection *_connection;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)saveEndowment:(id)arg0 forKey:(id)arg1 withError:(*id)arg2 ;
-(id)inheritances;
-(id)init;
-(void)dealloc;
-(void)didLoseInheritances:(id)arg0 ;
-(void)didReceiveInheritances:(id)arg0 ;


@end


#endif
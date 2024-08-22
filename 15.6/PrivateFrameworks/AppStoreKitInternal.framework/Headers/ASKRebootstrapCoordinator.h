// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASKREBOOTSTRAPCOORDINATOR_H
#define ASKREBOOTSTRAPCOORDINATOR_H

@class NSHashTable;

#import <Foundation/Foundation.h>

#import "ASKStorefrontChangeProvider.h"

@interface ASKRebootstrapCoordinator : NSObject

@property (copy, nonatomic) id *appBootstrapHandler; // ivar: _appBootstrapHandler
@property (readonly, nonatomic) ASKStorefrontChangeProvider *changeObserver; // ivar: _changeObserver
@property (nonatomic) NSInteger delayCount; // ivar: _delayCount
@property (readonly, nonatomic) NSHashTable *handlerTokens; // ivar: _handlerTokens
@property (nonatomic) BOOL hasPendingNotification; // ivar: _hasPendingNotification


+(id)sharedCoordinator;
-(id)init;
-(id)registerCleanupHandler:(id)arg0 ;
-(void)beginDelayingNotifications;
-(void)endDelayingNotifications;
-(void)notify;
-(void)registerAppBootstrapHandler:(id)arg0 ;
-(void)scheduleNotification;
-(void)simulateStorefrontChange;


@end


#endif
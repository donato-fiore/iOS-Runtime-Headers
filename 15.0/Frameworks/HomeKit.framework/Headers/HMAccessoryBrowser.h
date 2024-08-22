// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMACCESSORYBROWSER_H
#define HMACCESSORYBROWSER_H

@class HMFUnfairLock, NSString, NSArray, NSUUID;
@protocol HMFMessageReceiver, HMAccessoryBrowserDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMMutableArray.h"
#import "_HMContext.h"

@interface HMAccessoryBrowser : NSObject <HMFMessageReceiver>

 {
    HMFUnfairLock *_lock;
}


@property (retain, nonatomic) HMMutableArray *accessories; // ivar: _accessories
@property (nonatomic, getter=isBrowsing) BOOL browsing; // ivar: _browsing
@property (readonly, nonatomic) _HMContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HMAccessoryBrowserDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *discoveredAccessories;
@property (nonatomic) NSUInteger generationCounter; // ivar: _generationCounter
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


+(id)unconfigureQueue;
-(id)init;
-(void)_fetchNewAccessories;
-(void)_fetchNewAccessoriesWithPrivacyCheck;
-(void)_handleNewAccessoriesFound:(id)arg0 ;
-(void)_handleNewAccessoriesRemoved:(id)arg0 ;
-(void)_registerNotificationHandlers;
-(void)_start;
-(void)_startSearchingForNewAccessories;
-(void)_stopSearchingForNewAccessoriesWithError:(id)arg0 ;
-(void)_updateNewAccessories:(id)arg0 ;
-(void)dealloc;
-(void)handleStartWithError:(id)arg0 response:(id)arg1 ;
-(void)startSearchingForNewAccessories;
-(void)stopSearchingForNewAccessories;
-(void)stopSearchingForNewAccessoriesWithError:(id)arg0 ;


@end


#endif
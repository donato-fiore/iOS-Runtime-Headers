// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDREMOTEHOMEMESSAGINGMANAGER_H
#define HMDREMOTEHOMEMESSAGINGMANAGER_H

@class NSString, NSMapTable;
@protocol HMFLogging, HMDRemoteHomeMessagingManager;

#import <Foundation/Foundation.h>


@interface HMDRemoteHomeMessagingManager : NSObject <HMFLogging, HMDRemoteHomeMessagingManager>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMapTable *homeUUIDToHandlerMap; // ivar: _homeUUIDToHandlerMap
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)sendMessage:(id)arg0 completionHandler:(id)arg1 ;
-(id)init;
-(void)registerHandler:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMEPRIMARYRESIDENTMESSAGINGHANDLERDEFAULTDATASOURCE_H
#define HMDHOMEPRIMARYRESIDENTMESSAGINGHANDLERDEFAULTDATASOURCE_H

@class NSString, NSNotificationCenter;
@protocol HMDHomePrimaryResidentMessagingHandlerDataSource, HMDTimerManager;

#import <Foundation/Foundation.h>


@interface HMDHomePrimaryResidentMessagingHandlerDefaultDataSource : NSObject <HMDHomePrimaryResidentMessagingHandlerDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HMDTimerManager> *timerManager; // ivar: _timerManager


-(id)init;


@end


#endif
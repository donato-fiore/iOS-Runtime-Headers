// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMMESSAGENOTIFICATIONTIMEMANAGER_H
#define IMMESSAGENOTIFICATIONTIMEMANAGER_H

@class BKSApplicationStateMonitor, NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface IMMessageNotificationTimeManager : NSObject

@property (retain, nonatomic) BKSApplicationStateMonitor *appStateMonitor; // ivar: _appStateMonitor
@property (retain, nonatomic) NSMutableDictionary *chatsStartTimeDictionary; // ivar: _chatsStartTimeDictionary
@property (retain, nonatomic) NSString *latestIDSTokenURI; // ivar: _latestIDSTokenURI


+(id)sharedInstance;
-(BOOL)_isToneToggleSwitchOn;
-(BOOL)_shouldSendNotificationForChatIdentifier:(id)arg0 ;
-(NSInteger)_getTimeWindowOverride;
-(NSInteger)_getToneTimeWindow;
-(id)init;
-(void)acquireAssertionToUnsuspendProcess;
-(void)dealloc;
-(void)sendNotificationMessageIfNeededForIncomingMessageFromChatIdentifier:(id)arg0 ;
-(void)setDate:(id)arg0 forChatIdentifier:(id)arg1 ;
-(void)setLatestNotificationIDSTokenURI:(id)arg0 ;
-(void)tearDownSessionForChatIdentifier:(id)arg0 ;


@end


#endif
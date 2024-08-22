// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMUSERNOTIFICATIONCENTER_H
#define IMUSERNOTIFICATIONCENTER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface IMUserNotificationCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *identifierToBlockQueueMap; // ivar: _identifierToBlockQueueMap
@property (retain, nonatomic) NSMutableDictionary *identifierToCFUserNotificationMap; // ivar: _identifierToCFUserNotificationMap
@property (retain, nonatomic) NSMutableDictionary *identifierToIMUserNotificationQueueMap; // ivar: _identifierToIMUserNotificationQueueMap
@property (retain, nonatomic) NSMutableDictionary *identifierToListenerQueueMap; // ivar: _identifierToListenerQueueMap
@property (retain, nonatomic) NSMutableDictionary *identifierToRunLoopSourcesMap; // ivar: _identifierToRunLoopSourcesMap


+(id)sharedInstance;
-(NSUInteger)countForIdentifier:(id)arg0 ;
-(id)_dequeueBlockForIdentifier:(SEL)arg0 ;
-(id)_dequeueListenerForIdentifier:(id)arg0 ;
-(id)_dequeueUserNotificationForIdentifier:(id)arg0 ;
-(id)_frontBlockForIdentifier:(SEL)arg0 ;
-(id)_frontListenerForIdentifier:(id)arg0 ;
-(id)_frontUserNotificationForIdentifier:(id)arg0 ;
-(void)_cancelActiveUserNotificationForIdentifier:(id)arg0 ;
-(void)_displayNextUserNotificationForIdentifier:(id)arg0 ;
// -(void)_enqueueBlock:(id)arg0 forIdentifier:(unk)arg1  ;
-(void)_enqueueListener:(id)arg0 forIdentifier:(id)arg1 ;
-(void)_enqueueUserNotification:(id)arg0 forIdentifier:(id)arg1 ;
-(void)_handleUserNotification:(struct __CFUserNotification *)arg0 responseFlags:(NSUInteger)arg1 ;
-(void)addUserNotification:(id)arg0 listener:(id)arg1 ;
-(void)addUserNotification:(id)arg0 listener:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeAllListeners;
-(void)removeListener:(id)arg0 ;
-(void)removeNotificationsForServiceIdentifier:(id)arg0 ;


@end


#endif
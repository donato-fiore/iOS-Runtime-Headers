// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VMLEGACYACCOUNT_H
#define VMLEGACYACCOUNT_H


#import <Foundation/Foundation.h>

#import "VMVoicemailManager.h"

@interface VMLegacyAccount : NSObject

@property (retain, nonatomic) VMVoicemailManager *voicemailManager; // ivar: _voicemailManager


-(BOOL)greetingAvailable;
-(BOOL)isMessageWaiting;
-(BOOL)isOfflineDueToRoaming;
-(BOOL)isOnline;
-(BOOL)isSubscribed;
-(id)allVoicemailsWithFlags:(NSUInteger)arg0 withoutFlags:(NSUInteger)arg1 ;
-(id)init;
-(id)voicemailWithIdentifier:(NSUInteger)arg0 ;
-(int)mailboxUsage;
-(unsigned int)recentUnreadCount;
-(unsigned int)unreadCount;
-(void)handlePasswordNotificationResponse:(id)arg0 ;
-(void)moveVoicemailFromTrash:(id)arg0 ;
-(void)moveVoicemailToTrash:(id)arg0 ;
-(void)setGreetingType:(NSInteger)arg0 withData:(id)arg1 duration:(unsigned int)arg2 ;
-(void)setProvisionalPassword:(id)arg0 ;
-(void)synchronize:(BOOL)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFSIRICONTROLLER_H
#define SFSIRICONTROLLER_H

@class NSString;
@protocol SFSiriControllerInterface;

#import <Foundation/Foundation.h>


@interface SFSiriController : NSObject <SFSiriControllerInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)hasUserSeenAnnounceCallsOptOutScreen;
+(BOOL)hasUserSeenAnnounceMessagesOptOutScreen;
+(BOOL)hasUserSeenAnnounceNotificationsOptOutScreen;
+(BOOL)isAnnounceEnabledForHeadphones;
+(BOOL)isAnnounceMessagesEnabled;
+(BOOL)isAnnounceMessagesSupported;
+(BOOL)isAnnounceSupported;
+(BOOL)isCurrentLocaleSupported;
+(BOOL)isHeySiriEnabled;
+(BOOL)isSiriAllowedWhileLocked;
+(BOOL)isSiriEnabled;
+(BOOL)shouldPromptForAnnounceCallsForProductID:(unsigned int)arg0 supportsInEarDetection:(BOOL)arg1 isUpsellFlow:(BOOL)arg2 ;
+(BOOL)shouldPromptForAnnounceMessagesForProductID:(unsigned int)arg0 isUpsellFlow:(BOOL)arg1 ;
+(BOOL)shouldPromptForAnnounceNotificationsForProductID:(unsigned int)arg0 isUpsellFlow:(BOOL)arg1 ;
+(NSInteger)announceCallsState;
+(void)setAnnounceCallsState:(NSInteger)arg0 ;
+(void)setAnnounceMessagesEnabled:(BOOL)arg0 ;
+(void)setHasUserSeenAnnounceCallsOptOutScreen:(BOOL)arg0 ;
+(void)setHasUserSeenAnnounceMessagesOptOutScreen:(BOOL)arg0 ;
+(void)setHasUserSeenAnnounceNotificationsOptOutScreen:(BOOL)arg0 ;


@end


#endif
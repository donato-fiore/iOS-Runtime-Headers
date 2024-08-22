// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICMENTIONNOTIFICATIONCONTROLLER_H
#define ICMENTIONNOTIFICATIONCONTROLLER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICMentionNotificationController : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationSerialQueue;


+(id)coalesceMentions:(id)arg0 ;
+(id)noteTitleForMentions:(id)arg0 ;
+(id)pendingMentionsInContext:(id)arg0 createdBeforeDate:(id)arg1 ;
+(id)predicateForMentionsInState:(int)arg0 inContext:(id)arg1 ;
+(id)sameNoteMentionsFrom:(id)arg0 ;
+(id)senderNameForMentions:(id)arg0 ;
+(id)sharedController;
+(id)snippetForMentions:(id)arg0 ;
+(struct _NSRange )rangeOfMention:(id)arg0 ;
+(struct _NSRange )rangeOfParagraphForMention:(id)arg0 ;
+(struct _NSRange )rangeOfSentenceAfterMention:(id)arg0 ;
+(struct _NSRange )rangeOfSentenceBeforeMention:(id)arg0 ;
+(struct _NSRange )rangeOfSentenceForMention:(id)arg0 ;
+(struct _NSRange )rangeOfSnippetForMentions:(id)arg0 ;
+(void)triggerNotificationForMentionAttachments:(id)arg0 context:(id)arg1 ;
-(void)applicationDidEnterBackground;
-(void)listenForReachabilityChange;
-(void)reachabilityChanged:(id)arg0 ;
-(void)sendPendingNotifications;
-(void)sendPendingNotificationsCreatedBefore:(id)arg0 ;


@end


#endif
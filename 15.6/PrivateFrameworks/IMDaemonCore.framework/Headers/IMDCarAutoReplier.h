// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMDCARAUTOREPLIER_H
#define IMDCARAUTOREPLIER_H

@class CARAutomaticDNDStatus, NSString, NSMutableDictionary;
@protocol IMDAutoReplying, IMDAutoReplyDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IMDCarAutoReplier : NSObject <IMDAutoReplying>

 {
    id<IMDAutoReplyDelegate> *_replyDelegate;
}


@property (retain, nonatomic) CARAutomaticDNDStatus *automaticDNDStatus; // ivar: _automaticDNDStatus
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *propertiesForChatIdentifiers; // ivar: _propertiesForChatIdentifiers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (weak, nonatomic) NSObject<IMDAutoReplyDelegate> *replyDelegate;
@property (readonly) Class superclass;


-(BOOL)_audience:(NSUInteger)arg0 allowsRepliesToChat:(id)arg1 ;
-(BOOL)_contactsContainsParticipants:(id)arg0 ;
-(BOOL)_favoritesContainsParticipants:(id)arg0 ;
-(BOOL)_hasRecentOutgoingMessagesInChat:(id)arg0 ;
-(BOOL)_isActive;
-(BOOL)_urgentTriggerMatchInText:(id)arg0 ;
-(NSUInteger)_autoReplyAudiencePreference;
-(id)_customizedAutoReplyMessage;
-(id)_propertiesForChat:(id)arg0 ;
-(id)init;
-(void)_handleGeneratedAutoReplyText:(id)arg0 forChat:(id)arg1 ;
-(void)_handleReceivedUrgentRequestForMessages:(id)arg0 ;
-(void)_updateDNDStatus;
-(void)dealloc;
-(void)processMessages:(id)arg0 inChat:(id)arg1 fromIDSID:(id)arg2 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDCOLLABORATIONNOTICECONTROLLER_H
#define IMDCOLLABORATIONNOTICECONTROLLER_H

@class NSString, SWHighlightCenter, NSSet, NSDictionary;
@protocol SWHighlightCenterDelegate, IMDCollaborationNoticeDispatcherDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "IMDCollaborationNoticeDispatcher.h"
#import "IMDCollaborationNoticeStore.h"

@interface IMDCollaborationNoticeController : NSObject <SWHighlightCenterDelegate, IMDCollaborationNoticeDispatcherDelegate>



@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *collaborationNoticeDispatcherQueue; // ivar: _collaborationNoticeDispatcherQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasPopulatedHighlightTracking; // ivar: _hasPopulatedHighlightTracking
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SWHighlightCenter *highlightCenter; // ivar: _highlightCenter
@property (retain, nonatomic) NSSet *highlightURLs; // ivar: _highlightURLs
@property (retain, nonatomic) NSDictionary *highlightURLsForChatGUID; // ivar: _highlightURLsForChatGUID
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *mappingChatsToHighlightsQueue; // ivar: _mappingChatsToHighlightsQueue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *noticeDataQueue; // ivar: _noticeDataQueue
@property (readonly, nonatomic) IMDCollaborationNoticeDispatcher *noticeDispatcher; // ivar: _noticeDispatcher
@property (retain, nonatomic) IMDCollaborationNoticeStore *noticeStore; // ivar: _noticeStore
@property (readonly) Class superclass;


+(id)sharedController;
-(BOOL)_hasAdministrativePrivilegesForHighlight:(id)arg0 chatGUID:(id)arg1 ;
-(BOOL)_highlightEligibleForSuggestAddingUser:(id)arg0 ;
-(id)init;
-(id)noticesForChatGUID:(id)arg0 ;
-(void)_chatGUIDsForNotice:(id)arg0 completionBlock:(id)arg1 ;
-(void)_chatGUIDsForNoticeURL:(id)arg0 completionBlock:(id)arg1 ;
-(void)_generateParticipantChangeNoticesForChat:(id)arg0 highlight:(id)arg1 participant:(id)arg2 noticeType:(NSInteger)arg3 checkedPrivileges:(BOOL)arg4 messageGUID:(id)arg5 ;
-(void)_generateParticipantChangeNoticesForChat:(id)arg0 highlights:(id)arg1 participants:(id)arg2 noticeType:(NSInteger)arg3 ;
-(void)_handleChatParticipantsDidChange:(id)arg0 ;
-(void)_isShareBearURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)_mapChatGUIDsToHighlight:(id)arg0 completionBlock:(id)arg1 ;
-(void)_processNotice:(id)arg0 ;
-(void)_shouldPostParticipantChangeNoticesForChat:(id)arg0 withParticipants:(id)arg1 forNoticeType:(NSInteger)arg2 ;
-(void)_updateMappingHighlightsToChats;
-(void)broadcastNoticesDidChangeForChatGUIDs:(id)arg0 ;
-(void)dismissNotice:(id)arg0 ;
-(void)dispatcher:(id)arg0 didReceiveDismissalReflectionForNoticeGUIDs:(id)arg1 ;
-(void)dispatcher:(id)arg0 didReceiveDismissalRequest:(id)arg1 fromID:(id)arg2 ;
-(void)dispatcher:(id)arg0 didReceiveNotice:(id)arg1 fromID:(id)arg2 ;
-(void)highlightCenterHighlightsDidChange:(id)arg0 ;
-(void)receiveHighlightEvent:(id)arg0 fromSender:(id)arg1 guidString:(id)arg2 date:(id)arg3 ;
-(void)updateNotice:(id)arg0 ;


@end


#endif
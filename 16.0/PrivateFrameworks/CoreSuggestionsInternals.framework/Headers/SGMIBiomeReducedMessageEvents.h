// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGMIBIOMEREDUCEDMESSAGEEVENTS_H
#define SGMIBIOMEREDUCEDMESSAGEEVENTS_H


#import <Foundation/Foundation.h>


@interface SGMIBiomeReducedMessageEvents : NSObject

@property (readonly, nonatomic) CGFloat firstAppLaunchFollowingFetch; // ivar: _firstAppLaunchFollowingFetch
@property (readonly, nonatomic) BOOL forwardDraftStarted; // ivar: _forwardDraftStarted
@property (readonly, nonatomic) BOOL linkClicked; // ivar: _linkClicked
@property (readonly, nonatomic) BOOL mailGotFlagged; // ivar: _mailGotFlagged
@property (readonly, nonatomic) BOOL markedAsJunk; // ivar: _markedAsJunk
@property (readonly, nonatomic) BOOL markedAsRead; // ivar: _markedAsRead
@property (readonly, nonatomic) BOOL markedAsUnread; // ivar: _markedAsUnread
@property (readonly, nonatomic) CGFloat messageFetchTime; // ivar: _messageFetchTime
@property (readonly, nonatomic) unsigned int messageViewCount; // ivar: _messageViewCount
@property (readonly, nonatomic) CGFloat messageViewMaxDwellTime; // ivar: _messageViewMaxDwellTime
@property (readonly, nonatomic) CGFloat messageViewTotalDwellTime; // ivar: _messageViewTotalDwellTime
@property (readonly, nonatomic) unsigned int numberOfMailsViewedBeforeSinceAvailable; // ivar: _numberOfMailsViewedBeforeSinceAvailable
@property (readonly, nonatomic) unsigned int numberOfMoreRecentUnreadMessageAtFirstViewTime; // ivar: _numberOfMoreRecentUnreadMessageAtFirstViewTime
@property (readonly, nonatomic) unsigned int numberOfUnreadMessageAtFirstViewTime; // ivar: _numberOfUnreadMessageAtFirstViewTime
@property (readonly, nonatomic) BOOL replyDraftStarted; // ivar: _replyDraftStarted
@property (readonly, nonatomic) BOOL scrolledToEnd; // ivar: _scrolledToEnd
@property (readonly, nonatomic) CGFloat timeBeforeViewStartSinceAvailable; // ivar: _timeBeforeViewStartSinceAvailable
@property (readonly, nonatomic) BOOL userReplied; // ivar: _userReplied


-(CGFloat)messageAvailableTime;
-(id)init;
-(id)initWithScrolledToEnd:(BOOL)arg0 messageViewMaxDwellTime:(CGFloat)arg1 messageViewTotalDwellTime:(CGFloat)arg2 messageViewCount:(unsigned int)arg3 timeBeforeViewStartSinceAvailable:(CGFloat)arg4 numberOfMailsViewedBeforeSinceAvailable:(unsigned int)arg5 userReplied:(BOOL)arg6 replyDraftStarted:(BOOL)arg7 forwardDraftStarted:(BOOL)arg8 numberOfUnreadMessageAtFirstViewTime:(unsigned int)arg9 numberOfMoreRecentUnreadMessageAtFirstViewTime:(unsigned int)arg10 markedAsRead:(BOOL)arg11 markedAsUnread:(BOOL)arg12 markedAsJunk:(BOOL)arg13 mailGotFlagged:(BOOL)arg14 linkClicked:(BOOL)arg15 ;
-(void)incrementNumberOfMailsViewedBeforeSinceAvailable;
-(void)incrementNumberOfMoreRecentUnreadMessageAtFirstViewTime;
-(void)updateWithAppLaunchAtTime:(CGFloat)arg0 ;
-(void)updateWithEvent:(id)arg0 eventTimestamp:(CGFloat)arg1 ;
-(void)updateWithFlagChangedEvent;
-(void)updateWithMessageFetchedEventAtTime:(CGFloat)arg0 ;
-(void)updateWithMessageMovedEventWithPayload:(id)arg0 ;
-(void)updateWithReadChangedEventWithPayload:(id)arg0 ;
-(void)updateWithViewEndWithPayload:(id)arg0 ;
-(void)updateWithViewStartAtTime:(CGFloat)arg0 unreadMessageCount:(unsigned int)arg1 ;


@end


#endif
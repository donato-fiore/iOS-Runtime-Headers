// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC14FAMILYCIRCLEUI21FAMILYINVITEANALYTICS_H
#define _TTC14FAMILYCIRCLEUI21FAMILYINVITEANALYTICS_H


#import <Foundation/Foundation.h>


@interface _TtC14FamilyCircleUI21FamilyInviteAnalytics : NSObject



+(id)shared;
-(id)init;
-(void)sendFamilyInviteInteractionEventWithAction:(id)arg0 inviteState:(id)arg1 isReceiver:(BOOL)arg2 ;
-(void)sendFamilyInviteStatusUpdateEventWithUpdateStatus:(id)arg0 success:(BOOL)arg1 ;
-(void)sendFamilySuggestionsEventWithFamilySuggestionsCount:(NSInteger)arg0 hasBoostedContacts:(BOOL)arg1 ;
-(void)sendOtherContactInvitedEventWithInviteTransport:(id)arg0 inviteCompletionStatus:(NSInteger)arg1 ;
-(void)sendSuggestedContactInvitedEventWithInviteCompletionStatus:(NSInteger)arg0 ;
-(void)sendTapInviteOnSuggestedContactEvent;
-(void)sendTapInviteOthersEvent;


@end


#endif
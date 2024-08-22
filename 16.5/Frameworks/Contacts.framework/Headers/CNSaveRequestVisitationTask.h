// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNSAVEREQUESTVISITATIONTASK_H
#define CNSAVEREQUESTVISITATIONTASK_H

@class CNTask;
@protocol CNChangeHistoryEventVisitorPrivate;


#import "CNChangeHistoryEventFactory.h"
#import "CNSaveRequest.h"

@interface CNSaveRequestVisitationTask : CNTask

@property (readonly) CNChangeHistoryEventFactory *factory; // ivar: _factory
@property (readonly) CNSaveRequest *saveRequest; // ivar: _saveRequest
@property (readonly) NSObject<CNChangeHistoryEventVisitorPrivate> *visitor; // ivar: _visitor


-(id)initWithSaveRequest:(id)arg0 visitor:(id)arg1 factory:(id)arg2 ;
-(id)run:(*id)arg0 ;
-(void)sendAddMemberToGroupEvents;
-(void)sendAddSubgroupToGroupEvents;
-(void)sendAddedContactEvents;
-(void)sendAddedGroupEvents;
-(void)sendDeletedContactEvents;
-(void)sendDeletedGroupEvents;
-(void)sendDifferentMeCardEvent;
-(void)sendLinkContactsEvents;
-(void)sendPreferredContactForImageEvents;
-(void)sendPreferredContactForNameEvents;
-(void)sendRemoveMemberFromGroupEvents;
-(void)sendRemoveSubgroupFromGroupEvents;
-(void)sendUnlinkContactEvents;
-(void)sendUpdatedContactEvents;
-(void)sendUpdatedGroupEvents;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUEDITOUTGOINGINVITATIONITEMMANAGER_H
#define HUEDITOUTGOINGINVITATIONITEMMANAGER_H

@class HFItemManager, NSString, HFStaticItem, HMOutgoingHomeInvitation;
@protocol HUUserItemManager;



@interface HUEditOutgoingInvitationItemManager : HFItemManager <HUUserItemManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFStaticItem *inviteAgainItem; // ivar: _inviteAgainItem
@property (readonly, nonatomic) HMOutgoingHomeInvitation *outgoingInvitation;
@property (retain, nonatomic) HFStaticItem *removeItem; // ivar: _removeItem
@property (readonly) Class superclass;


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_removeTitleForInvitationState:(NSInteger)arg0 ;


@end


#endif
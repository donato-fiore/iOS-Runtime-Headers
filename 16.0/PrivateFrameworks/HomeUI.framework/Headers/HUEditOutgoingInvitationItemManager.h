// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUEDITOUTGOINGINVITATIONITEMMANAGER_H
#define HUEDITOUTGOINGINVITATIONITEMMANAGER_H

@class HFItemManager, NSString, HFStaticItem, HMOutgoingHomeInvitation, HMHome;
@protocol HUUserItemManager;



@interface HUEditOutgoingInvitationItemManager : HFItemManager <HUUserItemManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFStaticItem *inviteAgainItem; // ivar: _inviteAgainItem
@property (readonly, nonatomic) HMOutgoingHomeInvitation *outgoingInvitation;
@property (retain, nonatomic) HMHome *overrideHome; // ivar: _overrideHome
@property (retain, nonatomic) HFStaticItem *removeItem; // ivar: _removeItem
@property (readonly) Class superclass;


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_homeFuture;
-(id)_removeTitleForInvitationState:(NSInteger)arg0 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 home:(id)arg2 ;


@end


#endif
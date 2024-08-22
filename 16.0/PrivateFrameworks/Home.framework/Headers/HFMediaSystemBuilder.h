// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFMEDIASYSTEMBUILDER_H
#define HFMEDIASYSTEMBUILDER_H

@class NSSet, NSArray, NSString, HMAccessory, HMMediaSystemBuilder, HMMediaSystem, HMUser;
@protocol HFServiceLikeBuilder, HFMediaAccountArbitratingBuilderProtocol, HFIconDescriptor;


#import "HFItemBuilder.h"
#import "HFAppleMusicAccountArbitrator.h"
#import "HFNamingComponents.h"
#import "HFRoomBuilder.h"

@interface HFMediaSystemBuilder : HFItemBuilder <HFServiceLikeBuilder, HFMediaAccountArbitratingBuilderProtocol>



@property (readonly, nonatomic) NSSet *accessories;
@property (retain, nonatomic) HFAppleMusicAccountArbitrator *accountArbitrator; // ivar: _accountArbitrator
@property (readonly, nonatomic) NSArray *availableIconDescriptors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HMAccessory *firstSetupSourceAccessory; // ivar: _firstSetupSourceAccessory
@property (nonatomic) BOOL hasSetRoom; // ivar: _hasSetRoom
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMMediaSystemBuilder *homeKitMediaSystemBuilder; // ivar: _homeKitMediaSystemBuilder
@property (retain, nonatomic) NSObject<HFIconDescriptor> *iconDescriptor; // ivar: _iconDescriptor
@property (nonatomic) BOOL isCreatingMediaSystem; // ivar: _isCreatingMediaSystem
@property (nonatomic) BOOL isFavorite; // ivar: _isFavorite
@property (readonly, nonatomic) HMMediaSystem *mediaSystem;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HFNamingComponents *namingComponent; // ivar: _namingComponent
@property (readonly, nonatomic) NSString *originalName;
@property (retain, nonatomic) HMUser *preferredMediaUser; // ivar: _preferredMediaUser
@property (retain, nonatomic) HFRoomBuilder *room;
@property (retain, nonatomic) HFRoomBuilder *roomBuilder; // ivar: _roomBuilder
@property (nonatomic) BOOL showInHomeDashboard; // ivar: _showInHomeDashboard
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFavoriting;


+(Class)homeKitRepresentationClass;
-(BOOL)shouldAllowAddingAccessory:(id)arg0 ;
-(BOOL)stereoPairVersionMatchesForAccessory:(id)arg0 ;
-(BOOL)swapRoles;
-(id)_arbitrateMusicAccount;
-(id)_commitChangesToMediaSystemBuilder;
-(id)_defaultName;
-(id)_firstUnpopulatedRole;
-(id)_setHomeTheaterSource:(id)arg0 toDestination:(id)arg1 ;
-(id)_updateAssistantAccessControl;
-(id)_updatePreferredMediaUser;
-(id)_updateRoom;
-(id)_updateSiriLanguageOptionsManager;
-(id)_updateValueForContextType:(NSUInteger)arg0 ;
-(id)accessoryForRole:(id)arg0 ;
-(id)commitItem;
-(id)initWithExistingObject:(id)arg0 inHome:(id)arg1 ;
-(id)removeItemFromHome;
-(id)roleForAccessory:(id)arg0 ;
-(void)addAccessory:(id)arg0 ;
-(void)addAccessory:(id)arg0 role:(id)arg1 ;
-(void)removeAccessory:(id)arg0 ;


@end


#endif
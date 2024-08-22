// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFMEDIAGROUPBUILDER_H
#define HFMEDIAGROUPBUILDER_H

@class NSSet, NSArray, NSMutableArray, NSString, HMMediaGroup;
@protocol HFServiceLikeBuilder, HFMediaAccountArbitratingBuilderProtocol, HFIconDescriptor;


#import "HFItemBuilder.h"
#import "HFAppleMusicAccountArbitrator.h"
#import "HFNamingComponents.h"
#import "HFRoomBuilder.h"

@interface HFMediaGroupBuilder : HFItemBuilder <HFServiceLikeBuilder, HFMediaAccountArbitratingBuilderProtocol>



@property (readonly, nonatomic) NSSet *accessories;
@property (retain, nonatomic) HFAppleMusicAccountArbitrator *accountArbitrator; // ivar: _accountArbitrator
@property (readonly, nonatomic) NSArray *availableIconDescriptors;
@property (retain, nonatomic) NSMutableArray *componentDestinations; // ivar: _componentDestinations
@property (retain, nonatomic) NSString *configuredName; // ivar: _configuredName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *firstSelectedMediaDestinationIdentifier; // ivar: _firstSelectedMediaDestinationIdentifier
@property (nonatomic) BOOL hasSetRoom; // ivar: _hasSetRoom
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<HFIconDescriptor> *iconDescriptor; // ivar: _iconDescriptor
@property (nonatomic) BOOL isCreatingMediaGroup; // ivar: _isCreatingMediaGroup
@property (nonatomic) BOOL isFavorite; // ivar: _isFavorite
@property (readonly, nonatomic) HMMediaGroup *mediaGroup;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HFNamingComponents *namingComponent; // ivar: _namingComponent
@property (readonly, nonatomic) NSString *originalName;
@property (retain, nonatomic) HFRoomBuilder *room;
@property (retain, nonatomic) HFRoomBuilder *roomBuilder; // ivar: _roomBuilder
@property (nonatomic) BOOL showInHomeDashboard; // ivar: _showInHomeDashboard
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFavoriting;


+(Class)homeKitRepresentationClass;
-(BOOL)areMultipleSpeakersSelected;
-(BOOL)isFirstSelectedMediaDestination:(id)arg0 ;
-(BOOL)shouldMakeStereoPairInstead;
-(id)_arbitrateMusicAccount;
-(id)_commitChangesToMediaGroupBuilder;
-(id)_defaultName;
-(id)_updateAssistantAccessControl;
-(id)_updateRooms;
-(id)_updateValueForContextType:(NSUInteger)arg0 ;
-(id)commitItem;
-(id)initWithMediaProfileContainer:(id)arg0 inHome:(id)arg1 ;
-(id)removeItemFromHome;
-(void)addDestination:(id)arg0 ;
-(void)removeDestination:(id)arg0 ;


@end


#endif
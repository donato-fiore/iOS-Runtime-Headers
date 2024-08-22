// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFSERVICEBUILDER_H
#define HFSERVICEBUILDER_H

@class NSString, NSArray, HMService;
@protocol HFServiceLikeBuilder, HFNamedItemBuilder, HFIconDescriptor;


#import "HFItemBuilder.h"
#import "HFNamingComponents.h"
#import "HFRoomBuilder.h"

@interface HFServiceBuilder : HFItemBuilder <HFServiceLikeBuilder, HFNamedItemBuilder>



@property (copy, nonatomic) NSString *accessoryName; // ivar: _accessoryName
@property (copy, nonatomic) NSString *associatedServiceType; // ivar: _associatedServiceType
@property (readonly, nonatomic) NSArray *availableIconDescriptors;
@property (nonatomic) NSInteger configurationState; // ivar: _configurationState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<HFIconDescriptor> *iconDescriptor; // ivar: _iconDescriptor
@property (nonatomic) BOOL isFavorite; // ivar: isFavorite
@property (copy, nonatomic) NSString *name; // ivar: name
@property (retain, nonatomic) HFNamingComponents *namingComponent; // ivar: _namingComponent
@property (readonly, nonatomic) NSString *originalName;
@property (retain, nonatomic) HFRoomBuilder *room; // ivar: room
@property (readonly, nonatomic) HMService *service;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFavoriting;


+(Class)homeKitRepresentationClass;
-(BOOL)_shouldUpdateNilNameWithRoomName;
-(id)_lazilyUpdateAssociatedServiceType;
-(id)_lazilyUpdateConfigurationState;
-(id)_lazilyUpdateDateAdded;
-(id)_lazilyUpdateFavorite;
-(id)_lazilyUpdateIcon;
-(id)_lazilyUpdateName;
-(id)_lazilyUpdateRoom;
-(id)_performValidation;
-(id)accessories;
-(id)commitItem;
-(id)initWithExistingObject:(id)arg0 inHome:(id)arg1 ;
-(id)removeItemFromHome;


@end


#endif
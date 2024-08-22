// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFSERVICEGROUPBUILDER_H
#define HFSERVICEGROUPBUILDER_H

@class NSArray, NSString, HMServiceGroup;
@protocol HFServiceLikeBuilder, HFIconDescriptor;


#import "HFItemBuilder.h"
#import "HFRoomBuilder.h"
#import "HFMutableSetDiff.h"

@interface HFServiceGroupBuilder : HFItemBuilder <HFServiceLikeBuilder>



@property (readonly, nonatomic) NSArray *availableIconDescriptors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasSetIcon; // ivar: _hasSetIcon
@property (nonatomic) BOOL hasSetRoom; // ivar: _hasSetRoom
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<HFIconDescriptor> *iconDescriptor; // ivar: _iconDescriptor
@property (nonatomic) BOOL isFavorite; // ivar: isFavorite
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *originalName;
@property (readonly, nonatomic) NSString *primaryServiceType;
@property (retain, nonatomic) HFRoomBuilder *room;
@property (retain, nonatomic) HFRoomBuilder *roomBuilder; // ivar: _roomBuilder
@property (readonly, nonatomic) HMServiceGroup *serviceGroup;
@property (readonly, nonatomic) HFMutableSetDiff *serviceUUIDs; // ivar: _serviceUUIDs
@property (readonly, nonatomic) NSArray *services;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFavoriting;


+(Class)homeKitRepresentationClass;
-(BOOL)_supportsCustomIcons;
-(BOOL)shouldAllowAddingService:(id)arg0 ;
-(id)_createServiceGroup;
-(id)_mostCommonIconDescriptor;
-(id)_performValidation;
-(id)_updateFavorite;
-(id)_updateIcon;
-(id)_updateName;
-(id)_updateRooms;
-(id)_updateServices;
-(id)accessories;
-(id)commitItem;
-(id)initWithExistingObject:(id)arg0 inHome:(id)arg1 ;
-(id)removeItemFromHome;
-(void)addService:(id)arg0 ;
-(void)removeService:(id)arg0 ;


@end


#endif
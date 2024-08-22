// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFROOMBUILDER_H
#define HFROOMBUILDER_H

@class NSSet, NSString, HMRoom;
@protocol HFNamedItemBuilder;


#import "HFItemBuilder.h"
#import "HFMutableSetDiff.h"
#import "HFWallpaperEditCollectionBuilder.h"

@interface HFRoomBuilder : HFItemBuilder <HFNamedItemBuilder>



@property (readonly, nonatomic) NSSet *accessories;
@property (retain, nonatomic) HFMutableSetDiff *accessoryUUIDs; // ivar: _accessoryUUIDs
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) HMRoom *room;
@property (readonly) Class superclass;
@property (retain, nonatomic) HFWallpaperEditCollectionBuilder *wallpaperBuilder; // ivar: _wallpaperBuilder


+(Class)homeKitRepresentationClass;
-(BOOL)isEqual:(id)arg0 ;
-(id)_createRoom;
-(id)_performValidation;
-(id)_updateAccessories;
-(id)_updateName;
-(id)commitItem;
-(id)initWithExistingObject:(id)arg0 inHome:(id)arg1 ;
-(void)addAccessory:(id)arg0 ;
-(void)removeAccessory:(id)arg0 ;


@end


#endif
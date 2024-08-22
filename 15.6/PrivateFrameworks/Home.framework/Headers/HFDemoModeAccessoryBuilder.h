// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFDEMOMODEACCESSORYBUILDER_H
#define HFDEMOMODEACCESSORYBUILDER_H

@class HMAccessory, NSArray, NSString;
@protocol HFServiceLikeBuilder, HFIconDescriptor;


#import "HFItemBuilder.h"
#import "HFNamingComponents.h"
#import "HFRoomBuilder.h"

@interface HFDemoModeAccessoryBuilder : HFItemBuilder <HFServiceLikeBuilder>



@property (readonly, nonatomic) HMAccessory *accessory;
@property (readonly, nonatomic) NSArray *availableIconDescriptors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<HFIconDescriptor> *iconDescriptor;
@property (nonatomic) BOOL isFavorite; // ivar: isFavorite
@property (copy, nonatomic) NSString *name; // ivar: name
@property (retain, nonatomic) HFNamingComponents *namingComponent; // ivar: _namingComponent
@property (readonly, nonatomic) NSString *originalName;
@property (retain, nonatomic) HFRoomBuilder *room; // ivar: room
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFavoriting;


+(Class)homeKitRepresentationClass;
-(id)_lazilyUpdateFavorite;
-(id)_lazilyUpdateName;
-(id)_lazilyUpdateRoom;
-(id)_performValidation;
-(id)accessories;
-(id)commitItem;
-(id)initWithExistingObject:(id)arg0 inHome:(id)arg1 ;
-(id)removeItemFromHome;


@end


#endif
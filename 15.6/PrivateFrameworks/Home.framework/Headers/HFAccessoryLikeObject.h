// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFACCESSORYLIKEOBJECT_H
#define HFACCESSORYLIKEOBJECT_H

@class NSSet, NSString, HMRoom;
@protocol HFFavoritable, HFServiceNameComponentsProviding, HFAccessoryRepresentable, HFAccessoryLikeObjectRootHomeKitObjectProvider><HFAccessoryRepresentable><HFFavoritable, HFHomeKitObject;

#import <Foundation/Foundation.h>

#import "HFAccessoryType.h"
#import "HFServiceNameComponents.h"

@interface HFAccessoryLikeObject : NSObject <HFFavoritable, HFServiceNameComponentsProviding, HFAccessoryRepresentable>



@property (readonly, nonatomic) NSSet *accessories;
@property (readonly, nonatomic) HFAccessoryType *accessoryType;
@property (readonly, nonatomic) NSObject<HFAccessoryLikeObjectRootHomeKitObjectProvider><HFAccessoryRepresentable><HFFavoritable> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HFAccessoryType *hf_accessoryType;
@property (readonly, nonatomic) NSSet *hf_associatedAccessories;
@property (readonly, nonatomic) NSSet *hf_containedCharacteristics;
@property (readonly, nonatomic) NSSet *hf_containedProfiles;
@property (readonly, nonatomic) NSSet *hf_containedServices;
@property (readonly, nonatomic) BOOL hf_hasSetFavorite;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *hf_homeKitObject;
@property (readonly, nonatomic) BOOL hf_isFavorite;
@property (readonly, nonatomic) Class hf_itemClass;
@property (readonly, nonatomic) HMRoom *hf_safeRoom;
@property (readonly, nonatomic) HFServiceNameComponents *hf_serviceNameComponents;
@property (readonly, nonatomic) BOOL hf_shouldShowInFavorites;
@property (readonly, weak, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly, nonatomic) Class itemClass;
@property (readonly, nonatomic) NSSet *profiles;
@property (readonly, nonatomic) HMRoom *room;
@property (readonly, nonatomic) NSSet *services;
@property (readonly) Class superclass;


+(id)_accessoryLikeObjectForObject:(id)arg0 ;
+(id)objectMap;
-(BOOL)hf_isInRoom:(id)arg0 ;
-(id)hf_parentRoom;
-(id)hf_representableAccessoryLikeObject;
-(id)hf_updateIsFavorite:(BOOL)arg0 ;
-(id)initWithHomeKitObject:(id)arg0 ;


@end


#endif
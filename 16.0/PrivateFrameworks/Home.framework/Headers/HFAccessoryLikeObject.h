// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFACCESSORYLIKEOBJECT_H
#define HFACCESSORYLIKEOBJECT_H

@class NSSet, NSString, HMRoom;
@protocol HFFavoritable, HFShowInHomeDashboard, HFServiceNameComponentsProviding, HFAccessoryRepresentable, HFAccessoryLikeObjectRootHomeKitObjectProvider><HFAccessoryRepresentable><HFFavoritable><HFShowInHomeDashboard><HFIncludedContextProtocol, HFHomeKitObject, HFHomeKitObject><HFAccessoryRepresentable;

#import <Foundation/Foundation.h>

#import "HFAccessoryType.h"
#import "HFServiceNameComponents.h"

@interface HFAccessoryLikeObject : NSObject <HFFavoritable, HFShowInHomeDashboard, HFServiceNameComponentsProviding, HFAccessoryRepresentable>



@property (readonly, nonatomic) NSSet *accessories;
@property (readonly, nonatomic) HFAccessoryType *accessoryType;
@property (readonly, weak, nonatomic) NSObject<HFAccessoryLikeObjectRootHomeKitObjectProvider><HFAccessoryRepresentable><HFFavoritable><HFShowInHomeDashboard><HFIncludedContextProtocol> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HFAccessoryType *hf_accessoryType;
@property (readonly, nonatomic) NSSet *hf_associatedAccessories;
@property (readonly, nonatomic) NSSet *hf_containedCharacteristics;
@property (readonly, nonatomic) NSSet *hf_containedProfiles;
@property (readonly, nonatomic) NSSet *hf_containedServices;
@property (readonly, nonatomic) BOOL hf_effectiveIsFavorite;
@property (readonly, nonatomic) BOOL hf_effectiveShowInHomeDashboard;
@property (readonly, nonatomic) BOOL hf_hasSetFavorite;
@property (readonly, nonatomic) BOOL hf_hasSetShowInHomeDashboard;
@property (readonly, nonatomic) BOOL hf_hasSetVisibleInHomeStatus;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *hf_homeKitObject;
@property (readonly, nonatomic) BOOL hf_isFavorite;
@property (readonly, nonatomic) BOOL hf_isForcedVisibleInHomeStatus;
@property (readonly, nonatomic) BOOL hf_isVisibleInHomeStatus;
@property (readonly, nonatomic) Class hf_itemClass;
@property (readonly, nonatomic) HMRoom *hf_safeRoom;
@property (readonly, nonatomic) HFServiceNameComponents *hf_serviceNameComponents;
@property (readonly, nonatomic) BOOL hf_shouldShowInFavorites;
@property (readonly, nonatomic) BOOL hf_showInHomeDashboard;
@property (readonly, nonatomic) BOOL hf_supportsHomeStatus;
@property (readonly, nonatomic) NSString *hf_tileSize;
@property (readonly, weak, nonatomic) NSObject<HFHomeKitObject><HFAccessoryRepresentable> *homeKitObject;
@property (readonly, nonatomic) NSSet *profiles;
@property (readonly, nonatomic) HMRoom *room;
@property (readonly, nonatomic) NSSet *services;
@property (readonly) Class superclass;


+(id)_accessoryLikeObjectForObject:(id)arg0 ;
+(id)accessoryLikeObjectsForAccessoryRepresentable:(id)arg0 ;
+(id)objectMap;
+(void)_invalidateObjectMap;
-(BOOL)hf_isInRoom:(id)arg0 ;
-(Class)itemClass;
-(id)hf_moveToRoom:(id)arg0 ;
-(id)hf_parentRoom;
-(id)hf_representableAccessoryLikeObject;
-(id)hf_setTileSize:(id)arg0 ;
-(id)hf_updateIsFavorite:(BOOL)arg0 ;
-(id)hf_updateIsVisibleInHomeStatus:(BOOL)arg0 ;
-(id)hf_updateShowInHomeDashboard:(BOOL)arg0 ;
-(id)initWithHomeKitObject:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBAPPLAYOUT_H
#define SBAPPLAYOUT_H

@class NSDictionary, NSArray, NSString;
@protocol NSCopying, BSDescriptionProviding, SBSwitcherLayoutElementProviding;

#import <Foundation/Foundation.h>

#import "SBChamoisOverlappingModel.h"
#import "SBAppLayoutOverlappingModelCacheKey.h"
#import "SBDisplayItem.h"

@interface SBAppLayout : NSObject <NSCopying, BSDescriptionProviding, SBSwitcherLayoutElementProviding>

 {
    NSInteger _cachedAppLayoutType;
    NSUInteger _cachedHash;
    NSInteger _configuration;
    NSDictionary *_itemsToLayoutAttributesMap;
    NSArray *_items;
    NSArray *_itemsWithoutCenterOrFloatingItems;
}


@property (retain, nonatomic) SBChamoisOverlappingModel *cachedLastOverlappingModel; // ivar: _cachedLastOverlappingModel
@property (retain, nonatomic) SBAppLayoutOverlappingModelCacheKey *cachedLastOverlappingModelKey; // ivar: _cachedLastOverlappingModelKey
@property (readonly, nonatomic) NSInteger centerConfiguration; // ivar: _centerConfiguration
@property (readonly, nonatomic) SBDisplayItem *centerItem; // ivar: _centerItem
@property (readonly, nonatomic) NSInteger configuration;
@property (readonly, copy, nonatomic) NSString *continuousExposeIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger environment; // ivar: _environment
@property (readonly, nonatomic) SBDisplayItem *floatingItem; // ivar: _floatingItem
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (readonly, nonatomic, getter=isInsetForHomeAffordance) BOOL insetForHomeAffordance;
@property (readonly, nonatomic) NSDictionary *itemsToLayoutAttributesMap;
@property (readonly, nonatomic) NSInteger preferredDisplayOrdinal; // ivar: _preferredDisplayOrdinal
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type;


+(id)appLayoutWithProtobufRepresentation:(id)arg0 ;
+(id)homeScreenAppLayout;
-(BOOL)containsAllItemsFromAppLayout:(id)arg0 ;
-(BOOL)containsAnyItemFromAppLayout:(id)arg0 ;
-(BOOL)containsAnyItemFromSet:(id)arg0 ;
-(BOOL)containsItem:(id)arg0 ;
-(BOOL)containsItemWithBundleIdentifier:(id)arg0 ;
-(BOOL)containsItemWithUniqueIdentifier:(id)arg0 ;
-(BOOL)hasSameItemsInLayoutRoles:(NSUInteger)arg0 asAppLayout:(id)arg1 ;
-(BOOL)isCenterOverFull;
-(BOOL)isCenterOverSplit;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFullScreen;
-(BOOL)isOrContainsAppLayout:(id)arg0 ;
-(BOOL)isSplitConfiguration;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)layoutRoleForItem:(id)arg0 ;
-(NSUInteger)switcherLayoutElementType;
-(id)_leafAppLayoutForItem:(id)arg0 role:(NSInteger)arg1 ;
-(id)allItems;
-(id)anyLeafAppLayout;
-(id)appLayoutByModifyingConfiguration:(NSInteger)arg0 ;
-(id)appLayoutByModifyingEnvironment:(NSInteger)arg0 ;
-(id)appLayoutByModifyingHiddenState:(BOOL)arg0 ;
-(id)appLayoutByModifyingLayoutAttributes:(id)arg0 forItem:(id)arg1 ;
-(id)appLayoutByModifyingLayoutAttributes:(id)arg0 forItemInRole:(NSInteger)arg1 ;
-(id)appLayoutByModifyingLayoutAttributesForItems:(id)arg0 ;
-(id)appLayoutByModifyingRole:(NSInteger)arg0 forItem:(id)arg1 ;
-(id)appLayoutWithItemsPassingTest:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)flippedAppLayout;
-(id)init;
-(id)initWithItems:(id)arg0 centerItem:(id)arg1 floatingItem:(id)arg2 configuration:(NSInteger)arg3 itemsToLayoutAttributes:(id)arg4 centerConfiguration:(NSInteger)arg5 environment:(NSInteger)arg6 hidden:(BOOL)arg7 preferredDisplayOrdinal:(NSInteger)arg8 ;
-(id)initWithItemsForLayoutRoles:(id)arg0 configuration:(NSInteger)arg1 centerConfiguration:(NSInteger)arg2 environment:(NSInteger)arg3 hidden:(BOOL)arg4 preferredDisplayOrdinal:(NSInteger)arg5 ;
-(id)initWithItemsForLayoutRoles:(id)arg0 configuration:(NSInteger)arg1 environment:(NSInteger)arg2 hidden:(BOOL)arg3 preferredDisplayOrdinal:(NSInteger)arg4 ;
-(id)initWithItemsForLayoutRoles:(id)arg0 configuration:(NSInteger)arg1 environment:(NSInteger)arg2 preferredDisplayOrdinal:(NSInteger)arg3 ;
-(id)initWithItemsForLayoutRoles:(id)arg0 configuration:(NSInteger)arg1 itemsToLayoutAttributes:(id)arg2 centerConfiguration:(NSInteger)arg3 environment:(NSInteger)arg4 hidden:(BOOL)arg5 preferredDisplayOrdinal:(NSInteger)arg6 ;
-(id)initWithPlistRepresentation:(id)arg0 ;
-(id)itemForLayoutRole:(NSInteger)arg0 ;
-(id)layoutAttributesForItem:(id)arg0 ;
-(id)layoutAttributesForItemInRole:(NSInteger)arg0 ;
-(id)leafAppLayoutForItem:(id)arg0 ;
-(id)leafAppLayoutForRole:(NSInteger)arg0 ;
-(id)leafAppLayouts;
-(id)plistRepresentation;
-(id)preferredDisplayIdentity;
-(id)protobufRepresentation;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)zOrderedItems;
-(void)enumerate:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPLAYOUT_H
#define SBAPPLAYOUT_H

@class NSDictionary, NSString;
@protocol NSCopying, BSDescriptionProviding, SBSwitcherLayoutElementProviding;

#import <Foundation/Foundation.h>


@interface SBAppLayout : NSObject <NSCopying, BSDescriptionProviding, SBSwitcherLayoutElementProviding>

 {
    NSInteger _cachedAppLayoutType;
    NSUInteger _cachedHash;
    NSInteger _configuration;
    NSDictionary *_rolesToLayoutItemsMap;
}


@property (readonly, nonatomic) NSInteger centerConfiguration; // ivar: _centerConfiguration
@property (readonly, nonatomic) NSInteger configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (readonly, nonatomic, getter=isInsetForHomeAffordance) BOOL insetForHomeAffordance;
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
-(BOOL)isOrContainsAppLayout:(id)arg0 ;
-(BOOL)isSplitConfiguration;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)layoutRoleForItem:(id)arg0 ;
-(NSUInteger)frameOptions;
-(NSUInteger)switcherLayoutElementType;
-(id)allItems;
-(id)anyLeafAppLayout;
-(id)appLayoutByModifyingConfiguration:(NSInteger)arg0 ;
-(id)appLayoutByModifyingEnvironment:(NSInteger)arg0 ;
-(id)appLayoutByModifyingHiddenState:(BOOL)arg0 ;
-(id)appLayoutWithItemsPassingTest:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)flippedAppLayout;
-(id)init;
-(id)initWithItemsForLayoutRoles:(id)arg0 configuration:(NSInteger)arg1 centerConfiguration:(NSInteger)arg2 environment:(NSInteger)arg3 hidden:(BOOL)arg4 ;
-(id)initWithItemsForLayoutRoles:(id)arg0 configuration:(NSInteger)arg1 environment:(NSInteger)arg2 ;
-(id)initWithItemsForLayoutRoles:(id)arg0 configuration:(NSInteger)arg1 environment:(NSInteger)arg2 hidden:(BOOL)arg3 ;
-(id)initWithPlistRepresentation:(id)arg0 ;
-(id)itemForLayoutRole:(NSInteger)arg0 ;
-(id)leafAppLayoutForItem:(id)arg0 ;
-(id)leafAppLayoutForRole:(NSInteger)arg0 ;
-(id)leafAppLayouts;
-(id)plistRepresentation;
-(id)protobufRepresentation;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)enumerate:(id)arg0 ;


@end


#endif
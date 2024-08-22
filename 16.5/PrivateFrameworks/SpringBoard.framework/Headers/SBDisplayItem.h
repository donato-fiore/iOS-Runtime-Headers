// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDISPLAYITEM_H
#define SBDISPLAYITEM_H

@class NSString;
@protocol NSCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBDisplayItem : NSObject <NSCopying, BSDescriptionProviding>

 {
    NSString *_uniqueStringRepresentation;
    id *_sceneIdentifierFromBundleIdentifierGenerator;
}


@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, copy, nonatomic) NSString *webClipIdentifier;


+(id)applicationDisplayItemWithBundleIdentifier:(id)arg0 sceneIdentifier:(id)arg1 ;
+(id)displayItemForLayoutElement:(id)arg0 ;
+(id)displayItemWithProtobufRepresentation:(id)arg0 ;
+(id)displayItemWithType:(NSInteger)arg0 bundleIdentifier:(id)arg1 uniqueIdentifier:(id)arg2 ;
+(id)homeScreenDisplayItem;
+(id)remoteAlertDisplayItemWithServiceBundleIdentifier:(id)arg0 ;
+(id)switcherServiceDisplayItemWithServiceIdentifier:(id)arg0 ;
+(id)webAppDisplayItemWithWebAppIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDisplayItemForFloatingDockSuggestions:(id)arg0 ;
-(BOOL)isHomeScreenDisplayItem;
-(NSInteger)compare:(id)arg0 ;
-(id)_calculateUniqueStringRepresentation;
-(id)_initWithArrayPlistRepresentation:(id)arg0 ;
-(id)_initWithDictionaryPlistRepresentation:(id)arg0 ;
-(id)_initWithLegacyPlistRepresentation:(id)arg0 sceneIdentifierFromBundleIdentifierGenerator:(id)arg1 ;
-(id)_initWithPlistRepresentation:(id)arg0 sceneIdentifierFromBundleIdentifierGenerator:(id)arg1 ;
-(id)_newSceneIdentifierForBundleIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)displayItemForFloatingDockSuggestionsComparison;
-(id)init;
-(id)initWithLegacyPlistRepresentation:(id)arg0 ;
-(id)initWithPlistRepresentation:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 bundleIdentifier:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(id)plistRepresentation;
-(id)protobufRepresentation;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)uniqueStringRepresentation;


@end


#endif
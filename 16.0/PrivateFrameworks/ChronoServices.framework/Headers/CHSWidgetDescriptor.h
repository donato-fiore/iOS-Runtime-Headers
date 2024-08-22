// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHSWIDGETDESCRIPTOR_H
#define CHSWIDGETDESCRIPTOR_H

@class NSMutableArray, INCWidgetIntentProvider, INIntent, NSString, NSArray;
@protocol NSMutableCopying, CHSWidgetPersonality, NSSecureCoding;


#import "CHSBaseDescriptor.h"

@interface CHSWidgetDescriptor : CHSBaseDescriptor <NSMutableCopying, CHSWidgetPersonality, NSSecureCoding>

 {
    NSMutableArray *_fetchDefaultIntentCompletions;
    INCWidgetIntentProvider *_defaultIntentProvider;
    INIntent *_defaultIntent;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *intentRecommendations; // ivar: _intentRecommendations
@property (readonly, copy, nonatomic) NSString *intentType; // ivar: _intentType
@property (readonly, nonatomic, getter=isInternal) BOOL internal;
@property (readonly, copy, nonatomic) NSString *kind; // ivar: _kind
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger supportedSizeClasses;
@property (readonly, nonatomic, getter=isTransparent) BOOL transparent;
@property (readonly, nonatomic) NSInteger widgetVisibility; // ivar: _widgetVisibility


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesPersonality:(id)arg0 ;
-(id)_initWithDescriptor:(id)arg0 ;
-(id)_intentDescription;
-(id)cachedDefaultIntent;
-(id)copyAsCHSAvocadoDescriptor;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExtensionBundleIdentifier:(id)arg0 containerBundleIdentifier:(id)arg1 kind:(id)arg2 displayName:(id)arg3 intentType:(id)arg4 supportedSizeClasses:(NSUInteger)arg5 widgetDescription:(id)arg6 widgetVisibility:(NSInteger)arg7 ;
-(id)initWithExtensionBundleIdentifier:(id)arg0 containerBundleIdentifier:(id)arg1 kind:(id)arg2 supportedFamilies:(NSUInteger)arg3 intentType:(id)arg4 ;
-(id)initWithExtensionBundleIdentifier:(id)arg0 kind:(id)arg1 supportedFamilies:(NSUInteger)arg2 intentType:(id)arg3 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)widgetForFamily:(NSInteger)arg0 intent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadDefaultIntent:(id)arg0 ;


@end


#endif
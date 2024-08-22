// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHSAVOCADODESCRIPTOR_H
#define CHSAVOCADODESCRIPTOR_H

@class NSMutableArray, INCWidgetIntentProvider, INIntent, NSString, NSData;
@protocol NSMutableCopying, CHSWidgetPersonality, NSCopying, NSSecureCoding, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface CHSAvocadoDescriptor : NSObject <NSMutableCopying, CHSWidgetPersonality, NSCopying, NSSecureCoding, BSDescriptionProviding>

 {
    NSMutableArray *_fetchDefaultIntentCompletions;
    INCWidgetIntentProvider *_defaultIntentProvider;
    INIntent *_defaultIntent;
}


@property (readonly, copy, nonatomic) NSString *containerBundleIdentifier; // ivar: _containerBundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, copy, nonatomic) NSString *eventMachServiceName; // ivar: _eventMachServiceName
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier; // ivar: _extensionBundleIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *intentType; // ivar: _intentType
@property (readonly, nonatomic, getter=isInternal) BOOL internal;
@property (readonly, copy, nonatomic) NSString *kind; // ivar: _kind
@property (readonly, copy, nonatomic) NSData *localeToken; // ivar: _localeToken
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger supportedFamilies; // ivar: _supportedFamilies
@property (readonly, nonatomic) NSUInteger supportedSizeClasses;
@property (readonly, nonatomic, getter=isTransparent) BOOL transparent; // ivar: _transparent
@property (nonatomic) NSUInteger version; // ivar: _version
@property (readonly, copy, nonatomic) NSString *widgetDescription; // ivar: _widgetDescription
@property (readonly, nonatomic) NSInteger widgetVisibility; // ivar: _widgetVisibility


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesPersonality:(id)arg0 ;
-(id)_initWithDescriptor:(id)arg0 ;
-(id)_intentDescription;
-(id)cachedDefaultIntent;
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
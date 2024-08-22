// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHSMUTABLEAVOCADODESCRIPTOR_H
#define CHSMUTABLEAVOCADODESCRIPTOR_H

@class NSString, NSData;


#import "CHSAvocadoDescriptor.h"

@interface CHSMutableAvocadoDescriptor : CHSAvocadoDescriptor

@property (copy, nonatomic) NSString *containerBundleIdentifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *eventMachServiceName;
@property (copy, nonatomic) NSString *extensionBundleIdentifier;
@property (copy, nonatomic) NSString *intentType;
@property (copy, nonatomic) NSString *kind;
@property (copy, nonatomic) NSData *localeToken;
@property (nonatomic) NSUInteger supportedFamilies;
@property (nonatomic, getter=isTransparent) BOOL transparent;
@property (copy, nonatomic) NSString *widgetDescription;
@property (nonatomic) NSInteger widgetVisibility;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithExtensionBundleIdentifier:(id)arg0 containerBundleIdentifier:(id)arg1 kind:(id)arg2 displayName:(id)arg3 intentType:(id)arg4 supportedSizeClasses:(NSUInteger)arg5 widgetDescription:(id)arg6 widgetVisibility:(NSInteger)arg7 ;
-(id)initWithExtensionBundleIdentifier:(id)arg0 containerBundleIdentifier:(id)arg1 kind:(id)arg2 supportedFamilies:(NSUInteger)arg3 intentType:(id)arg4 ;
-(id)initWithExtensionBundleIdentifier:(id)arg0 kind:(id)arg1 supportedFamilies:(NSUInteger)arg2 intentType:(id)arg3 ;


@end


#endif
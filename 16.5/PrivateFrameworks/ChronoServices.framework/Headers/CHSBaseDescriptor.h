// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHSBASEDESCRIPTOR_H
#define CHSBASEDESCRIPTOR_H

@class NSString, NSData;
@protocol NSCopying, NSSecureCoding, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface CHSBaseDescriptor : NSObject <NSCopying, NSSecureCoding, BSDescriptionProviding>

 {
    NSInteger _backgroundStyle;
    BOOL _supportsVibrantContent;
}


@property (readonly, copy, nonatomic) NSString *containerBundleIdentifier; // ivar: _containerBundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, copy, nonatomic) NSString *effectiveContainerBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *eventMachServiceName; // ivar: _eventMachServiceName
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier; // ivar: _extensionBundleIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSData *localeToken; // ivar: _localeToken
@property (readonly, copy, nonatomic) NSString *nativeContainerBundleIdentifier; // ivar: _nativeContainerBundleIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger supportedFamilies; // ivar: _supportedFamilies
@property (nonatomic) NSUInteger version; // ivar: _version
@property (readonly, copy, nonatomic) NSString *widgetDescription; // ivar: _widgetDescription


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isTransparentForFamily:(NSInteger)arg0 ;
-(BOOL)requiresCARenderingForFamily:(NSInteger)arg0 ;
-(id)_initWithDescriptor:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExtensionBundleIdentifier:(id)arg0 containerBundleIdentifier:(id)arg1 supportedFamilies:(NSUInteger)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct CHSWidgetRenderStyle )effectiveRenderStyleForFamily:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHSWIDGET_H
#define CHSWIDGET_H

@class NSString, INIntent;
@protocol BSXPCCoding, BSDescriptionProviding, CHSWidgetPersonality, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CHSWidget : NSObject <BSXPCCoding, BSDescriptionProviding, CHSWidgetPersonality, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *activityIdentifier; // ivar: _activityIdentifier
@property (readonly, copy, nonatomic) NSString *containerBundleIdentifier; // ivar: _containerBundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier; // ivar: _extensionBundleIdentifier
@property (readonly, nonatomic) NSInteger family; // ivar: _family
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) INIntent *intent; // ivar: _intent
@property (readonly, copy, nonatomic) NSString *kind; // ivar: _kind
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesPersonality:(id)arg0 ;
-(id)_loggingIdentifierWithMetrics:(id)arg0 ;
-(id)_loggingIdentifierWithMetrics:(id)arg0 prefix:(id)arg1 ;
-(id)_loggingIdentifierWithoutMetrics;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExtensionBundleIdentifier:(id)arg0 containerBundleIdentifier:(id)arg1 kind:(id)arg2 family:(NSInteger)arg3 intent:(id)arg4 ;
-(id)initWithExtensionBundleIdentifier:(id)arg0 containerBundleIdentifier:(id)arg1 kind:(id)arg2 family:(NSInteger)arg3 intent:(id)arg4 activityIdentifier:(id)arg5 ;
-(id)initWithExtensionBundleIdentifier:(id)arg0 kind:(id)arg1 family:(NSInteger)arg2 intent:(id)arg3 ;
-(id)initWithPersonality:(id)arg0 family:(NSInteger)arg1 intent:(id)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)widgetByReplacingIntent:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHSCONFIGUREDWIDGETDESCRIPTOR_H
#define CHSCONFIGUREDWIDGETDESCRIPTOR_H

@class NSString;
@protocol BSDescriptionProviding, CHSWidgetConfigurationReference, NSCopying, NSMutableCopying, NSSecureCoding, CHSWidgetPersonality;

#import <Foundation/Foundation.h>

#import "CHSConfiguredWidgetContainerDescriptor.h"
#import "CHSWidgetMetrics.h"
#import "CHSWidget.h"

@interface CHSConfiguredWidgetDescriptor : NSObject <BSDescriptionProviding, CHSWidgetConfigurationReference, NSCopying, NSMutableCopying, NSSecureCoding, CHSWidgetPersonality>

 {
    CHSConfiguredWidgetContainerDescriptor *_weak_container;
}


@property (readonly, weak, nonatomic) CHSConfiguredWidgetContainerDescriptor *container;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, copy, nonatomic) CHSWidgetMetrics *metrics; // ivar: _metrics
@property (readonly, nonatomic) BOOL showsComplicationLabel;
@property (readonly, nonatomic) BOOL showsWidgetLabel; // ivar: _showsWidgetLabel
@property (readonly, nonatomic, getter=isSuggestion) BOOL suggestion; // ivar: _suggestion
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsLowLuminance; // ivar: _supportsLowLuminance
@property (readonly, nonatomic) BOOL supportsTinting; // ivar: _supportsTinting
@property (readonly, nonatomic, getter=isSystemConfigured) BOOL systemConfigured; // ivar: _systemConfigured
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, copy, nonatomic) CHSWidget *widget; // ivar: _widget


+(BOOL)supportsSecureCoding;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesPersonality:(id)arg0 ;
-(id)_initWithDescriptor:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUniqueIdentifier:(id)arg0 widget:(id)arg1 metrics:(id)arg2 ;
-(id)initWithUniqueIdentifier:(id)arg0 widget:(id)arg1 metrics:(id)arg2 isSuggestion:(BOOL)arg3 isSystemConfigured:(BOOL)arg4 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
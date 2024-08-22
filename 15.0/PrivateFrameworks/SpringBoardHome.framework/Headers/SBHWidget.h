// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHWIDGET_H
#define SBHWIDGET_H

@class NSString;
@protocol CHSWidgetPersonality, SBLeafIconDataSource, NSCopying, NSSecureCoding, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBHWidget : NSObject <CHSWidgetPersonality, SBLeafIconDataSource, NSCopying, NSSecureCoding, BSDescriptionProviding>

 {
    NSString *_containerBundleIdentifier;
    NSString *_displayName;
}


@property (readonly, copy, nonatomic) NSString *configurationStorageIdentifier;
@property (readonly, copy, nonatomic) NSString *containerBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier; // ivar: _extensionBundleIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *kind; // ivar: _kind
@property (readonly, nonatomic) NSInteger suggestionSource; // ivar: _suggestionSource
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)iconSupportsConfiguration:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesPersonality:(id)arg0 ;
-(NSUInteger)priorityForIcon:(id)arg0 ;
-(id)copyWithSuggestionSource:(NSInteger)arg0 ;
-(id)copyWithUniqueIdentifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)icon:(id)arg0 displayNameForLocation:(id)arg1 ;
-(id)icon:(id)arg0 imageWithInfo:(struct SBIconImageInfo )arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKind:(id)arg0 extensionBundleIdentifier:(id)arg1 ;
-(id)initWithKind:(id)arg0 extensionBundleIdentifier:(id)arg1 containerBundleIdentifier:(id)arg2 ;
-(id)initWithUniqueIdentifier:(id)arg0 kind:(id)arg1 extensionBundleIdentifier:(id)arg2 containerBundleIdentifier:(id)arg3 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
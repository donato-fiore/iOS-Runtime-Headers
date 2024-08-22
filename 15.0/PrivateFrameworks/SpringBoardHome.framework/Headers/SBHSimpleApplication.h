// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHSIMPLEAPPLICATION_H
#define SBHSIMPLEAPPLICATION_H

@class NSString, NSURL, NSArray;
@protocol SBHApplication, SBHApplicationPlaceholder, BSDescriptionProviding, SBHIconModelApplicationDataSource;

#import <Foundation/Foundation.h>


@interface SBHSimpleApplication : NSObject <SBHApplication, SBHApplicationPlaceholder, BSDescriptionProviding>



@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic, getter=isAppClip) BOOL appClip;
@property (readonly, nonatomic, getter=isAppleApplication) BOOL appleApplication;
@property (readonly, copy, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *applicationDisplayName;
@property (retain, nonatomic) id *badgeValue;
@property (readonly, nonatomic, getter=isBeta) BOOL beta; // ivar: _beta
@property (readonly, nonatomic, getter=isBlockedForScreenTimeExpiration) BOOL blockedForScreenTimeExpiration; // ivar: _blockedForScreenTimeExpiration
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSURL *bundleURL; // ivar: _bundleURL
@property (readonly, nonatomic, getter=isCancelable) BOOL cancelable;
@property (readonly, nonatomic, getter=isCloudDemoted) BOOL cloudDemoted;
@property (readonly, copy, nonatomic) NSString *configurationStorageIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic, getter=isDownloading) BOOL downloading;
@property (readonly, nonatomic, getter=isFailed) BOOL failed;
@property (readonly, nonatomic) BOOL hasHiddenTag;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *iconIdentifier;
@property (weak, nonatomic) NSObject<SBHIconModelApplicationDataSource> *iconModelApplicationDataSource; // ivar: _iconModelApplicationDataSource
@property (readonly, nonatomic) NSUInteger installType; // ivar: _installType
@property (readonly, nonatomic, getter=isInstalling) BOOL installing;
@property (readonly, nonatomic, getter=isInternalApplication) BOOL internalApplication; // ivar: _internalApplication
@property (readonly, nonatomic, getter=isPausable) BOOL pausable;
@property (readonly, nonatomic, getter=isPaused) BOOL paused;
@property (readonly, nonatomic, getter=isPlaceholder) BOOL placeholder; // ivar: _placeholder
@property (readonly, nonatomic, getter=isPrioritizable) BOOL prioritizable;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSystemApplication) BOOL systemApplication; // ivar: _systemApplication
@property (readonly, nonatomic) NSArray *tags; // ivar: _tags
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *vendorName;
@property (readonly, nonatomic, getter=isWaiting) BOOL waiting;


-(BOOL)canGenerateIconsInBackgroundForIcon:(id)arg0 ;
-(BOOL)iconCompleteUninstall:(id)arg0 ;
-(BOOL)isTimedOutForIcon:(id)arg0 ;
-(NSInteger)labelAccessoryTypeForIcon:(id)arg0 ;
-(NSUInteger)priorityForIcon:(id)arg0 ;
-(NSUInteger)supportedGridSizeClassesForIcon:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)icon:(id)arg0 displayNameForLocation:(id)arg1 ;
-(id)icon:(id)arg0 imageWithInfo:(struct SBIconImageInfo )arg1 ;
-(id)icon:(id)arg0 unmaskedImageWithInfo:(struct SBIconImageInfo )arg1 ;
-(id)initWithApplicationInfo:(id)arg0 ;
-(id)initWithApplicationProxy:(id)arg0 ;
-(id)initWithApplicationRecord:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 allowPlaceholder:(BOOL)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
-(void)updateDeviceManagementPolicy:(NSInteger)arg0 ;


@end


#endif
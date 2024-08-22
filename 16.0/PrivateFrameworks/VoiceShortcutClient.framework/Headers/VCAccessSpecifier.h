// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCACCESSSPECIFIER_H
#define VCACCESSSPECIFIER_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VCAccessSpecifier : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier; // ivar: _associatedAppBundleIdentifier
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSInteger entitlements; // ivar: _entitlements
@property (readonly, nonatomic) NSInteger sandboxCapabilities; // ivar: _sandboxCapabilities
@property (readonly, nonatomic) *__SecTask task; // ivar: _task


+(id)accessSpecifierFilteredForAssociatedAppBundleIdentifier:(id)arg0 bundleIdentifier:(id)arg1 ;
+(id)accessSpecifierForAuditToken:(struct ? )arg0 ;
+(id)accessSpecifierForCurrentConnection;
+(id)accessSpecifierForCurrentProcess;
+(id)accessSpecifierForTask:(struct __SecTask *)arg0 sandboxCapabilities:(NSInteger)arg1 ;
+(id)accessSpecifierForXPCConnection:(id)arg0 ;
+(id)accessSpecifierUnrestricted;
+(id)accessSpecifierUnrestrictedWithAssociatedAppBundleIdentifier:(id)arg0 bundleIdentifier:(id)arg1 ;
+(id)accessSpecifierWithNoAccess;
+(id)accessSpecifierWithNoAccessForBundleIdentifier:(id)arg0 ;
+(void)initialize;
-(BOOL)allowBackgroundShortcutRunning;
-(BOOL)allowConnection;
-(BOOL)allowHomeResidentShortcutRunning;
-(BOOL)allowIntentsExtensionDiscovery;
-(BOOL)allowLaunchingBackgroundShortcutRunner;
-(BOOL)allowReadAccessForContextualActions;
-(BOOL)allowReadAccessForDonations;
-(BOOL)allowReadAccessForSleepWorkflows;
-(BOOL)allowReadAccessForTriggers;
-(BOOL)allowReadAccessToPodcastsDatabase;
-(BOOL)allowReadAccessToShortcutsLibrary;
-(BOOL)allowReadAccessToSingleStepShortcutsWithBundleIdentifier:(id)arg0 ;
-(BOOL)allowReadAccessToSuggestionsWithBundleIdentifier:(id)arg0 ;
-(BOOL)allowReadingOnScreenContent;
-(BOOL)allowResettingAutomationConfirmationLevel;
-(BOOL)allowRootlessShortcutStorageAccess;
-(BOOL)allowShortcutImport;
-(BOOL)allowUnrestrictedAccess;
-(BOOL)allowWriteAccessForSleepWorkflows;
-(BOOL)allowWriteAccessForTriggers;
-(BOOL)allowWriteAccessToSuggestionsWithBundleIdentifier:(id)arg0 ;
-(BOOL)allowWriteAccessToVoiceShortcuts;
-(BOOL)hasEntitlements:(NSInteger)arg0 ;
-(BOOL)hasSandboxCapabilities:(NSInteger)arg0 ;
-(BOOL)isRemovalService;
-(BOOL)isSettingsApp;
-(BOOL)isSpringBoard;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithSecTask:(struct __SecTask *)arg0 bundleIdentifier:(id)arg1 associatedAppBundleIdentifier:(id)arg2 entitlements:(NSInteger)arg3 sandboxCapabilities:(NSInteger)arg4 ;
-(void)dealloc;


@end


#endif
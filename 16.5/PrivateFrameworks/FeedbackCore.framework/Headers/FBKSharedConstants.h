// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKSHAREDCONSTANTS_H
#define FBKSHAREDCONSTANTS_H


#import <Foundation/Foundation.h>


@interface FBKSharedConstants : NSObject



+(BOOL)currentIDMSEnvironmentMatchesCurrentFBKEnvironment;
+(BOOL)hasDifferentLanguageSinceLastLaunch;
+(BOOL)isEnhancedLoggingEnabled;
+(BOOL)isProductionEnvironment;
+(BOOL)isRunningInFBA;
+(BOOL)isTeamsEnabled;
+(BOOL)tracksFileUploadsLocally;
+(BOOL)usesPersistentStore;
+(BOOL)usesTemporaryDraftsDirectory;
+(NSInteger)currentLegalVersion;
+(NSInteger)platform;
+(id)_localizedAttachmentLegalTextKeyForDraftID:(id)arg0 ;
+(id)appleSeedURL;
+(id)appleSeedURLFromDefaults:(id)arg0 withEnvironment:(short)arg1 ;
+(id)darkModeCSS;
+(id)developerURL;
+(id)localizedAttachmentLegalTextForDraftID:(id)arg0 ;
+(id)modelName;
+(id)productVersion;
+(id)publicBetaURL;
+(id)publicPortalURL;
+(id)seedPortalURL;
+(id)sharedUserDefaults;
+(id)swTrain;
+(id)swVers;
+(short)environment;
+(void)_deriveSystemVersion;
+(void)deleteAttachmentLegalTextForDraftID:(id)arg0 ;
+(void)deleteStaleAttachmentLegalTextEntries;
+(void)initialize;
+(void)overrideEnvironment:(short)arg0 host:(id)arg1 ;
+(void)recordCurrentLanguagePreference;
+(void)saveLocalizedAttachmentLegalText:(id)arg0 draftID:(id)arg1 ;


@end


#endif
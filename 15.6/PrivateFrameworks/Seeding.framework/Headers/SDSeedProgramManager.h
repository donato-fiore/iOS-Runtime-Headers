// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SDSEEDPROGRAMMANAGER_H
#define SDSEEDPROGRAMMANAGER_H


#import <Foundation/Foundation.h>


@interface SDSeedProgramManager : NSObject



+(BOOL)_canEnrollInBetaSoftware;
+(BOOL)_currentAudienceIsSeed;
+(BOOL)_currentCatalogIsSeed;
+(BOOL)_setAudienceForSeedProgram:(NSInteger)arg0 ;
+(BOOL)_setCatalogForSeedProgram:(NSInteger)arg0 ;
+(BOOL)canFileFeedback;
+(BOOL)enrollInSeedProgram:(NSInteger)arg0 ;
+(BOOL)enrollInSeedProgram:(NSInteger)arg0 deletingSystemURL:(BOOL)arg1 ;
+(BOOL)fixUpAssetAudience;
+(BOOL)isEnrolledInSeedProgram;
+(BOOL)unenrollFromSeedProgram;
+(NSInteger)_currentSeedProgramFromDisk;
+(NSInteger)_seedProgramForString:(id)arg0 ;
+(NSInteger)currentSeedProgram;
+(NSInteger)currentSeedProgramForDiskAtPath:(id)arg0 ;
+(id)_loadSeedAudiencesFromPlist;
+(id)_loadSeedCatalogsFromPlist;
+(id)currentEnrollmentMetadata;
+(id)stringForSeedProgram:(NSInteger)arg0 ;
+(void)_clearAudience;
+(void)_clearSeedCatalog;
+(void)_createFeedbackAssistantSymlink;
+(void)_setHelpFeedbackMenuEnabled:(BOOL)arg0 ;
+(void)_setSeedOptOutUIDisabled:(BOOL)arg0 ;
+(void)_setSeedProgramPref:(NSInteger)arg0 ;
+(void)enrollInSeedProgramNamed:(id)arg0 withAssetAudience:(id)arg1 completion:(id)arg2 ;


@end


#endif
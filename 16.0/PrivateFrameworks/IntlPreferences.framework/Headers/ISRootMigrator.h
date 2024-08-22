// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISROOTMIGRATOR_H
#define ISROOTMIGRATOR_H



#import "ISMigrator.h"

@interface ISRootMigrator : ISMigrator

@property (nonatomic) BOOL isErase; // ivar: _isErase
@property (nonatomic) BOOL isRestoreFromBackup; // ivar: _isRestoreFromBackup


-(BOOL)performMigration;
-(id)appendRegionalVariantsToLanguageIdentifiers:(id)arg0 regionCode:(id)arg1 ;
-(id)importPreferredLanguagesForPreferences:(id)arg0 ;
-(id)importPreferredLanguages_macOS_10_9_forPreferences:(id)arg0 ;
-(id)performMigrationForPreferences:(id)arg0 ;
-(id)performMigrationForUserPreferences:(id)arg0 systemPreferences:(id)arg1 ;
-(void)updateAppleLanguagesSchemaVersionToCurrent;


@end


#endif
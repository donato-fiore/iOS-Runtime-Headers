// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IP_ADVANCEDSETTINGS_MIGRATOR_H
#define IP_ADVANCEDSETTINGS_MIGRATOR_H



#import "ISMigrator.h"

@interface IP_advancedSettings_migrator : ISMigrator



-(id)performMigrationForPreferences:(id)arg0 ;
-(void)migrateOtherSystemSettings;


@end


#endif
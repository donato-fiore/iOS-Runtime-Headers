// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFLANGUAGEPICKERMICROSOFTTOSYSTEMMIGRATION_H
#define WFLANGUAGEPICKERMICROSOFTTOSYSTEMMIGRATION_H



#import "WFWorkflowMigration.h"

@interface WFLanguagePickerMicrosoftToSystemMigration : WFWorkflowMigration



+(BOOL)workflowNeedsMigration:(id)arg0 fromClientVersion:(id)arg1 ;
-(id)languagesSupportedByTranslation;
-(id)localeIdentifierFromLegacySerializedParameterValue:(id)arg0 ;
-(id)localeIdentifierFromSerializedLocaleDisplayName:(id)arg0 ;
-(id)localeIdentifierFromUnmigratedValue:(id)arg0 ;
-(id)localizedLanguageDisplayNamesToLocaleIdentifiers;
-(void)migrateWorkflow;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKVGLOBALINFOLOG_H
#define CKVGLOBALINFOLOG_H

@class KVDictionaryLog;

#import <Foundation/Foundation.h>


@interface CKVGlobalInfoLog : NSObject {
    KVDictionaryLog *_log;
}




-(BOOL)recordMigrationAttempt;
-(BOOL)recordMigrationWithBuildVersion:(id)arg0 projectVersion:(id)arg1 enablementOptions:(unsigned char)arg2 allLanguageCodes:(id)arg3 ;
-(BOOL)updateAllLanguageCodes:(id)arg0 ;
-(BOOL)updateEnablementOptions:(unsigned char)arg0 ;
-(BOOL)updateSchemaVersion:(id)arg0 ;
-(id)allLanguageCodes;
-(id)initWithRootDirectory:(id)arg0 ;
-(id)lastMigration;
-(id)migratedBuildVersion;
-(id)migratedProjectVersion;
-(id)migrationAttempts;
-(id)schemaVersion;
-(unsigned char)enablementOptions;


@end


#endif
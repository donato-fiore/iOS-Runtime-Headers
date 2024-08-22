// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APCONFIGURATIONMIGRATOR_H
#define APCONFIGURATIONMIGRATOR_H


#import <Foundation/Foundation.h>


@interface APConfigurationMigrator : NSObject



+(BOOL)resetConfigurationSystem;
+(NSInteger)currentConfigurationVersion;
+(NSInteger)traverseDirectoryAtPath:(id)arg0 replacingConfigurationAtPath:(id)arg1 ;
+(id)versionNumberFromJSONFileAtPath:(id)arg0 ;
+(id)versionNumberFromPlistFileAtPath:(id)arg0 ;
+(void)_removeItemAtPath:(id)arg0 fileManager:(id)arg1 ;
+(void)saveConfigurationVersion:(NSInteger)arg0 ;


@end


#endif
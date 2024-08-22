// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SDSEEDPROGRAMMIGRATOR_H
#define SDSEEDPROGRAMMIGRATOR_H


#import <Foundation/Foundation.h>


@interface SDSeedProgramMigrator : NSObject



+(BOOL)_enrollInSeedProgramFromCookie;
+(BOOL)fixupSeedProgramSettings;
+(void)_removeObsoleteAudiences;
+(void)_removeObsoleteCatalogs;
+(void)migrateSeedProgramSettings;


@end


#endif
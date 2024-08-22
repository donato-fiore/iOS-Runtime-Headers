// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISFILEPROTECTIONCLASSMIGRATOR_H
#define ISFILEPROTECTIONCLASSMIGRATOR_H


#import <Foundation/Foundation.h>


@interface ISFileProtectionClassMigrator : NSObject



+(BOOL)isMigrationNeeded;
+(BOOL)migrate;
+(void)setMigrationNeededIfNotSet:(BOOL)arg0 ;


@end


#endif
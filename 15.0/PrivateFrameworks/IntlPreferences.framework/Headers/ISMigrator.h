// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISMIGRATOR_H
#define ISMIGRATOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ISMigrator : NSObject

@property (copy, nonatomic) NSString *currentVersion; // ivar: _currentVersion
@property (nonatomic) NSUInteger platform; // ivar: _platform
@property (nonatomic) NSUInteger previousSchemaVersion; // ivar: _previousSchemaVersion
@property (copy, nonatomic) NSString *previousVersion; // ivar: _previousVersion


+(NSUInteger)currentPlatform;
+(id)migratorFromSchemaVersion:(NSUInteger)arg0 ;
+(id)migratorFromVersion:(id)arg0 toVersion:(id)arg1 ;
+(id)migratorFromVersion:(id)arg0 toVersion:(id)arg1 platform:(NSUInteger)arg2 ;
-(BOOL)previousVersionIsOlderThanMacOS:(id)arg0 iOS:(id)arg1 watchOS:(id)arg2 tvOS:(id)arg3 ;
-(id)performMigrationForPreferences:(id)arg0 ;
-(id)performMigrationForUserPreferences:(id)arg0 systemPreferences:(id)arg1 ;


@end


#endif
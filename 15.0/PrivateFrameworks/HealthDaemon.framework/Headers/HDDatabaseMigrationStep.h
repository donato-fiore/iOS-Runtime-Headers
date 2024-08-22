// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDDATABASEMIGRATIONSTEP_H
#define HDDATABASEMIGRATIONSTEP_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HDDatabaseMigrationStep : NSObject

@property (readonly, nonatomic) NSInteger finalSchemaVersion; // ivar: _finalSchemaVersion
@property (nonatomic) NSInteger foreignKeyStatus; // ivar: _foreignKeyStatus
@property (readonly, copy, nonatomic) id *migrationHandler; // ivar: _migrationHandler
@property (readonly, nonatomic) NSInteger requiredPrimarySchemaVersion; // ivar: _requiredPrimarySchemaVersion
@property (readonly, copy, nonatomic) NSString *schemaName; // ivar: _schemaName


+(id)migrationStepFrom:(NSInteger)arg0 to:(NSInteger)arg1 handler:(id)arg2 ;
+(id)migrationStepWithForeignKeysDisabledFrom:(NSInteger)arg0 to:(NSInteger)arg1 handler:(id)arg2 ;
-(id)description;
-(id)initForSchema:(id)arg0 toVersion:(NSInteger)arg1 requiringVersion:(NSInteger)arg2 foreignKeys:(NSInteger)arg3 handler:(id)arg4 ;


@end


#endif
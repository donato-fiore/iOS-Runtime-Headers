// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDHEARINGPLUGIN_H
#define HDHEARINGPLUGIN_H

@class NSString;
@protocol HDPlugin, HDDatabaseSchemaProvider, HDSyncEntityProvider, HDTaskServerClassProvider;

#import <Foundation/Foundation.h>


@interface HDHearingPlugin : NSObject <HDPlugin, HDDatabaseSchemaProvider, HDSyncEntityProvider, HDTaskServerClassProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *pluginIdentifier;
@property (readonly, copy, nonatomic) NSString *schemaName;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *syncSchemaIdentifier;


-(NSInteger)currentSchemaVersionForProtectionClass:(NSInteger)arg0 ;
-(id)_databaseSchemaForProtectionClass:(NSInteger)arg0 ;
-(id)databaseEntitiesForProtectionClass:(NSInteger)arg0 ;
-(id)extensionForHealthDaemon:(id)arg0 ;
-(id)extensionForProfile:(id)arg0 ;
-(id)orderedSyncEntities;
-(id)taskServerClasses;
-(void)registerMigrationStepsForProtectionClass:(NSInteger)arg0 migrator:(id)arg1 ;


@end


#endif
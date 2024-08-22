// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHEARTPLUGINUNPROTECTEDDATABASESCHEMA_H
#define HDHEARTPLUGINUNPROTECTEDDATABASESCHEMA_H

@class NSArray, NSString;
@protocol HDHeartPluginDatabaseSchema;

#import <Foundation/Foundation.h>


@interface HDHeartPluginUnprotectedDatabaseSchema : NSObject <HDHeartPluginDatabaseSchema>



@property (readonly, nonatomic) NSInteger currentSchemaVersion;
@property (readonly, copy, nonatomic) NSArray *databaseEntities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)registerMigrationStepsForSchemaName:(id)arg0 migrator:(id)arg1 ;


@end


#endif
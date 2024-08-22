// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHEARTDAEMONPLUGIN_H
#define HDHEARTDAEMONPLUGIN_H

@class NSUserDefaults, NSString;
@protocol HDPlugin, HDTaskServerClassProvider, HDDatabaseSchemaProvider, HDDemoDataGeneratorProvider;

#import <Foundation/Foundation.h>


@interface HDHeartDaemonPlugin : NSObject <HDPlugin, HDTaskServerClassProvider, HDDatabaseSchemaProvider, HDDemoDataGeneratorProvider>

 {
    NSUserDefaults *_heartNotificationsUserDefaults;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *pluginIdentifier;
@property (readonly, copy, nonatomic) NSString *schemaName;
@property (readonly) Class superclass;


-(NSInteger)currentSchemaVersionForProtectionClass:(NSInteger)arg0 ;
-(id)_databaseSchemaForProtectionClass:(NSInteger)arg0 ;
-(id)databaseEntitiesForProtectionClass:(NSInteger)arg0 ;
-(id)demoDataGeneratorClasses;
-(id)extensionForHealthDaemon:(id)arg0 ;
-(id)extensionForProfile:(id)arg0 ;
-(id)init;
-(id)initWithHeartNotificationsUserDefaults:(id)arg0 ;
-(id)taskServerClasses;
-(void)handleDatabaseObliteration;
-(void)registerMigrationStepsForProtectionClass:(NSInteger)arg0 migrator:(id)arg1 ;


@end


#endif
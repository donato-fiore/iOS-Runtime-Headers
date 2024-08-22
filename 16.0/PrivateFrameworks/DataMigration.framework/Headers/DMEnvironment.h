// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMENVIRONMENT_H
#define DMENVIRONMENT_H


#import <Foundation/Foundation.h>


@interface DMEnvironment : NSObject

@property (nonatomic) BOOL testMigrationInfrastructureOnly; // ivar: _testMigrationInfrastructureOnly


+(BOOL)isBuildVersion:(id)arg0 equalToBuildVersion:(id)arg1 ;
+(id)sharedInstance;
-(BOOL)deviceModeIsSharediPad;
-(BOOL)implementMigrationPluginResults;
-(BOOL)isDeviceUsingEphemeralStorage;
-(BOOL)suppressMigrationPluginWrapperExitMarkerPref;
-(BOOL)userSessionIsLoginWindow;
-(BOOL)waitForExecutePluginsSignalMarkerPref;
-(id)buildVersion;
-(id)context;
-(id)contextPath;
-(id)continuousIntegrationMarkerPref;
-(id)lastBuildVersionPref;
-(id)lastMigrationResultsPref;
-(id)migrationPluginResultsPref;
-(id)userDataDispositionPref;
-(void)blockUntilPreferencesFlush;
-(void)clearContext;
-(void)setContext:(id)arg0 ;
-(void)setLastBuildVersionPref:(id)arg0 ;
-(void)setLastMigrationResultsPref:(id)arg0 ;
-(void)setMigrationPluginResultsPref:(id)arg0 ;
-(void)setUserDataDispositionPref:(id)arg0 ;


@end


#endif
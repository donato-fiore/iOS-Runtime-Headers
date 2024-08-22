// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMCONNECTION_H
#define DMCONNECTION_H


#import <Foundation/Foundation.h>

#import "DMXPCConnection.h"

@interface DMConnection : NSObject {
    DMXPCConnection *_connection;
}




+(id)connection;
-(BOOL)isMigrationNeeded;
-(NSInteger)migrateCheckingNecessity:(BOOL)arg0 lastRelevantPlugin:(id)arg1 testMigrationInfrastructureOnly:(BOOL)arg2 ;
-(id)init;
-(id)migrationPhaseDescription;
-(id)orderedPluginIdentifiers;
-(id)previousBuildVersion;
-(unsigned int)userDataDisposition;
-(void)cancelDeferredExit;
-(void)changeVisibility:(BOOL)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)deferExit;
-(void)forceMigrationOnNextRebootWithUserDataDisposition:(unsigned int)arg0 ;
-(void)migrationPluginResults:(id)arg0 ;
-(void)reportMigrationFailure;
-(void)testMigrationUIWithProgress:(BOOL)arg0 forceInvert:(BOOL)arg1 ;


@end


#endif
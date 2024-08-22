// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMCLIENTAPICONTROLLER_H
#define DMCLIENTAPICONTROLLER_H


#import <Foundation/Foundation.h>


@interface DMClientAPIController : NSObject

@property (nonatomic) NSUInteger connectionMigrationMaximumAttempts; // ivar: _connectionMigrationMaximumAttempts
@property (nonatomic) CGFloat connectionMigrationTimeIntervalToLastRetryDate; // ivar: _connectionMigrationTimeIntervalToLastRetryDate


-(BOOL)_migrateWithConnection:(id)arg0 checkNecessity:(BOOL)arg1 lastRelevantPlugin:(id)arg2 testMigrationInfrastructureOnly:(BOOL)arg3 ;
-(id)init;


@end


#endif
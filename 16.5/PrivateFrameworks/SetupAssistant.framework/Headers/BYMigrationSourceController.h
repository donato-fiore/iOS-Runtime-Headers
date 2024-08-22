// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BYMIGRATIONSOURCECONTROLLER_H
#define BYMIGRATIONSOURCECONTROLLER_H


#import <Foundation/Foundation.h>

#import "BYBuddyDaemonMigrationSourceClient.h"

@interface BYMigrationSourceController : NSObject

@property (retain, nonatomic) BYBuddyDaemonMigrationSourceClient *migrationSourceClient; // ivar: _migrationSourceClient


-(id)init;
-(void)launchSetupForMigration:(id)arg0 ;
-(void)setFileTransferSession:(id)arg0 ;


@end


#endif
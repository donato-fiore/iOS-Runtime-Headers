// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLDATAMIGRATIONCONTROLLER_H
#define WLDATAMIGRATIONCONTROLLER_H

@protocol WLDataMigratorProtocol, WLDataMigrationDelegate;


#import "WLDaemonConnection.h"

@interface WLDataMigrationController : WLDaemonConnection {
    id<WLDataMigratorProtocol> *_migrator;
}


@property (readonly, weak, nonatomic) NSObject<WLDataMigrationDelegate> *delegate; // ivar: _delegate


-(id)initWithDelegate:(id)arg0 ;
-(void)deleteMessages;
-(void)lookupAppDataContainer:(id)arg0 ;
-(void)startMigrationUsingRetryPolicies:(BOOL)arg0 ;


@end


#endif
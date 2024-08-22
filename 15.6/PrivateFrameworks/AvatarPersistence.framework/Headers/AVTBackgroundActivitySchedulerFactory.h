// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTBACKGROUNDACTIVITYSCHEDULERFACTORY_H
#define AVTBACKGROUNDACTIVITYSCHEDULERFACTORY_H


#import <Foundation/Foundation.h>


@interface AVTBackgroundActivitySchedulerFactory : NSObject



+(id)schedulerForPostInstallMigrationActivity;
+(id)schedulerForUserRequestedBackupActivity;


@end


#endif
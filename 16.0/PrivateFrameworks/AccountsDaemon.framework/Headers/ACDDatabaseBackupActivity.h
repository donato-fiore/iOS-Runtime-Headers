// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACDDATABASEBACKUPACTIVITY_H
#define ACDDATABASEBACKUPACTIVITY_H

@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ACDDatabase.h"

@interface ACDDatabaseBackupActivity : NSObject {
    BOOL _xpcActivityPending;
    NSObject<OS_xpc_object> *_activityExecutionCriteria;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, nonatomic) ACDDatabase *database; // ivar: _database


+(id)new;
-(id)activityCriteria;
-(id)init;
-(id)initWithDatabase:(id)arg0 ;
-(void)_registerActivityIfNeededSchedulingBackup:(BOOL)arg0 ;
-(void)_registerActivitySchedulingBackup:(BOOL)arg0 ;
-(void)registerActivityIfNeeded;
-(void)scheduleBackup;
-(void)scheduleBackupIfNonexistent;


@end


#endif
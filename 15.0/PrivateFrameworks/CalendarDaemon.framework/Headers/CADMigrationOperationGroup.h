// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CADMIGRATIONOPERATIONGROUP_H
#define CADMIGRATIONOPERATIONGROUP_H

@protocol CADMigrationInterface;


#import "CADOperationGroup.h"

@interface CADMigrationOperationGroup : CADOperationGroup <CADMigrationInterface>





+(BOOL)requiresEventAccess;
+(BOOL)requiresEventOrReminderAccess;
+(BOOL)requiresReminderAccess;
-(void)CADMigrateDatabaseIfNeeded:(id)arg0 ;


@end


#endif
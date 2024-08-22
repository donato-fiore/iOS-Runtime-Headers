// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PARUSAGEEVENTMIGRATION_H
#define PARUSAGEEVENTMIGRATION_H

@class NSEntityMigrationPolicy;



@interface PARUsageEventMigration : NSEntityMigrationPolicy



-(BOOL)createDestinationInstancesForSourceInstance:(id)arg0 entityMapping:(id)arg1 manager:(id)arg2 error:(*id)arg3 ;
-(id)init;


@end


#endif
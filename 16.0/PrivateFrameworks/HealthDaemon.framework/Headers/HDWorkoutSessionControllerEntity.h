// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDWORKOUTSESSIONCONTROLLERENTITY_H
#define HDWORKOUTSESSIONCONTROLLERENTITY_H



#import "HDHealthEntity.h"

@interface HDWorkoutSessionControllerEntity : HDHealthEntity



+(BOOL)retrieveArchivedStateFromRecoveryIdentifier:(id)arg0 workoutSession:(id)arg1 transaction:(id)arg2 error:(*id)arg3 block:(id)arg4 ;
+(BOOL)storeArchivedStateWithRecoveryIdentifier:(id)arg0 archivedState:(id)arg1 workoutSession:(id)arg2 transaction:(id)arg3 error:(*id)arg4 ;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)foreignKeys;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSYNCANCHORENTITY_H
#define HDSYNCANCHORENTITY_H



#import "HDHealthEntity.h"

@interface HDSyncAnchorEntity : HDHealthEntity



+(BOOL)enumerateSyncAnchorsForStoreID:(NSInteger)arg0 database:(id)arg1 error:(*id)arg2 handler:(id)arg3 ;
+(BOOL)getMinimumSyncAnchorsOfType:(NSInteger)arg0 anchorMap:(id)arg1 updatedSince:(id)arg2 profile:(id)arg3 error:(*id)arg4 ;
+(BOOL)getRequestedVersion:(*id)arg0 entityIdentifier:(id)arg1 store:(id)arg2 transaction:(id)arg3 error:(*id)arg4 ;
+(BOOL)getSyncAnchorsOfType:(NSInteger)arg0 anchorMap:(id)arg1 store:(id)arg2 profile:(id)arg3 error:(*id)arg4 ;
+(BOOL)prepareSyncAnchorsForEntityIdentifiers:(id)arg0 store:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(BOOL)resetAllSyncAnchorsOfType:(NSInteger)arg0 syncProvenances:(id)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(BOOL)resetNextAnchorsIfNeededForStore:(id)arg0 profile:(id)arg1 minimumElapsedTime:(CGFloat)arg2 error:(*id)arg3 ;
+(BOOL)resetSyncAnchorsOfType:(NSInteger)arg0 store:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(BOOL)resetSyncStore:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(BOOL)setAcknowledgedAnchorsWithMap:(id)arg0 store:(id)arg1 resetNext:(BOOL)arg2 resetInvalid:(BOOL)arg3 profile:(id)arg4 error:(*id)arg5 ;
+(BOOL)updateLocalVersion:(int)arg0 entityIdentifier:(id)arg1 store:(id)arg2 transaction:(id)arg3 error:(*id)arg4 ;
+(BOOL)updateReceivedVersion:(int)arg0 entityIdentifier:(id)arg1 store:(id)arg2 transaction:(id)arg3 error:(*id)arg4 ;
+(BOOL)updateRequestedVersion:(int)arg0 entityIdentifier:(id)arg1 store:(id)arg2 transaction:(id)arg3 error:(*id)arg4 ;
+(BOOL)updateSyncAnchor:(NSInteger)arg0 type:(NSInteger)arg1 entityIdentifier:(id)arg2 store:(id)arg3 updatePolicy:(NSInteger)arg4 profile:(id)arg5 error:(*id)arg6 ;
+(BOOL)updateSyncAnchor:(NSInteger)arg0 type:(NSInteger)arg1 updateDate:(id)arg2 entityIdentifier:(id)arg3 store:(id)arg4 updatePolicy:(NSInteger)arg5 profile:(id)arg6 error:(*id)arg7 ;
+(BOOL)updateSyncAnchorsWithMap:(id)arg0 type:(NSInteger)arg1 store:(id)arg2 updatePolicy:(NSInteger)arg3 resetInvalid:(BOOL)arg4 profile:(id)arg5 error:(*id)arg6 ;
+(BOOL)updateSyncAnchorsWithMap:(id)arg0 type:(NSInteger)arg1 updateDate:(id)arg2 store:(id)arg3 updatePolicy:(NSInteger)arg4 resetInvalid:(BOOL)arg5 profile:(id)arg6 error:(*id)arg7 ;
+(NSInteger)protectionClass;
+(NSInteger)syncAnchorOfType:(NSInteger)arg0 entityIdentifier:(id)arg1 store:(id)arg2 profile:(id)arg3 error:(*id)arg4 ;
+(id)databaseTable;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif
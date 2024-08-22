// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMSHAREDENTITYSYNCACTIVITY_CODABLE_H
#define REMSHAREDENTITYSYNCACTIVITY_CODABLE_H

@class REMSharedEntitySyncActivity;



@interface REMSharedEntitySyncActivity_Codable : REMSharedEntitySyncActivity



+(BOOL)supportsSecureCoding;
-(id)initWithAccountIdentifier:(id)arg0 activityDate:(id)arg1 activityType:(NSInteger)arg2 authorUserRecordIDString:(id)arg3 ckParentCloudObjectEntityName:(id)arg4 ckParentCloudObjectIdentifier:(id)arg5 ckIdentifier:(id)arg6 sharedEntityName:(id)arg7 uuidForChangeTracking:(id)arg8 ;
-(id)initWithCoder:(id)arg0 ;


@end


#endif
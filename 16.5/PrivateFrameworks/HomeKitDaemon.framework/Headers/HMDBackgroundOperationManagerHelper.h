// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDBACKGROUNDOPERATIONMANAGERHELPER_H
#define HMDBACKGROUNDOPERATIONMANAGERHELPER_H

@class HMFObject, NSString;
@protocol HMFLogging;



@interface HMDBackgroundOperationManagerHelper : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)didAuditTimeExpiredOnThisAccessory:(id)arg0 ;
+(BOOL)didAuditTimeExpiredOnThisAirPlayAccessory:(id)arg0 ;
+(id)logCategory;
+(void)addPairingOnAllAccessoriesOfHome:(id)arg0 forSharedUser:(id)arg1 ;
+(void)auditSharedUserEntriesInDatabase:(id)arg0 ;
+(void)auditSharedUserEntriesInDatabaseForAccessory:(id)arg0 ;
+(void)auditSharedUserEntriesInDatabaseForHome:(id)arg0 withCompletionHandler:(id)arg1 ;
+(void)dumpUsers:(id)arg0 usingTag:(id)arg1 ;
+(void)removeAllUsersFromAccessory:(id)arg0 withCompletionHandler:(id)arg1 ;
+(void)removeAllUsersFromAirPlayAccessory:(id)arg0 withCompletionHandler:(id)arg1 ;
+(void)removeAllUsersFromHAPAccessory:(id)arg0 withCompletionHandler:(id)arg1 ;
+(void)removePairingOnAllAccessoriesOfHome:(id)arg0 forSharedUser:(id)arg1 ;
+(void)scheduleAddPairingForAccessory:(id)arg0 forSharedUser:(id)arg1 ;
+(void)scheduleAddPairingForAccessory:(id)arg0 sharedUser:(id)arg1 ;
+(void)scheduleFullAuditForAccessory:(id)arg0 ;
+(void)scheduleRemovePairingForAccessory:(id)arg0 forSharedUser:(id)arg1 ;
+(void)scheduleRemovePairingForAccessory:(id)arg0 sharedUser:(id)arg1 ;
+(void)scheduleRemovePairingForAccessory:(id)arg0 usingPairingIdentity:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSRECEIVERCONNECTION_H
#define CSRECEIVERCONNECTION_H

@class CSXPCConnection, NSArray;
@protocol SpotlightReceiver;



@interface CSReceiverConnection : CSXPCConnection

@property (copy, nonatomic) NSArray *INIntentClassNames; // ivar: _INIntentClassNames
@property (copy, nonatomic) NSArray *bundleIDs; // ivar: _bundleIDs
@property (copy, nonatomic) NSArray *contentTypes; // ivar: _contentTypes
@property (readonly, nonatomic) NSObject<SpotlightReceiver> *receiver; // ivar: _receiver
@property (readonly, nonatomic) int supportedJobs; // ivar: _supportedJobs


-(BOOL)addClientConnectionIfAllowedForConnection:(id)arg0 ;
-(BOOL)handleCommand:(char *)arg0 info:(id)arg1 connection:(id)arg2 ;
-(BOOL)lostClientConnection:(id)arg0 error:(id)arg1 ;
-(id)initWithReceiver:(id)arg0 forServiceName:(id)arg1 ;
-(int)addInteraction:(id)arg0 bundleID:(id)arg1 protectionClass:(id)arg2 ;
-(int)addUserActions:(id)arg0 bundleID:(id)arg1 protectionClass:(id)arg2 ;
-(int)deleteAllInteractionsWithBundleID:(id)arg0 protectionClass:(id)arg1 ;
-(int)deleteAllUserActivities:(id)arg0 ;
-(int)deleteFromBundle:(id)arg0 sinceDate:(id)arg1 domains:(id)arg2 deletes:(id)arg3 ;
-(int)deleteInteractionsWithGroupIdentifiers:(id)arg0 bundleID:(id)arg1 protectionClass:(id)arg2 ;
-(int)deleteInteractionsWithIdentifiers:(id)arg0 bundleID:(id)arg1 protectionClass:(id)arg2 ;
-(int)deleteUserActivitiesWithPersistentIdentifiers:(id)arg0 bundleID:(id)arg1 ;
-(int)donateRelevantActions:(id)arg0 bundleID:(id)arg1 ;
-(int)donateRelevantShortcuts:(id)arg0 bundleID:(id)arg1 ;
-(int)handleSetup:(id)arg0 ;
-(int)indexFromBundle:(id)arg0 protectionClass:(id)arg1 items:(id)arg2 itemsContent:(id)arg3 ;
-(int)purgeFromBundle:(id)arg0 identifiers:(id)arg1 ;


@end


#endif
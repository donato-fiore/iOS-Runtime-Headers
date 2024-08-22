// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGDSPOTLIGHTCOMMANDER_H
#define SGDSPOTLIGHTCOMMANDER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SGSqlEntityStore.h"

@interface SGDSpotlightCommander : NSObject {
    id *_deviceStateToken;
    SGSqlEntityStore *_store;
    NSObject<OS_dispatch_queue> *_serialQueue;
}




+(id)sharedInstance;
-(BOOL)_locked;
-(BOOL)_unlocked;
-(id)_protectionClasses;
-(id)_reimportQueryForPersonHandle:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 requestId:(NSUInteger)arg3 ;
-(id)init;
-(id)queryForPersonHandle:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 contentTypes:(id)arg3 ;
-(void)_attemptToProcessRequests;
-(void)_executeReimportOfIdentifiers:(id)arg0 ;
-(void)_issueCommand:(id)arg0 ;
-(void)_registerForLockStateChange;
-(void)_reimportFromBundleId:(id)arg0 protectionClasses:(id)arg1 identifiers:(id)arg2 ;
-(void)_unregisterForLockStateChange;
-(void)requestReimportForHistoricalDataRequest:(id)arg0 ;
-(void)requestReimportFromIdentifier:(id)arg0 forPersonHandle:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;


@end


#endif
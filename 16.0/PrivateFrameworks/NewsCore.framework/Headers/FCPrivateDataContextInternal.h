// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCPRIVATEDATACONTEXTINTERNAL_H
#define FCPRIVATEDATACONTEXTINTERNAL_H

@class NSString;
@protocol FCPrivateDataContextInternal, FCAppActivityMonitor;

#import <Foundation/Foundation.h>

#import "FCCKRecordZone.h"
#import "FCCKPrivateDatabase.h"
#import "FCCKRecordZoneManager.h"

@interface FCPrivateDataContextInternal : NSObject <FCPrivateDataContextInternal>



@property (retain, nonatomic) NSObject<FCAppActivityMonitor> *appActivityMonitor; // ivar: _appActivityMonitor
@property (readonly, nonatomic) FCCKRecordZone *channelMembershipsRecordZone;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) FCCKRecordZone *issueReadingHistoryRecordZone;
@property (retain, nonatomic) FCCKPrivateDatabase *privateDatabase; // ivar: _privateDatabase
@property (readonly, nonatomic) FCCKRecordZone *readingHistoryRecordZone;
@property (readonly, nonatomic) FCCKRecordZone *readingListRecordZone;
@property (retain, nonatomic) FCCKRecordZoneManager *recordZoneManager; // ivar: _recordZoneManager
@property (readonly, nonatomic) FCCKRecordZone *sensitiveSubscriptionsRecordZone;
@property (readonly, nonatomic) FCCKRecordZone *shortcutsRecordZone;
@property (readonly, nonatomic) FCCKRecordZone *subscriptionsRecordZone;
@property (readonly) Class superclass;
@property (readonly, nonatomic) FCCKRecordZone *userInfoRecordZone;


-(id)init;
-(id)recordZoneWithName:(id)arg0 ;
-(void)prepareRecordZonesForUseWithCompletionHandler:(id)arg0 ;


@end


#endif
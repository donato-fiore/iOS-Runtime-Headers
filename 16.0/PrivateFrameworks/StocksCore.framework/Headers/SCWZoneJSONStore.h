// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCWZONEJSONSTORE_H
#define SCWZONEJSONSTORE_H

@class NSDate, NSArray, CKServerChangeToken;
@protocol SCWZoneStore;

#import <Foundation/Foundation.h>

#import "SCWZoneSchema.h"

@interface SCWZoneJSONStore : NSObject <SCWZoneStore>



@property (copy, nonatomic) NSDate *lastDirtyDate; // ivar: _lastDirtyDate
@property (copy, nonatomic) NSDate *lastSyncDate; // ivar: _lastSyncDate
@property (copy, nonatomic) NSArray *pendingCommands; // ivar: _pendingCommands
@property (copy, nonatomic) CKServerChangeToken *serverChangeToken; // ivar: _serverChangeToken
@property (copy, nonatomic) NSArray *serverRecords; // ivar: _serverRecords
@property (readonly, nonatomic) SCWZoneSchema *zoneSchema; // ivar: _zoneSchema


-(id)initWithZoneSchema:(id)arg0 serverRecords:(id)arg1 lastSyncDate:(id)arg2 lastDirtyDate:(id)arg3 serverChangeToken:(id)arg4 pendingCommands:(id)arg5 ;
-(void)addPendingCommands:(id)arg0 ;
-(void)applyServerRecordsDiff:(id)arg0 ;
-(void)clearPendingCommandsUpToCount:(NSUInteger)arg0 ;


@end


#endif
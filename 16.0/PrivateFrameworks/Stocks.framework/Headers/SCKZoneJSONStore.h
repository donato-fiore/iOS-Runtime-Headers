// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCKZONEJSONSTORE_H
#define SCKZONEJSONSTORE_H

@class NSDate, NSArray, CKServerChangeToken, NSString;
@protocol SCKZoneStore;

#import <Foundation/Foundation.h>


@interface SCKZoneJSONStore : NSObject <SCKZoneStore>



@property (copy, nonatomic) NSDate *lastDirtyDate; // ivar: _lastDirtyDate
@property (copy, nonatomic) NSDate *lastSyncDate; // ivar: _lastSyncDate
@property (copy, nonatomic) NSArray *pendingCommands; // ivar: _pendingCommands
@property (copy, nonatomic) CKServerChangeToken *serverChangeToken; // ivar: _serverChangeToken
@property (copy, nonatomic) NSArray *serverRecords; // ivar: _serverRecords
@property (copy, nonatomic) NSString *zoneName; // ivar: _zoneName


-(id)initWithZoneName:(id)arg0 serverRecords:(id)arg1 lastSyncDate:(id)arg2 lastDirtyDate:(id)arg3 serverChangeToken:(id)arg4 pendingCommands:(id)arg5 ;
-(void)addPendingCommands:(id)arg0 ;
-(void)applyServerRecordsDiff:(id)arg0 ;
-(void)clearPendingCommandsUpToCount:(NSUInteger)arg0 ;


@end


#endif
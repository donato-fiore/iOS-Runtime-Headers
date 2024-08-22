// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCKZONEMEMORYSTORE_H
#define SCKZONEMEMORYSTORE_H

@class NSDate, NSArray, CKServerChangeToken;
@protocol SCKZoneStore;

#import <Foundation/Foundation.h>


@interface SCKZoneMemoryStore : NSObject <SCKZoneStore>



@property (copy, nonatomic) NSDate *lastDirtyDate; // ivar: _lastDirtyDate
@property (copy, nonatomic) NSDate *lastSyncDate; // ivar: _lastSyncDate
@property (copy, nonatomic) NSArray *pendingCommands; // ivar: _pendingCommands
@property (copy, nonatomic) CKServerChangeToken *serverChangeToken; // ivar: _serverChangeToken
@property (copy, nonatomic) NSArray *serverRecords; // ivar: _serverRecords


-(id)init;
-(void)addPendingCommands:(id)arg0 ;
-(void)applyServerRecordsDiff:(id)arg0 ;
-(void)clearPendingCommandsUpToCount:(NSUInteger)arg0 ;


@end


#endif
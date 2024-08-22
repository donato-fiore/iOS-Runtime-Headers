// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDPDCIRCLEJOINRESULT_H
#define CDPDCIRCLEJOINRESULT_H


#import <Foundation/Foundation.h>


@interface CDPDCircleJoinResult : NSObject

@property NSUInteger circleStatus; // ivar: _circleStatus
@property BOOL didJoin; // ivar: _didJoin
@property BOOL hasPeersForRemoteApproval; // ivar: _hasPeersForRemoteApproval
@property BOOL hasPeersWithCDPBackupRecords; // ivar: _hasPeersWithCDPBackupRecords
@property BOOL needsBackupRecovery; // ivar: _needsBackupRecovery
@property NSUInteger remotePeeriCKState; // ivar: _remotePeeriCKState
@property BOOL requiresEscrowRecordsFetch; // ivar: _requiresEscrowRecordsFetch
@property BOOL requiresInitialSync; // ivar: _requiresInitialSync




@end


#endif
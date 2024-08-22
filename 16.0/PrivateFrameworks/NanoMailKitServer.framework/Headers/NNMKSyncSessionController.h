// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NNMKSYNCSESSIONCONTROLLER_H
#define NNMKSYNCSESSIONCONTROLLER_H

@class NSDate, NSMutableSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface NNMKSyncSessionController : NSObject

@property (nonatomic) CGFloat accountAuthRequestLastRequestTime; // ivar: _accountAuthRequestLastRequestTime
@property (nonatomic) BOOL deviceInStandalone; // ivar: _deviceInStandalone
@property (retain, nonatomic) NSDate *lastSyncDueToMailboxesMismatchRequestTime; // ivar: _lastSyncDueToMailboxesMismatchRequestTime
@property (retain, nonatomic) NSMutableSet *messageIdsToIgnoreStatusUpdates; // ivar: _messageIdsToIgnoreStatusUpdates
@property (retain, nonatomic) NSMutableDictionary *notificationPayloadAcks; // ivar: _notificationPayloadAcks
@property (retain, nonatomic) NSMutableDictionary *standaloneStateByAccountId; // ivar: _standaloneStateByAccountId
@property (retain, nonatomic) NSMutableDictionary *syncingAccountIdentityByUsername; // ivar: _syncingAccountIdentityByUsername


-(NSUInteger)standaloneStateForAccountId:(id)arg0 ;
-(id)init;
-(void)deleteStandaloneStateForAccountId:(id)arg0 ;
-(void)updateStandaloneState:(NSUInteger)arg0 forAccountId:(id)arg1 ;


@end


#endif
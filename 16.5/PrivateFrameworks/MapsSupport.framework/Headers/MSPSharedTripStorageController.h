// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPSHAREDTRIPSTORAGECONTROLLER_H
#define MSPSHAREDTRIPSTORAGECONTROLLER_H

@class NSMutableDictionary;
@protocol MSPSharedTripStorageDelegate;

#import <Foundation/Foundation.h>

#import "MSPGroupSessionStorage.h"

@interface MSPSharedTripStorageController : NSObject

@property (weak, nonatomic) NSObject<MSPSharedTripStorageDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMutableDictionary *receiverRules; // ivar: _receiverRules
@property (retain, nonatomic) NSMutableDictionary *senderRules; // ivar: _senderRules
@property (retain, nonatomic) MSPGroupSessionStorage *senderSessionStorage; // ivar: _senderSessionStorage
@property (retain, nonatomic) NSMutableDictionary *sharedTripGroupSessionInfo; // ivar: _sharedTripGroupSessionInfo


+(id)_receivedNotificationRulesPath;
+(id)_receivedSessionsPath;
+(id)_sentNotificationRulesPath;
+(void)removeFilesFromBackupsIfNeeded;
-(id)groupSessionInfoForKey:(id)arg0 ;
-(id)init;
-(id)receivingRulesForIdentifier:(id)arg0 ;
-(id)sendingRulesForIdentifier:(id)arg0 ;
-(void)_loadSenderSession;
-(void)_loadStoredSessions;
-(void)_saveReceivingRules;
-(void)_saveSenderSession;
-(void)_saveSendingRules;
-(void)_saveStoredSessions;
-(void)addNewSession:(id)arg0 originator:(id)arg1 receivingHandle:(id)arg2 receivingAccountIdentifier:(id)arg3 ;
-(void)dealloc;
-(void)receivingRulesTouched;
-(void)removeSession:(id)arg0 ;
-(void)sendingRulesTouched;
-(void)updateGroupSessionStorageWithState:(id)arg0 ;


@end


#endif
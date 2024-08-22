// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef POPACCOUNT_H
#define POPACCOUNT_H

@class MailAccount, MFActivityMonitor, NSConditionLock, NSArray, MFLock, NSString;


#import "MFPOP3Connection.h"

@interface POPAccount : MailAccount {
    MFActivityMonitor *_fetchMonitor;
    MFPOP3Connection *_connection;
    NSConditionLock *_sharedConnectionCondition;
    NSUInteger _connectionsInUse;
    NSArray *_currentUIDs;
    MFLock *_connectionActivityLock;
    float _connectionTimeout;
    BOOL _fetcherNeedsReset;
    BOOL _hasDoneBackgroundSynchronization;
    BOOL _shouldAttemptAPOP;
    NSString *_oldestMessageUID;
    NSString *_newestMessageUID;
    NSInteger _numberOfKnownUIDs;
}




+(*void)legacyKeychainProtocol;
+(id)accountTypeIdentifier;
+(id)accountTypeString;
+(id)csAccountTypeString;
+(id)saslProfileName;
+(unsigned int)defaultPortNumber;
+(unsigned int)defaultSecurePortNumber;
+(void)initialize;
-(BOOL)canCreateNewMailboxes;
-(BOOL)canGoOffline;
-(BOOL)canMailboxBeRenamed:(id)arg0 ;
-(BOOL)requiresAuthentication;
-(BOOL)shouldAttemptAPOP;
-(BOOL)shouldRestoreMessagesAfterFailedDelete;
-(BOOL)supportsPurge;
-(BOOL)supportsSyncingReadState;
-(Class)connectionClass;
-(Class)storeClass;
-(Class)storeClassForMailbox:(id)arg0 ;
-(NSInteger)fetchNumNewMessages:(NSUInteger)arg0 oldMessages:(NSUInteger)arg1 preservingUID:(id)arg2 withStore:(id)arg3 ;
-(NSInteger)numberOfKnownUIDs;
-(NSUInteger)connectionsInUse;
-(id)_URLScheme;
-(id)_createNewConnection;
-(id)_getCachedConnection;
-(id)authenticatedConnection;
-(id)certUIService;
-(id)initWithLibrary:(id)arg0 persistentAccount:(id)arg1 ;
-(id)mailboxPathExtension;
-(id)mailboxUidOfType:(int)arg0 createIfNeeded:(BOOL)arg1 ;
-(id)newestKnownMessageUID;
-(id)oldestKnownMessageUID;
-(id)secureServiceName;
-(id)serviceName;
-(id)statisticsKind;
-(int)messageDeletionPolicy;
-(unsigned int)delayedMessageDeletionInterval;
-(void)_deleteHook;
-(void)checkInConnection:(id)arg0 currentUIDs:(id)arg1 ;
-(void)closeCachedConnection;
-(void)closeCachedConnectionForcedOnly:(id)arg0 ;
-(void)closeConnection:(id)arg0 andSaveUIDs:(id)arg1 ;
-(void)releaseAllConnections;
-(void)releaseAllForcedConnections;
-(void)scheduleDisconnect;
-(void)setDelayedMessageDeletionInterval:(unsigned int)arg0 ;
-(void)setMessageDeletionPolicy:(int)arg0 ;
-(void)setNewestKnownMessageUID:(id)arg0 ;
-(void)setNumberOfKnownUIDs:(NSInteger)arg0 ;
-(void)setOldestKnownMessageUID:(id)arg0 ;
-(void)setPreferredAuthScheme:(id)arg0 ;
-(void)setShouldAttemptAPOP:(BOOL)arg0 ;


@end


#endif
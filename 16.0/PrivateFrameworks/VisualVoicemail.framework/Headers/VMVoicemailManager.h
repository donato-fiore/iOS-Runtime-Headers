// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VMVOICEMAILMANAGER_H
#define VMVOICEMAILMANAGER_H

@class NSArray, NSString, NSProgress, NSMutableSet, NSOrderedSet;
@protocol VMClientXPCProtocol, OS_dispatch_queue, VMServerXPCProtocol;

#import <Foundation/Foundation.h>

#import "VMVoicemailCapabilities.h"
#import "VMClientWrapper.h"

@interface VMVoicemailManager : NSObject <VMClientXPCProtocol>

 {
    BOOL fMailSync;
    BOOL fHasDeviceBeenUnlockedSinceBoot;
}


@property (readonly, nonatomic) os_unfair_lock_s accessorLock; // ivar: _accessorLock
@property (copy, nonatomic) NSArray *accounts; // ivar: _accounts
@property (readonly, nonatomic) NSArray *allVoicemails;
@property (readonly, nonatomic) BOOL canChangeGreeting; // ivar: _canChangeGreeting
@property (readonly, nonatomic) BOOL canChangePassword; // ivar: _canChangePassword
@property (retain, nonatomic) VMVoicemailCapabilities *capabilities; // ivar: _capabilities
@property (retain, nonatomic) VMClientWrapper *client; // ivar: _client
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // ivar: _completionQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL mailboxRequiresSetup; // ivar: _mailboxRequiresSetup
@property (nonatomic, getter=isMessageWaiting) BOOL messageWaiting; // ivar: _messageWaiting
@property (nonatomic, getter=isOnline) BOOL online; // ivar: _online
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialDispatchQueue; // ivar: _serialDispatchQueue
@property (readonly, nonatomic) NSObject<VMServerXPCProtocol> *serverConnection;
@property (nonatomic) NSUInteger storageUsage; // ivar: _storageUsage
@property (nonatomic, getter=isSubscribed) BOOL subscribed; // ivar: _subscribed
@property (readonly) Class superclass;
@property (nonatomic, getter=isSyncInProgress) BOOL syncInProgress; // ivar: _syncInProgress
@property (nonatomic) int token; // ivar: _token
@property (nonatomic, getter=isTranscribing) BOOL transcribing; // ivar: _transcribing
@property (readonly, nonatomic, getter=isTranscriptionEnabled) BOOL transcriptionEnabled;
@property (readonly, nonatomic, getter=isTranscriptionEnabled) BOOL transcriptionEnabled; // ivar: _transcriptionEnabled
@property (readonly, nonatomic) NSProgress *transcriptionProgress; // ivar: _transcriptionProgress
@property (retain, nonatomic) NSMutableSet *trashedMessages; // ivar: _trashedMessages
@property (readonly, nonatomic) NSInteger unreadCount;
@property (copy, nonatomic) NSOrderedSet *voicemails; // ivar: _voicemails


-(BOOL)isGreetingChangeSupportedForAccountUUID:(id)arg0 ;
-(BOOL)isPasscodeChangeSupportedForAccountUUID:(id)arg0 ;
-(CGFloat)maximumGreetingDurationForAccountUUID:(id)arg0 ;
-(NSInteger)maximumPasscodeLengthForAccountUUID:(id)arg0 ;
-(NSInteger)messageCountForMailboxType:(NSInteger)arg0 error:(*id)arg1 ;
-(NSInteger)messageCountForMailboxType:(NSInteger)arg0 read:(BOOL)arg1 error:(*id)arg2 ;
-(NSInteger)minimumPasscodeLengthForAccountUUID:(id)arg0 ;
-(NSUInteger)countOfVoicemailsPassingTest:(id)arg0 ;
-(id)asynchronousServerConnectionWithErrorHandler:(id)arg0 ;
-(id)dataForVoicemailWithIdentifier:(NSUInteger)arg0 ;
-(id)deleteVoicemail:(id)arg0 ;
-(id)deleteVoicemails:(id)arg0 ;
-(id)fetchAccounts;
-(id)init;
-(id)initWithClient:(id)arg0 ;
-(id)initWithClient:(id)arg0 mailSync:(BOOL)arg1 ;
-(id)initWithoutMailSync;
-(id)markVoicemailAsRead:(id)arg0 ;
-(id)markVoicemailsAsRead:(id)arg0 ;
-(id)messagesForMailboxType:(NSInteger)arg0 limit:(NSInteger)arg1 offset:(NSInteger)arg2 error:(*id)arg3 ;
-(id)messagesForMailboxType:(NSInteger)arg0 read:(BOOL)arg1 limit:(NSInteger)arg2 offset:(NSInteger)arg3 error:(*id)arg4 ;
-(id)removeVoicemailFromTrash:(id)arg0 ;
-(id)removeVoicemailsFromTrash:(id)arg0 ;
-(id)synchronousServerConnectionWithErrorHandler:(id)arg0 ;
-(id)trashVoicemail:(id)arg0 ;
-(id)trashVoicemails:(id)arg0 ;
-(id)uniqueIdentifierForVoiceMail:(id)arg0 ;
-(id)voicemailWithIdentifier:(NSUInteger)arg0 ;
-(id)voicemailsPassingTest:(id)arg0 ;
-(void)_checkFirstUnlock;
-(void)_requestInitialStateIfNecessaryAndSendNotifications:(BOOL)arg0 ;
-(void)changePassword:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)dealloc;
-(void)greetingForAccountUUID:(id)arg0 completion:(id)arg1 ;
-(void)messageCountForMailboxType:(NSInteger)arg0 completion:(id)arg1 ;
-(void)messageCountForMailboxType:(NSInteger)arg0 read:(BOOL)arg1 completion:(id)arg2 ;
-(void)obliterate;
-(void)performAtomicAccessorBlock:(id)arg0 ;
-(void)performSynchronousBlock:(id)arg0 ;
-(void)remapAccount:(id)arg0 toAccount:(id)arg1 ;
-(void)reportTranscriptionProblemForVoicemail:(id)arg0 ;
-(void)reportTranscriptionRatedAccurate:(BOOL)arg0 forVoicemail:(id)arg1 ;
-(void)requestInitialStateIfNecessaryAndSendNotifications:(BOOL)arg0 ;
-(void)resetNetworkSettings;
-(void)retrieveDataForVoicemail:(id)arg0 ;
-(void)saveGreeting:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)setGreeting:(id)arg0 forAccountUUID:(id)arg1 completion:(id)arg2 ;
-(void)setPasscode:(id)arg0 forAccountUUID:(id)arg1 completion:(id)arg2 ;
-(void)startMailSyncing;
-(void)synchronize;
-(void)updateAccounts:(id)arg0 ;
-(void)voicemailsUpdated:(id)arg0 ;


@end


#endif
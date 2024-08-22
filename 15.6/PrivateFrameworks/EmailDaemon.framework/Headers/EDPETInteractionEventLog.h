// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDPETINTERACTIONEVENTLOG_H
#define EDPETINTERACTIONEVENTLOG_H

@class SGMailIntelligenceStringHasher, NSNumber, EFLazyCache, CNContactStore, NSURL, EFMutableInt64Set, NSString, NSFileHandle, NSData;
@protocol EFLoggable, EDPBHasher, EDInteractionEventLog, EMUserProfileProvider, EMVIPManager, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface EDPETInteractionEventLog : NSObject <EFLoggable, EDPBHasher, EDInteractionEventLog>

 {
    SGMailIntelligenceStringHasher *_stringHasher;
    NSInteger _userID;
    NSInteger _deviceID;
    NSNumber *_persistentBits;
}


@property (readonly, nonatomic) EFLazyCache *contactIDCache; // ivar: _contactIDCache
@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (retain, nonatomic) NSURL *currentLogFile; // ivar: _currentLogFile
@property (retain, nonatomic) EFMutableInt64Set *currentLogMessageIDs; // ivar: _currentLogMessageIDs
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSURL *directory; // ivar: _directory
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSFileHandle *logFileHandle; // ivar: _logFileHandle
@property (retain, nonatomic) NSString *meContactIdentifier; // ivar: _meContactIdentifier
@property (readonly, nonatomic) NSObject<EMUserProfileProvider> *profileProvider; // ivar: _profileProvider
@property (retain, nonatomic) NSData *rotatingSalt; // ivar: _rotatingSalt
@property (nonatomic) uint8_t sequenceNumber; // ivar: _sequenceNumber
@property (nonatomic) uint8_t shouldLog; // ivar: _shouldLog
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<EMVIPManager> *vipManager; // ivar: _vipManager
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)log;
+(void)enumerateFramesInData:(id)arg0 block:(id)arg1 ;
-(BOOL)_isLogQuotaReached;
-(BOOL)_openCurrentLogfile;
-(NSInteger)_truncatedSHA256:(id)arg0 ;
-(NSInteger)deviceID;
-(NSInteger)hashedAccountID:(id)arg0 ;
-(NSInteger)hashedContactIDForAddress:(id)arg0 ;
-(NSInteger)hashedConversationID:(NSInteger)arg0 ;
-(NSInteger)hashedMailboxID:(id)arg0 ;
-(NSInteger)hashedString:(id)arg0 ;
-(NSInteger)userID;
-(NSUInteger)_estimateStopCount:(id)arg0 ;
-(NSUInteger)_truncatedUNIXTimestampFromDate:(id)arg0 ;
-(id)_buildLogFileURLInDir:(id)arg0 ;
-(id)_currentLocaleIdentifier;
-(id)_eventForName:(int)arg0 date:(id)arg1 ;
-(id)_framedMessage:(id)arg0 ;
-(id)_messageDataEventForMessage:(id)arg0 account:(id)arg1 ;
-(id)_scanForMessageIDs:(id)arg0 logVersion:(*NSInteger)arg1 ;
-(id)batchedEventsForSubmission;
-(id)hashedMessageHeadersForMessage:(id)arg0 ;
-(id)initWithDirectory:(id)arg0 userProfileProvider:(id)arg1 contactStore:(id)arg2 vipManager:(id)arg3 ;
-(id)persistentBits;
-(int)_eventNameFromString:(id)arg0 ;
-(int)_openFileForAppending:(id)arg0 ;
-(int)_timezoneOffset;
-(struct ? )hashedSubject:(id)arg0 ;
-(void)_compressFramedMessagesIntoBatch:(id)arg0 ;
-(void)_resetIdentifiers;
-(void)_rotateLogWithCompressedData:(id)arg0 ;
-(void)_writeEvent:(id)arg0 ;
-(void)_writeHeader;
-(void)_writeMessageDataIfNecessary:(id)arg0 ;
-(void)_writeMessageDataIfNecessary:(id)arg0 account:(id)arg1 ;
-(void)_writeQuotaReachedEvent;
-(void)persistEvent:(id)arg0 dataFromMessage:(id)arg1 ;
-(void)persistEvent:(id)arg0 dataFromMessage:(id)arg1 account:(id)arg2 ;
-(void)persistEvent:(id)arg0 date:(id)arg1 conversationID:(NSInteger)arg2 data:(id)arg3 ;
-(void)persistEvent:(id)arg0 date:(id)arg1 message:(id)arg2 data:(id)arg3 ;
-(void)persistEvent:(id)arg0 date:(id)arg1 message:(id)arg2 mailbox:(id)arg3 ;
-(void)persistEvent:(id)arg0 date:(id)arg1 message:(id)arg2 mailboxType:(NSInteger)arg3 ;
-(void)waitForPendingWrites;


@end


#endif
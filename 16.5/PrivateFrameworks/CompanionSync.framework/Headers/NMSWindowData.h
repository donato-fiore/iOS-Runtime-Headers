// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMSWINDOWDATA_H
#define NMSWINDOWDATA_H

@class NSString, NSDate, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_SYSharedServiceDB.h"

@interface NMSWindowData : NSObject {
    NSString *_path;
    *__CFString _loggingFacility;
    NSObject<OS_dispatch_queue> *_syncQ;
    *sqlite3 _db;
    _SYSharedServiceDB *_sharedDB;
    *sqlite3_stmt _addMessageInFlight;
    *sqlite3_stmt _getMessageLength;
    *sqlite3_stmt _removeMessageInFlight;
    *sqlite3_stmt _getNextExpireDate;
    *sqlite3_stmt _getExpiredMessageIDs;
    *sqlite3_stmt _getBytesInFlight;
    *sqlite3_stmt _getCountInFlight;
    *sqlite3_stmt _pushPendingMessage;
    *sqlite3_stmt _getPendingMessage;
    *sqlite3_stmt _popPendingMessage;
    *sqlite3_stmt _countPendingMessages;
}


@property (readonly, nonatomic) NSUInteger countOfAllMessagesInFlight;
@property (readonly, nonatomic) NSUInteger countOfPendingMessages;
@property (readonly, nonatomic) NSDate *dateOfNextMessageExpiry;
@property (readonly, nonatomic) NSArray *expiredMessageIDs;
@property (readonly, nonatomic) NSUInteger lengthOfAllMessagesInFlight;


-(BOOL)_openDBForceRecreate:(BOOL)arg0 ;
-(BOOL)_syncTransaction:(BOOL)arg0 block:(id)arg1 ;
-(NSUInteger)removeAndReturnLengthOfMessageWithID:(id)arg0 ;
-(NSUInteger)removeAndReturnLengthOfMessagesWithIDs:(id)arg0 ;
-(id)init;
-(id)initWithPath:(id)arg0 logFacility:(struct __CFString *)arg1 ;
-(id)initWithSharedDBForServiceName:(id)arg0 ;
-(id)popPendingMessage;
-(int)_getSchemaVersion;
-(struct sqlite3 *)dbRef;
-(void)_ensureSchema;
-(void)_prepareStatements;
-(void)_withDB:(id)arg0 ;
-(void)addMessageWithID:(id)arg0 ofLength:(NSUInteger)arg1 timeoutTime:(CGFloat)arg2 ;
-(void)dealloc;
-(void)pushPendingMessageData:(id)arg0 timeToLive:(CGFloat)arg1 ;
-(void)removeAllMessages;


@end


#endif
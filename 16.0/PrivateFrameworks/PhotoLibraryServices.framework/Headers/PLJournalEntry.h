// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLJOURNALENTRY_H
#define PLJOURNALENTRY_H

@class NSPersistentHistoryToken;
@protocol PLJournalEntryPayload, PLJournalEntryPayloadID;

#import <Foundation/Foundation.h>

#import "PLJournalEntryHeader.h"

@interface PLJournalEntry : NSObject

@property (retain, nonatomic) PLJournalEntryHeader *header; // ivar: _header
@property (retain, nonatomic) NSPersistentHistoryToken *historyToken; // ivar: _historyToken
@property (retain, nonatomic) NSObject<PLJournalEntryPayload> *payload; // ivar: _payload
@property (retain, nonatomic) NSObject<PLJournalEntryPayloadID> *payloadID; // ivar: _payloadID
@property (nonatomic) unsigned int payloadVersion;


-(BOOL)_readFromFileHandle:(id)arg0 decodePayload:(BOOL)arg1 payloadClass:(Class)arg2 error:(*id)arg3 ;
-(BOOL)readFromFileHandle:(id)arg0 decodePayload:(BOOL)arg1 payloadClass:(Class)arg2 entryOffset:(*NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)writeToFileHandle:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)entryType;
-(id)debugDescription;
-(id)description;
-(id)descriptionWithBuilder:(id)arg0 ;
-(id)entryTypeDescription;
-(id)init;
-(id)initForDeleteWithPayloadID:(id)arg0 ;
-(id)initForInsertWithPayload:(id)arg0 ;
-(id)initForUpdateWithPayload:(id)arg0 ;
-(id)initWithPayloadID:(id)arg0 payload:(id)arg1 entryType:(int)arg2 ;
-(void)_appendHeaderData:(id)arg0 headerCRC:(unsigned short)arg1 payloadData:(id)arg2 toFileHandle:(id)arg3 ;
-(void)appendHeaderData:(id)arg0 headerCRC:(unsigned short)arg1 payloadData:(id)arg2 toFileHandle:(id)arg3 ;
-(void)writeBytes:(*void)arg0 length:(NSUInteger)arg1 toFileHandle:(id)arg2 ;


@end


#endif
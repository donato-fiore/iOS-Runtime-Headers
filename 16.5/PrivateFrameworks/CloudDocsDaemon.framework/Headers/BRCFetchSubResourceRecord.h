// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCFETCHSUBRESOURCERECORD_H
#define BRCFETCHSUBRESOURCERECORD_H

@class CKRecord, CKRecordID, NSData;

#import <Foundation/Foundation.h>


@interface BRCFetchSubResourceRecord : NSObject

@property (readonly, nonatomic) CKRecord *record; // ivar: _record
@property (readonly, nonatomic) CKRecordID *recordID; // ivar: _recordID
@property (retain, nonatomic) CKRecordID *recordIDBlockingSave; // ivar: _recordIDBlockingSave
@property (retain, nonatomic) CKRecordID *recordIDNeedingFetch; // ivar: _recordIDNeedingFetch
@property (readonly, nonatomic) NSInteger recordType; // ivar: _recordType
@property (retain, nonatomic) NSData *xattrSignature; // ivar: _xattrSignature


-(BOOL)isWaitingOnShareIDFetch;
-(NSInteger)resolveRecordType;
-(id)description;
-(id)initWithChangedRecord:(id)arg0 shareID:(id)arg1 xattrSignatureNeedingFetch:(id)arg2 structureRecordBlockingSave:(id)arg3 ;
-(id)initWithRecordIDNeedingFetch:(id)arg0 recordType:(NSInteger)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMBCLOUDZONERECORDPUSHCONFLICT_H
#define HMBCLOUDZONERECORDPUSHCONFLICT_H

@class HMFObject, CKRecord, CKRecordID;



@interface HMBCloudZoneRecordPushConflict : HMFObject

@property (readonly) CKRecord *ancestorRecord; // ivar: _ancestorRecord
@property (readonly) CKRecord *clientRecord; // ivar: _clientRecord
@property (readonly) CKRecordID *recordID; // ivar: _recordID
@property (readonly) CKRecord *serverRecord; // ivar: _serverRecord


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)initWithRecordID:(id)arg0 clientRecord:(id)arg1 serverRecord:(id)arg2 ancestorRecord:(id)arg3 ;
-(id)initWithRecordID:(id)arg0 error:(id)arg1 ;


@end


#endif
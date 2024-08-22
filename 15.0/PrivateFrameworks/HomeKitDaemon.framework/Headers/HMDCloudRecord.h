// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCLOUDRECORD_H
#define HMDCLOUDRECORD_H

@class HMFObject, NSData, NSUUID, CKRecord, CKRecordID, NSString;


#import "HMDCloudZone.h"

@interface HMDCloudRecord : HMFObject

@property (retain, nonatomic) NSData *cachedData; // ivar: _cachedData
@property (weak, nonatomic) HMDCloudZone *cloudZone; // ivar: _cloudZone
@property (nonatomic) BOOL controllerIdentifierChanged; // ivar: _controllerIdentifierChanged
@property (retain, nonatomic) NSData *data;
@property (nonatomic) BOOL decryptionFailed; // ivar: _decryptionFailed
@property (nonatomic) BOOL encryptionFailed; // ivar: _encryptionFailed
@property (readonly) NSUInteger objectEncoding;
@property (retain, nonatomic) NSUUID *objectID; // ivar: _objectID
@property (retain, nonatomic) CKRecord *record; // ivar: _record
@property (readonly, nonatomic, getter=isRecordCached) BOOL recordCached;
@property (readonly, nonatomic, getter=isRecordCreated) BOOL recordCreated; // ivar: _recordCreated
@property (retain, nonatomic) CKRecordID *recordID; // ivar: _recordID
@property (readonly, nonatomic) NSString *recordName; // ivar: _recordName
@property (readonly, nonatomic) NSString *recordType;


+(id)logCategory;
+(id)shortDescription;
-(BOOL)encodeObjectChange:(id)arg0 ;
-(id)description;
-(id)extractObjectChange;
-(id)init;
-(id)initWithObjectID:(id)arg0 recordName:(id)arg1 cloudZone:(id)arg2 ;
-(id)shortDescription;
-(void)clearData;


@end


#endif
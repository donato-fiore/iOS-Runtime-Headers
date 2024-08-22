// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDRECORDPCSDATA_H
#define CKDRECORDPCSDATA_H

@class NSData, CKEncryptedData, CKRecordID, NSString, CKRecordZoneID;
@protocol NSSecureCoding;


#import "CKDPCSData.h"
#import "CKDChainPCSData.h"
#import "CKDRecordPCSData.h"
#import "CKDSharePCSData.h"
#import "CKDZonePCSData.h"

@interface CKDRecordPCSData : CKDPCSData <NSSecureCoding>



@property (retain, nonatomic) CKDChainPCSData *chainPCSData; // ivar: _chainPCSData
@property (retain, nonatomic) NSData *chainParentPublicKeyID; // ivar: _chainParentPublicKeyID
@property (retain, nonatomic) CKEncryptedData *encryptedPublicSharingKey; // ivar: _encryptedPublicSharingKey
@property (retain, nonatomic) CKRecordID *parentID; // ivar: _parentID
@property (retain, nonatomic) CKDRecordPCSData *parentPCSData; // ivar: _parentPCSData
@property (retain, nonatomic) CKRecordID *recordID; // ivar: _recordID
@property (readonly, nonatomic) NSString *recordType; // ivar: _recordType
@property (retain, nonatomic) CKRecordID *shareID; // ivar: _shareID
@property (retain, nonatomic) CKDSharePCSData *sharePCSData; // ivar: _sharePCSData
@property (nonatomic) *_OpaquePCSShareProtection signingPCS; // ivar: _signingPCS
@property (retain, nonatomic) CKRecordZoneID *zoneID; // ivar: _zoneID
@property (retain, nonatomic) CKDZonePCSData *zonePCSData; // ivar: _zonePCSData
@property (retain, nonatomic) NSData *zoneishPublicKeyID; // ivar: _zoneishPublicKeyID


+(BOOL)supportsSecureCoding;
+(id)dataWithRecord:(id)arg0 ;
-(BOOL)shouldEncodePCSData;
-(id)CKPropertiesDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPCSData:(id)arg0 recordID:(id)arg1 ;
-(id)initWithRecord:(id)arg0 ;
-(id)itemID;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setPcs:(struct _OpaquePCSShareProtection *)arg0 ;


@end


#endif
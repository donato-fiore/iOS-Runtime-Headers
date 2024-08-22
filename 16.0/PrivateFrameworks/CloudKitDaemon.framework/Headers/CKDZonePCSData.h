// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDZONEPCSDATA_H
#define CKDZONEPCSDATA_H

@class CKRecordID, CKRecordZoneID, NSDate, NSData;
@protocol NSSecureCoding, NSCopying;


#import "CKDPCSData.h"
#import "CKDSharePCSData.h"

@interface CKDZonePCSData : CKDPCSData <NSSecureCoding, NSCopying>

 {
    *_OpaquePCSShareProtection _zoneishPCS;
}


@property (retain, nonatomic) CKRecordID *shareID; // ivar: _shareID
@property (retain, nonatomic) CKDSharePCSData *sharePCSData; // ivar: _sharePCSData
@property (retain, nonatomic) CKRecordZoneID *zoneID; // ivar: _zoneID
@property (retain, nonatomic) NSDate *zonePCSModificationDate; // ivar: _zonePCSModificationDate
@property (nonatomic) *_OpaquePCSShareProtection zoneishPCS;
@property (copy, nonatomic) NSData *zoneishPCSData; // ivar: _zoneishPCSData
@property (retain, nonatomic) NSData *zoneishPublicKeyID; // ivar: _zoneishPublicKeyID


+(BOOL)supportsSecureCoding;
+(id)dataWithZone:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithZone:(id)arg0 ;
-(id)itemID;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
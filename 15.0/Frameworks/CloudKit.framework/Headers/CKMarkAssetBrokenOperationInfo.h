// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKMARKASSETBROKENOPERATIONINFO_H
#define CKMARKASSETBROKENOPERATIONINFO_H

@class NSString;
@protocol NSSecureCoding;


#import "CKDatabaseOperationInfo.h"
#import "CKRecordID.h"
#import "CKUploadRequestConfiguration.h"

@interface CKMarkAssetBrokenOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>



@property (nonatomic) BOOL bypassPCSEncryptionForTouchRepairZone; // ivar: _bypassPCSEncryptionForTouchRepairZone
@property (retain, nonatomic) NSString *field; // ivar: _field
@property (nonatomic) NSInteger listIndex; // ivar: _listIndex
@property (retain, nonatomic) CKRecordID *recordID; // ivar: _recordID
@property (nonatomic) BOOL simulateCorruptAsset; // ivar: _simulateCorruptAsset
@property (nonatomic) BOOL touchRepairZone; // ivar: _touchRepairZone
@property (retain, nonatomic) CKUploadRequestConfiguration *uploadRequestConfiguration; // ivar: _uploadRequestConfiguration
@property (nonatomic) BOOL writeRepairRecord; // ivar: _writeRepairRecord


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
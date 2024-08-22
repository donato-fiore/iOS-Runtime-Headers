// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKASSETUPLOADREQUESTMETADATA_H
#define CKASSETUPLOADREQUESTMETADATA_H

@class NSData;
@protocol NSSecureCoding;


#import "CKUploadRequestMetadata.h"

@interface CKAssetUploadRequestMetadata : CKUploadRequestMetadata <NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *fileSignature; // ivar: _fileSignature
@property (readonly, nonatomic) NSInteger listIndex; // ivar: _listIndex
@property (readonly, copy, nonatomic) NSData *referenceSignature; // ivar: _referenceSignature


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg0 private:(BOOL)arg1 shouldExpand:(BOOL)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRepairZoneRecordID:(id)arg0 databaseScope:(NSInteger)arg1 recordID:(id)arg2 recordType:(id)arg3 fieldName:(id)arg4 ;
-(id)initWithRepairZoneRecordID:(id)arg0 databaseScope:(NSInteger)arg1 recordID:(id)arg2 recordType:(id)arg3 fieldName:(id)arg4 fileSignature:(id)arg5 referenceSignature:(id)arg6 ;
-(id)initWithRepairZoneRecordID:(id)arg0 databaseScope:(NSInteger)arg1 recordID:(id)arg2 recordType:(id)arg3 fieldName:(id)arg4 fileSignature:(id)arg5 referenceSignature:(id)arg6 listIndex:(NSInteger)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
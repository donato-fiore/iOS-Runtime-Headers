// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKPACKAGEUPLOADREQUESTMETADATA_H
#define CKPACKAGEUPLOADREQUESTMETADATA_H

@class NSArray;
@protocol NSSecureCoding;


#import "CKUploadRequestMetadata.h"

@interface CKPackageUploadRequestMetadata : CKUploadRequestMetadata <NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *fileSignatures; // ivar: _fileSignatures
@property (readonly, copy, nonatomic) NSArray *referenceSignatures; // ivar: _referenceSignatures


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRepairZoneRecordID:(id)arg0 databaseScope:(NSInteger)arg1 recordID:(id)arg2 recordType:(id)arg3 fieldName:(id)arg4 ;
-(id)initWithRepairZoneRecordID:(id)arg0 databaseScope:(NSInteger)arg1 recordID:(id)arg2 recordType:(id)arg3 fieldName:(id)arg4 fileSignatures:(id)arg5 referenceSignatures:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
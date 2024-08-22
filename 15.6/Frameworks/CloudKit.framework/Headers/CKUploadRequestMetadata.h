// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKUPLOADREQUESTMETADATA_H
#define CKUPLOADREQUESTMETADATA_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CKRecordID.h"

@interface CKUploadRequestMetadata : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSInteger databaseScope; // ivar: _databaseScope
@property (readonly, copy, nonatomic) NSString *fieldName; // ivar: _fieldName
@property (readonly, copy, nonatomic) CKRecordID *recordID; // ivar: _recordID
@property (readonly, copy, nonatomic) NSString *recordType; // ivar: _recordType
@property (readonly, nonatomic) CKRecordID *repairZoneRecordID; // ivar: _repairZoneRecordID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg0 private:(BOOL)arg1 shouldExpand:(BOOL)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRepairZoneRecordID:(id)arg0 databaseScope:(NSInteger)arg1 recordID:(id)arg2 recordType:(id)arg3 fieldName:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
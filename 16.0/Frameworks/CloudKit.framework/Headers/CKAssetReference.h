// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKASSETREFERENCE_H
#define CKASSETREFERENCE_H

@class NSString, NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CKRecordID.h"

@interface CKAssetReference : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSInteger databaseScope; // ivar: _databaseScope
@property (readonly, copy, nonatomic) NSString *fieldName; // ivar: _fieldName
@property (readonly, copy, nonatomic) NSData *fileSignature; // ivar: _fileSignature
@property (readonly, copy, nonatomic) CKRecordID *recordID; // ivar: _recordID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg0 private:(BOOL)arg1 shouldExpand:(BOOL)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExistingRecordID:(id)arg0 databaseScope:(NSInteger)arg1 fieldName:(id)arg2 fileSignature:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
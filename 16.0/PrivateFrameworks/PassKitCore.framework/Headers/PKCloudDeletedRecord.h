// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCLOUDDELETEDRECORD_H
#define PKCLOUDDELETEDRECORD_H

@class CKRecordID, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKCloudDeletedRecord : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL isPass;
@property (readonly, nonatomic) BOOL isPassCatalog;
@property (readonly, nonatomic) BOOL isRemoteAsset;
@property (readonly, nonatomic) CKRecordID *recordID; // ivar: _recordID
@property (readonly, copy, nonatomic) NSString *recordName;
@property (readonly, copy, nonatomic) NSString *recordType; // ivar: _recordType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDeletedRecord:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecordID:(id)arg0 recordType:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
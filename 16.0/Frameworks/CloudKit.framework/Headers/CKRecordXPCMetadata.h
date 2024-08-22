// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKRECORDXPCMETADATA_H
#define CKRECORDXPCMETADATA_H

@class NSArray, NSDate, NSString, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CKRecord.h"

@interface CKRecordXPCMetadata : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *allPCSKeyIDs; // ivar: _allPCSKeyIDs
@property (copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (copy, nonatomic) NSString *etag; // ivar: _etag
@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (copy, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (copy, nonatomic) NSData *pcsKeyID; // ivar: _pcsKeyID
@property (copy, nonatomic) NSData *protectionData; // ivar: _protectionData
@property (copy, nonatomic) CKRecord *serverRecord; // ivar: _serverRecord
@property (copy, nonatomic) NSData *zoneishKeyID; // ivar: _zoneishKeyID


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
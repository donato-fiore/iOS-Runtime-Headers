// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKMODIFYRECORDACCESSOPERATIONINFO_H
#define CKMODIFYRECORDACCESSOPERATIONINFO_H

@class NSArray;
@protocol NSSecureCoding;


#import "CKDatabaseOperationInfo.h"

@interface CKModifyRecordAccessOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>



@property (retain, nonatomic) NSArray *recordIDsToGrant; // ivar: _recordIDsToGrant
@property (retain, nonatomic) NSArray *recordIDsToRevoke; // ivar: _recordIDsToRevoke


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
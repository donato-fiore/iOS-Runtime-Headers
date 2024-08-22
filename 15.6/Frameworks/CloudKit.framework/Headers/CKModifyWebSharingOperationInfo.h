// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKMODIFYWEBSHARINGOPERATIONINFO_H
#define CKMODIFYWEBSHARINGOPERATIONINFO_H

@class NSArray;
@protocol NSSecureCoding;


#import "CKDatabaseOperationInfo.h"

@interface CKModifyWebSharingOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>



@property (retain, nonatomic) NSArray *recordIDsToShare; // ivar: _recordIDsToShare
@property (retain, nonatomic) NSArray *recordIDsToShareReadWrite; // ivar: _recordIDsToShareReadWrite
@property (retain, nonatomic) NSArray *recordIDsToUnshare; // ivar: _recordIDsToUnshare


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
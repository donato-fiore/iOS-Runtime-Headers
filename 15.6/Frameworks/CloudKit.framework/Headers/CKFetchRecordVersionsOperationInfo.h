// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKFETCHRECORDVERSIONSOPERATIONINFO_H
#define CKFETCHRECORDVERSIONSOPERATIONINFO_H

@class NSArray, NSString;
@protocol NSSecureCoding;


#import "CKDatabaseOperationInfo.h"

@interface CKFetchRecordVersionsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>



@property (retain, nonatomic) NSArray *desiredKeys; // ivar: _desiredKeys
@property (retain, nonatomic) NSString *minimumVersionETag; // ivar: _minimumVersionETag
@property (retain, nonatomic) NSArray *recordIDs; // ivar: _recordIDs
@property (nonatomic) BOOL shouldFetchAssetContent; // ivar: _shouldFetchAssetContent


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
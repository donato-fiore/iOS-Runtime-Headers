// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKFETCHRECORDZONESOPERATIONINFO_H
#define CKFETCHRECORDZONESOPERATIONINFO_H

@class NSArray;
@protocol NSSecureCoding;


#import "CKDatabaseOperationInfo.h"

@interface CKFetchRecordZonesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>



@property (nonatomic) BOOL ignorePCSFailures; // ivar: _ignorePCSFailures
@property (nonatomic) BOOL isFetchAllRecordZonesOperation; // ivar: _isFetchAllRecordZonesOperation
@property (retain, nonatomic) NSArray *recordZoneIDs; // ivar: _recordZoneIDs


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKAGGREGATEZONEPCSOPERATIONINFO_H
#define CKAGGREGATEZONEPCSOPERATIONINFO_H

@class NSArray;
@protocol NSSecureCoding;


#import "CKDatabaseOperationInfo.h"
#import "CKRecordZone.h"

@interface CKAggregateZonePCSOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>



@property (retain, nonatomic) NSArray *sourceZoneIDs; // ivar: _sourceZoneIDs
@property (retain, nonatomic) CKRecordZone *targetZone; // ivar: _targetZone


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
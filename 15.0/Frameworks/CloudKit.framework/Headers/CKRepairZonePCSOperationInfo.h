// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKREPAIRZONEPCSOPERATIONINFO_H
#define CKREPAIRZONEPCSOPERATIONINFO_H

@class NSArray;
@protocol NSSecureCoding;


#import "CKDatabaseOperationInfo.h"

@interface CKRepairZonePCSOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>



@property (retain, nonatomic) NSArray *zoneIDs; // ivar: _zoneIDs


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
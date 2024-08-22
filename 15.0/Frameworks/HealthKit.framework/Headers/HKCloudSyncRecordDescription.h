// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCLOUDSYNCRECORDDESCRIPTION_H
#define HKCLOUDSYNCRECORDDESCRIPTION_H

@class NSArray, NSString, NSDate, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKCloudSyncRecordIDDescription.h"

@interface HKCloudSyncRecordDescription : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *childRecordDescriptions; // ivar: _childRecordDescriptions
@property (readonly, copy, nonatomic) NSString *detailedDescription; // ivar: _detailedDescription
@property (readonly, copy, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (readonly, copy, nonatomic) HKCloudSyncRecordIDDescription *recordIDDescription; // ivar: _recordIDDescription
@property (readonly, copy, nonatomic) NSString *recordType; // ivar: _recordType
@property (readonly, copy, nonatomic) NSNumber *schemaVersion; // ivar: _schemaVersion


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecordIDDescription:(id)arg0 recordType:(id)arg1 schemaVersion:(id)arg2 modificationDate:(id)arg3 detailedDescription:(id)arg4 childRecordDescriptions:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
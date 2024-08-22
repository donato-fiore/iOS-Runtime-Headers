// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRUNITTESTINGCLUSTERTESTCOMPLEXNULLABLEOPTIONALRESPONSEPARAMS_H
#define MTRUNITTESTINGCLUSTERTESTCOMPLEXNULLABLEOPTIONALRESPONSEPARAMS_H

@class NSNumber, NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MTRUnitTestingClusterSimpleStruct.h"

@interface MTRUnitTestingClusterTestComplexNullableOptionalResponseParams : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *nullableIntValue; // ivar: _nullableIntValue
@property (copy, nonatomic) NSNumber *nullableIntWasNull; // ivar: _nullableIntWasNull
@property (copy, nonatomic) NSArray *nullableListValue; // ivar: _nullableListValue
@property (copy, nonatomic) NSNumber *nullableListWasNull; // ivar: _nullableListWasNull
@property (copy, nonatomic) NSNumber *nullableOptionalIntValue; // ivar: _nullableOptionalIntValue
@property (copy, nonatomic) NSNumber *nullableOptionalIntWasNull; // ivar: _nullableOptionalIntWasNull
@property (copy, nonatomic) NSNumber *nullableOptionalIntWasPresent; // ivar: _nullableOptionalIntWasPresent
@property (copy, nonatomic) NSArray *nullableOptionalListValue; // ivar: _nullableOptionalListValue
@property (copy, nonatomic) NSNumber *nullableOptionalListWasNull; // ivar: _nullableOptionalListWasNull
@property (copy, nonatomic) NSNumber *nullableOptionalListWasPresent; // ivar: _nullableOptionalListWasPresent
@property (copy, nonatomic) NSString *nullableOptionalStringValue; // ivar: _nullableOptionalStringValue
@property (copy, nonatomic) NSNumber *nullableOptionalStringWasNull; // ivar: _nullableOptionalStringWasNull
@property (copy, nonatomic) NSNumber *nullableOptionalStringWasPresent; // ivar: _nullableOptionalStringWasPresent
@property (copy, nonatomic) MTRUnitTestingClusterSimpleStruct *nullableOptionalStructValue; // ivar: _nullableOptionalStructValue
@property (copy, nonatomic) NSNumber *nullableOptionalStructWasNull; // ivar: _nullableOptionalStructWasNull
@property (copy, nonatomic) NSNumber *nullableOptionalStructWasPresent; // ivar: _nullableOptionalStructWasPresent
@property (copy, nonatomic) NSString *nullableStringValue; // ivar: _nullableStringValue
@property (copy, nonatomic) NSNumber *nullableStringWasNull; // ivar: _nullableStringWasNull
@property (copy, nonatomic) MTRUnitTestingClusterSimpleStruct *nullableStructValue; // ivar: _nullableStructValue
@property (copy, nonatomic) NSNumber *nullableStructWasNull; // ivar: _nullableStructWasNull
@property (copy, nonatomic) NSNumber *optionalIntValue; // ivar: _optionalIntValue
@property (copy, nonatomic) NSNumber *optionalIntWasPresent; // ivar: _optionalIntWasPresent
@property (copy, nonatomic) NSArray *optionalListValue; // ivar: _optionalListValue
@property (copy, nonatomic) NSNumber *optionalListWasPresent; // ivar: _optionalListWasPresent
@property (copy, nonatomic) NSString *optionalStringValue; // ivar: _optionalStringValue
@property (copy, nonatomic) NSNumber *optionalStringWasPresent; // ivar: _optionalStringWasPresent
@property (copy, nonatomic) MTRUnitTestingClusterSimpleStruct *optionalStructValue; // ivar: _optionalStructValue
@property (copy, nonatomic) NSNumber *optionalStructWasPresent; // ivar: _optionalStructWasPresent
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif
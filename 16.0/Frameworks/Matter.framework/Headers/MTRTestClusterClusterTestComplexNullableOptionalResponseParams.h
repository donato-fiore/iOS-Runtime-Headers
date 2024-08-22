// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRTESTCLUSTERCLUSTERTESTCOMPLEXNULLABLEOPTIONALRESPONSEPARAMS_H
#define MTRTESTCLUSTERCLUSTERTESTCOMPLEXNULLABLEOPTIONALRESPONSEPARAMS_H

@class NSNumber, NSArray, NSString;

#import <Foundation/Foundation.h>

#import "MTRTestClusterClusterSimpleStruct.h"

@interface MTRTestClusterClusterTestComplexNullableOptionalResponseParams : NSObject

@property (retain, nonatomic) NSNumber *nullableIntValue; // ivar: _nullableIntValue
@property (retain, nonatomic) NSNumber *nullableIntWasNull; // ivar: _nullableIntWasNull
@property (retain, nonatomic) NSArray *nullableListValue; // ivar: _nullableListValue
@property (retain, nonatomic) NSNumber *nullableListWasNull; // ivar: _nullableListWasNull
@property (retain, nonatomic) NSNumber *nullableOptionalIntValue; // ivar: _nullableOptionalIntValue
@property (retain, nonatomic) NSNumber *nullableOptionalIntWasNull; // ivar: _nullableOptionalIntWasNull
@property (retain, nonatomic) NSNumber *nullableOptionalIntWasPresent; // ivar: _nullableOptionalIntWasPresent
@property (retain, nonatomic) NSArray *nullableOptionalListValue; // ivar: _nullableOptionalListValue
@property (retain, nonatomic) NSNumber *nullableOptionalListWasNull; // ivar: _nullableOptionalListWasNull
@property (retain, nonatomic) NSNumber *nullableOptionalListWasPresent; // ivar: _nullableOptionalListWasPresent
@property (retain, nonatomic) NSString *nullableOptionalStringValue; // ivar: _nullableOptionalStringValue
@property (retain, nonatomic) NSNumber *nullableOptionalStringWasNull; // ivar: _nullableOptionalStringWasNull
@property (retain, nonatomic) NSNumber *nullableOptionalStringWasPresent; // ivar: _nullableOptionalStringWasPresent
@property (retain, nonatomic) MTRTestClusterClusterSimpleStruct *nullableOptionalStructValue; // ivar: _nullableOptionalStructValue
@property (retain, nonatomic) NSNumber *nullableOptionalStructWasNull; // ivar: _nullableOptionalStructWasNull
@property (retain, nonatomic) NSNumber *nullableOptionalStructWasPresent; // ivar: _nullableOptionalStructWasPresent
@property (retain, nonatomic) NSString *nullableStringValue; // ivar: _nullableStringValue
@property (retain, nonatomic) NSNumber *nullableStringWasNull; // ivar: _nullableStringWasNull
@property (retain, nonatomic) MTRTestClusterClusterSimpleStruct *nullableStructValue; // ivar: _nullableStructValue
@property (retain, nonatomic) NSNumber *nullableStructWasNull; // ivar: _nullableStructWasNull
@property (retain, nonatomic) NSNumber *optionalIntValue; // ivar: _optionalIntValue
@property (retain, nonatomic) NSNumber *optionalIntWasPresent; // ivar: _optionalIntWasPresent
@property (retain, nonatomic) NSArray *optionalListValue; // ivar: _optionalListValue
@property (retain, nonatomic) NSNumber *optionalListWasPresent; // ivar: _optionalListWasPresent
@property (retain, nonatomic) NSString *optionalStringValue; // ivar: _optionalStringValue
@property (retain, nonatomic) NSNumber *optionalStringWasPresent; // ivar: _optionalStringWasPresent
@property (retain, nonatomic) MTRTestClusterClusterSimpleStruct *optionalStructValue; // ivar: _optionalStructValue
@property (retain, nonatomic) NSNumber *optionalStructWasPresent; // ivar: _optionalStructWasPresent
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif
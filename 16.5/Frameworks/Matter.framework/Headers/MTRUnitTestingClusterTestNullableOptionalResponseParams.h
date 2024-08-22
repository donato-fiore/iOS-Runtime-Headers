// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRUNITTESTINGCLUSTERTESTNULLABLEOPTIONALRESPONSEPARAMS_H
#define MTRUNITTESTINGCLUSTERTESTNULLABLEOPTIONALRESPONSEPARAMS_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRUnitTestingClusterTestNullableOptionalResponseParams : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *originalValue; // ivar: _originalValue
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (copy, nonatomic) NSNumber *value; // ivar: _value
@property (copy, nonatomic) NSNumber *wasNull; // ivar: _wasNull
@property (copy, nonatomic) NSNumber *wasPresent; // ivar: _wasPresent


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRUNITTESTINGCLUSTERNULLABLESANDOPTIONALSSTRUCT_H
#define MTRUNITTESTINGCLUSTERNULLABLESANDOPTIONALSSTRUCT_H

@class NSNumber, NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MTRUnitTestingClusterSimpleStruct.h"

@interface MTRUnitTestingClusterNullablesAndOptionalsStruct : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *nullableInt; // ivar: _nullableInt
@property (copy, nonatomic) NSArray *nullableList; // ivar: _nullableList
@property (copy, nonatomic) NSNumber *nullableOptionalInt; // ivar: _nullableOptionalInt
@property (copy, nonatomic) NSArray *nullableOptionalList; // ivar: _nullableOptionalList
@property (copy, nonatomic) NSString *nullableOptionalString; // ivar: _nullableOptionalString
@property (copy, nonatomic) MTRUnitTestingClusterSimpleStruct *nullableOptionalStruct; // ivar: _nullableOptionalStruct
@property (copy, nonatomic) NSString *nullableString; // ivar: _nullableString
@property (copy, nonatomic) MTRUnitTestingClusterSimpleStruct *nullableStruct; // ivar: _nullableStruct
@property (copy, nonatomic) NSNumber *optionalInt; // ivar: _optionalInt
@property (copy, nonatomic) NSArray *optionalList; // ivar: _optionalList
@property (copy, nonatomic) NSString *optionalString; // ivar: _optionalString
@property (copy, nonatomic) MTRUnitTestingClusterSimpleStruct *optionalStruct; // ivar: _optionalStruct


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif
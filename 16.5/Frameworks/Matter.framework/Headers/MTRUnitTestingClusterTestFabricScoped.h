// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRUNITTESTINGCLUSTERTESTFABRICSCOPED_H
#define MTRUNITTESTINGCLUSTERTESTFABRICSCOPED_H

@class NSNumber, NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MTRUnitTestingClusterSimpleStruct.h"

@interface MTRUnitTestingClusterTestFabricScoped : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *fabricIndex; // ivar: _fabricIndex
@property (copy, nonatomic) NSString *fabricSensitiveCharString; // ivar: _fabricSensitiveCharString
@property (copy, nonatomic) NSNumber *fabricSensitiveInt8u; // ivar: _fabricSensitiveInt8u
@property (copy, nonatomic) NSArray *fabricSensitiveInt8uList; // ivar: _fabricSensitiveInt8uList
@property (copy, nonatomic) MTRUnitTestingClusterSimpleStruct *fabricSensitiveStruct; // ivar: _fabricSensitiveStruct
@property (copy, nonatomic) NSNumber *nullableFabricSensitiveInt8u; // ivar: _nullableFabricSensitiveInt8u
@property (copy, nonatomic) NSNumber *nullableOptionalFabricSensitiveInt8u; // ivar: _nullableOptionalFabricSensitiveInt8u
@property (copy, nonatomic) NSNumber *optionalFabricSensitiveInt8u; // ivar: _optionalFabricSensitiveInt8u


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif
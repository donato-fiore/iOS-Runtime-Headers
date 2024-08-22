// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRTESTCLUSTERCLUSTERTESTFABRICSCOPED_H
#define MTRTESTCLUSTERCLUSTERTESTFABRICSCOPED_H

@class NSNumber, NSString, NSArray;

#import <Foundation/Foundation.h>

#import "MTRTestClusterClusterSimpleStruct.h"

@interface MTRTestClusterClusterTestFabricScoped : NSObject

@property (retain, nonatomic) NSNumber *fabricIndex; // ivar: _fabricIndex
@property (retain, nonatomic) NSString *fabricSensitiveCharString; // ivar: _fabricSensitiveCharString
@property (retain, nonatomic) NSNumber *fabricSensitiveInt8u; // ivar: _fabricSensitiveInt8u
@property (retain, nonatomic) NSArray *fabricSensitiveInt8uList; // ivar: _fabricSensitiveInt8uList
@property (retain, nonatomic) MTRTestClusterClusterSimpleStruct *fabricSensitiveStruct; // ivar: _fabricSensitiveStruct
@property (retain, nonatomic) NSNumber *nullableFabricSensitiveInt8u; // ivar: _nullableFabricSensitiveInt8u
@property (retain, nonatomic) NSNumber *nullableOptionalFabricSensitiveInt8u; // ivar: _nullableOptionalFabricSensitiveInt8u
@property (retain, nonatomic) NSNumber *optionalFabricSensitiveInt8u; // ivar: _optionalFabricSensitiveInt8u


-(id)description;
-(id)init;


@end


#endif
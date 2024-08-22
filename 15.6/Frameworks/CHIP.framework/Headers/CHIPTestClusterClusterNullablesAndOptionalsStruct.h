// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTESTCLUSTERCLUSTERNULLABLESANDOPTIONALSSTRUCT_H
#define CHIPTESTCLUSTERCLUSTERNULLABLESANDOPTIONALSSTRUCT_H

@class NSNumber, NSArray, NSString;

#import <Foundation/Foundation.h>

#import "CHIPTestClusterClusterSimpleStruct.h"

@interface CHIPTestClusterClusterNullablesAndOptionalsStruct : NSObject

@property (retain, nonatomic) NSNumber *nullableInt; // ivar: _nullableInt
@property (retain, nonatomic) NSArray *nullableList; // ivar: _nullableList
@property (retain, nonatomic) NSNumber *nullableOptionalInt; // ivar: _nullableOptionalInt
@property (retain, nonatomic) NSArray *nullableOptionalList; // ivar: _nullableOptionalList
@property (retain, nonatomic) NSString *nullableOptionalString; // ivar: _nullableOptionalString
@property (retain, nonatomic) CHIPTestClusterClusterSimpleStruct *nullableOptionalStruct; // ivar: _nullableOptionalStruct
@property (retain, nonatomic) NSString *nullableString; // ivar: _nullableString
@property (retain, nonatomic) CHIPTestClusterClusterSimpleStruct *nullableStruct; // ivar: _nullableStruct
@property (retain, nonatomic) NSNumber *optionalInt; // ivar: _optionalInt
@property (retain, nonatomic) NSArray *optionalList; // ivar: _optionalList
@property (retain, nonatomic) NSString *optionalString; // ivar: _optionalString
@property (retain, nonatomic) CHIPTestClusterClusterSimpleStruct *optionalStruct; // ivar: _optionalStruct


-(id)init;


@end


#endif
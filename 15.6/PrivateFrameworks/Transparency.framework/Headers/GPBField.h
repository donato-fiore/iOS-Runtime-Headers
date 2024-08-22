// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GPBFIELD_H
#define GPBFIELD_H

@class NSString, NSMutableArray;


#import "GPBMessage.h"

@interface GPBField : GPBMessage

@property (nonatomic) int cardinality;
@property (copy, nonatomic) NSString *defaultValue;
@property (copy, nonatomic) NSString *jsonName;
@property (nonatomic) int kind;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int number;
@property (nonatomic) int oneofIndex;
@property (retain, nonatomic) NSMutableArray *optionsArray;
@property (readonly, nonatomic) NSUInteger optionsArray_Count;
@property (nonatomic) BOOL packed;
@property (copy, nonatomic) NSString *typeURL;


+(id)descriptor;


@end


#endif
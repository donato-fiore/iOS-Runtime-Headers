// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GPBTYPE_H
#define GPBTYPE_H

@class NSMutableArray, NSString;


#import "GPBMessage.h"
#import "GPBSourceContext.h"

@interface GPBType : GPBMessage

@property (retain, nonatomic) NSMutableArray *fieldsArray;
@property (readonly, nonatomic) NSUInteger fieldsArray_Count;
@property (nonatomic) BOOL hasSourceContext;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *oneofsArray;
@property (readonly, nonatomic) NSUInteger oneofsArray_Count;
@property (retain, nonatomic) NSMutableArray *optionsArray;
@property (readonly, nonatomic) NSUInteger optionsArray_Count;
@property (retain, nonatomic) GPBSourceContext *sourceContext;
@property (nonatomic) int syntax;


+(id)descriptor;


@end


#endif
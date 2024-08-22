// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIPBTYPE_H
#define TRIPBTYPE_H

@class NSMutableArray, NSString;


#import "TRIPBMessage.h"
#import "TRIPBSourceContext.h"

@interface TRIPBType : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *fieldsArray;
@property (readonly, nonatomic) NSUInteger fieldsArray_Count;
@property (nonatomic) BOOL hasSourceContext;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *oneofsArray;
@property (readonly, nonatomic) NSUInteger oneofsArray_Count;
@property (retain, nonatomic) NSMutableArray *optionsArray;
@property (readonly, nonatomic) NSUInteger optionsArray_Count;
@property (retain, nonatomic) TRIPBSourceContext *sourceContext;
@property (nonatomic) int syntax;


+(id)descriptor;


@end


#endif
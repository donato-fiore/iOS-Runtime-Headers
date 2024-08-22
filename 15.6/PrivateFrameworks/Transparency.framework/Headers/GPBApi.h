// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GPBAPI_H
#define GPBAPI_H

@class NSMutableArray, NSString;


#import "GPBMessage.h"
#import "GPBSourceContext.h"

@interface GPBApi : GPBMessage

@property (nonatomic) BOOL hasSourceContext;
@property (retain, nonatomic) NSMutableArray *methodsArray;
@property (readonly, nonatomic) NSUInteger methodsArray_Count;
@property (retain, nonatomic) NSMutableArray *mixinsArray;
@property (readonly, nonatomic) NSUInteger mixinsArray_Count;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *optionsArray;
@property (readonly, nonatomic) NSUInteger optionsArray_Count;
@property (retain, nonatomic) GPBSourceContext *sourceContext;
@property (nonatomic) int syntax;
@property (copy, nonatomic) NSString *version;


+(id)descriptor;


@end


#endif
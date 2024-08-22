// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GPBMETHOD_H
#define GPBMETHOD_H

@class NSString, NSMutableArray;


#import "GPBMessage.h"

@interface GPBMethod : GPBMessage

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *optionsArray;
@property (readonly, nonatomic) NSUInteger optionsArray_Count;
@property (nonatomic) BOOL requestStreaming;
@property (copy, nonatomic) NSString *requestTypeURL;
@property (nonatomic) BOOL responseStreaming;
@property (copy, nonatomic) NSString *responseTypeURL;
@property (nonatomic) int syntax;


+(id)descriptor;


@end


#endif
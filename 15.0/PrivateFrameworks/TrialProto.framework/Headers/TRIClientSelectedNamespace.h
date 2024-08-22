// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRICLIENTSELECTEDNAMESPACE_H
#define TRICLIENTSELECTEDNAMESPACE_H

@class NSString;


#import "TRIPBMessage.h"
#import "TRIPBUInt32Array.h"

@interface TRIClientSelectedNamespace : TRIPBMessage

@property (retain, nonatomic) TRIPBUInt32Array *compatibilityVersionArray;
@property (readonly, nonatomic) NSUInteger compatibilityVersionArray_Count;
@property (nonatomic) BOOL hasName;
@property (copy, nonatomic) NSString *name;


+(id)descriptor;


@end


#endif
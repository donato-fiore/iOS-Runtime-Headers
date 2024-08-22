// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIPREDICATE_H
#define TRIPREDICATE_H

@class NSMutableArray;


#import "TRIPBMessage.h"

@interface TRIPredicate : TRIPBMessage

@property (nonatomic) BOOL hasOperation;
@property (nonatomic) BOOL hasSystemVariable;
@property (retain, nonatomic) NSMutableArray *operandArray;
@property (readonly, nonatomic) NSUInteger operandArray_Count;
@property (nonatomic) int operation;
@property (nonatomic) int systemVariable;


+(id)descriptor;


@end


#endif
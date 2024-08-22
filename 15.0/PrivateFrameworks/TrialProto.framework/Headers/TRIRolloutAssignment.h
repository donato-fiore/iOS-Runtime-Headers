// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIROLLOUTASSIGNMENT_H
#define TRIROLLOUTASSIGNMENT_H

@class NSMutableArray, NSString;


#import "TRIPBMessage.h"

@interface TRIRolloutAssignment : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *factorPackIdArray;
@property (readonly, nonatomic) NSUInteger factorPackIdArray_Count;
@property (copy, nonatomic) NSString *factorPackSetId;
@property (nonatomic) BOOL hasFactorPackSetId;
@property (retain, nonatomic) NSMutableArray *predicateArray;
@property (readonly, nonatomic) NSUInteger predicateArray_Count;


+(id)descriptor;


@end


#endif
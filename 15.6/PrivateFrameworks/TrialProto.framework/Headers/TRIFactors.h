// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIFACTORS_H
#define TRIFACTORS_H

@class NSMutableArray;


#import "TRIPBMessage.h"

@interface TRIFactors : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *factorArray;
@property (readonly, nonatomic) NSUInteger factorArray_Count;


+(id)descriptor;


@end


#endif
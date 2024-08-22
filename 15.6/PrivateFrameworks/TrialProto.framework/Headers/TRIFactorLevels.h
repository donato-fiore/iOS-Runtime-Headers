// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIFACTORLEVELS_H
#define TRIFACTORLEVELS_H

@class NSMutableArray;


#import "TRIPBMessage.h"

@interface TRIFactorLevels : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *factorLevelArray;
@property (readonly, nonatomic) NSUInteger factorLevelArray_Count;


+(id)descriptor;


@end


#endif
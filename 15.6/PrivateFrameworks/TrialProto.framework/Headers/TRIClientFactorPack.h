// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRICLIENTFACTORPACK_H
#define TRICLIENTFACTORPACK_H

@class NSMutableArray, NSString;


#import "TRIPBMessage.h"
#import "TRIClientSelectedNamespace.h"

@interface TRIClientFactorPack : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *factorLevelArray;
@property (readonly, nonatomic) NSUInteger factorLevelArray_Count;
@property (copy, nonatomic) NSString *factorPackId;
@property (nonatomic) BOOL hasFactorPackId;
@property (nonatomic) BOOL hasSelectedNamespace;
@property (retain, nonatomic) TRIClientSelectedNamespace *selectedNamespace;


+(id)descriptor;


@end


#endif
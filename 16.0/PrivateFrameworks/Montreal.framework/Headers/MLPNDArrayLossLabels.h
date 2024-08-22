// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLPNDARRAYLOSSLABELS_H
#define MLPNDARRAYLOSSLABELS_H

@class NSArray, NSMutableArray;

#import <Foundation/Foundation.h>


@interface MLPNDArrayLossLabels : NSObject

@property (retain) NSArray *labels; // ivar: _labels
@property (retain) NSMutableArray *largeReductionSumResult; // ivar: _largeReductionSumResult
@property (retain) NSMutableArray *smallReductionSumResult; // ivar: _smallReductionSumResult


-(id)init;


@end


#endif
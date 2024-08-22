// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLPSEQDATABATCH_H
#define MLPSEQDATABATCH_H

@class NSArray;


#import "MLPDataBatch.h"
#import "MLPNDArrayLossLabels.h"

@interface MLPSeqDataBatch : MLPDataBatch

@property (retain) MLPNDArrayLossLabels *combinedLossLabels; // ivar: _combinedLossLabels
@property NSUInteger labelsCount; // ivar: _labelsCount
@property (retain) NSArray *matrix; // ivar: _matrix


-(id)initWithDataBatch:(id)arg0 batchSize:(NSUInteger)arg1 network:(id)arg2 ;


@end


#endif
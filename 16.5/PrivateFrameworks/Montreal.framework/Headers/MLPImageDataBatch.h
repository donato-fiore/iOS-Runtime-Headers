// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLPIMAGEDATABATCH_H
#define MLPIMAGEDATABATCH_H

@class NSArray;


#import "MLPDataBatch.h"

@interface MLPImageDataBatch : MLPDataBatch

@property (retain) NSArray *images; // ivar: _images
@property (retain) NSArray *labels; // ivar: _labels
@property (retain) NSArray *lossLabels; // ivar: _lossLabels


-(id)initWithDataBatch:(id)arg0 batchSize:(NSUInteger)arg1 network:(id)arg2 ;


@end


#endif
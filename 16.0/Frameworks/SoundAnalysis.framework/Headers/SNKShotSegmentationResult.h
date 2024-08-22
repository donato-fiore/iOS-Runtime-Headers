// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNKSHOTSEGMENTATIONRESULT_H
#define SNKSHOTSEGMENTATIONRESULT_H

@class MLMultiArray, NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface SNKShotSegmentationResult : NSObject

@property (retain) MLMultiArray *exemplarEmbedding; // ivar: _exemplarEmbedding
@property (copy) NSNumber *exemplarIndex; // ivar: _exemplarIndex
@property (copy) NSArray *segments; // ivar: _segments




@end


#endif
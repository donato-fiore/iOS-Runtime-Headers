// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXDISPLAYCACHEINTERMEDIATEFORMAT_H
#define ATXDISPLAYCACHEINTERMEDIATEFORMAT_H

@class NSArray, NSIndexSet;

#import <Foundation/Foundation.h>


@interface ATXDisplayCacheIntermediateFormat : NSObject

@property (readonly, nonatomic) NSArray *actions; // ivar: _actions
@property (readonly, nonatomic) NSIndexSet *lockscreenPredictionIndices; // ivar: _lockscreenPredictionIndices
@property (readonly, nonatomic) NSArray *predictionChunks; // ivar: _predictionChunks


+(id)fromActions:(id)arg0 ;


@end


#endif
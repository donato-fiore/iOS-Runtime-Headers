// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLBATCHEDTENSORSHOLDER_H
#define MLBATCHEDTENSORSHOLDER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface MLBatchedTensorsHolder : NSObject

@property (readonly, nonatomic) NSDictionary *batchedTensors; // ivar: _batchedTensors
@property (readonly, nonatomic) NSUInteger numberOfTensors; // ivar: _numberOfTensors


-(id)initWithBatchedTensors:(id)arg0 numberOfTensors:(NSUInteger)arg1 ;


@end


#endif
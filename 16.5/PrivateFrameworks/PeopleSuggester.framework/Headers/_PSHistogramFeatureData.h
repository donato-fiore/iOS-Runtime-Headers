// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PSHISTOGRAMFEATUREDATA_H
#define _PSHISTOGRAMFEATUREDATA_H

@class NSDictionary, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _PSHistogramFeatureData : NSObject

@property (retain, nonatomic) NSDictionary *bucketHasEver; // ivar: _bucketHasEver
@property (retain, nonatomic) NSDictionary *bucketSums; // ivar: _bucketSums
@property (retain, nonatomic) NSDictionary *cache; // ivar: _cache
@property (retain, nonatomic) NSMutableDictionary *candidateTimeIntervalSums; // ivar: _candidateTimeIntervalSums
@property (retain, nonatomic) NSDictionary *factorToUniqueBucketNames; // ivar: _factorToUniqueBucketNames




@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSNSURLBATCHENUMERATOR_H
#define DSNSURLBATCHENUMERATOR_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface DSNSURLBatchEnumerator : NSObject {
    NSArray *_urls;
    NSArray *_targetNames;
    NSUInteger _index;
    NSUInteger _batchSize;
}




-(id)initWithURLs:(id)arg0 targets:(id)arg1 batchSize:(NSUInteger)arg2 ;
-(id)nextBatch;


@end


#endif
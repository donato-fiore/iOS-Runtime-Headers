// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLCLOUDPHOTOLIBRARYBATCHMANAGER_H
#define PLCLOUDPHOTOLIBRARYBATCHMANAGER_H

@class NSMutableArray, NSMutableSet;

#import <Foundation/Foundation.h>

#import "PLCloudPhotoLibraryBatchContainer.h"

@interface PLCloudPhotoLibraryBatchManager : NSObject {
    NSMutableArray *_batches;
    PLCloudPhotoLibraryBatchContainer *_currentBatch;
    BOOL _wasDrained;
    NSMutableSet *_masterHistory;
    NSUInteger _resourceBudget;
}




-(BOOL)isAboveMaximumResourceBudget;
-(NSInteger)currentBatchCount;
-(id)description;
-(id)drainBatches;
-(id)init;
-(void)addRecord:(id)arg0 ;
-(void)addRecord:(id)arg0 ignoreBatchSize:(BOOL)arg1 ;
-(void)dealloc;
-(void)reset;


@end


#endif
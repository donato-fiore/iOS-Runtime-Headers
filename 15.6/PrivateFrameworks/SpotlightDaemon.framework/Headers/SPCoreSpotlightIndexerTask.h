// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPCORESPOTLIGHTINDEXERTASK_H
#define SPCORESPOTLIGHTINDEXERTASK_H

@class NSArray, CSIndexJob;

#import <Foundation/Foundation.h>


@interface SPCoreSpotlightIndexerTask : NSObject

@property (retain, nonatomic) NSArray *bundleIDs; // ivar: _bundleIDs
@property (retain, nonatomic) NSArray *completedBundleIDs; // ivar: _completedBundleIDs
@property (nonatomic) NSUInteger dataMigrationStage; // ivar: _dataMigrationStage
@property (readonly, nonatomic) NSArray *indexers; // ivar: _indexers
@property (readonly, nonatomic) CSIndexJob *job; // ivar: _job
@property (nonatomic) BOOL shouldResumeOnFailure; // ivar: _shouldResumeOnFailure


-(id)initWithIndexJob:(id)arg0 indexers:(id)arg1 ;


@end


#endif
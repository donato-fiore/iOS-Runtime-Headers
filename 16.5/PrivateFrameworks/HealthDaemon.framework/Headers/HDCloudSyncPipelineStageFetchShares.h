// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCPIPELINESTAGEFETCHSHARES_H
#define HDCLOUDSYNCPIPELINESTAGEFETCHSHARES_H

@class NSArray;


#import "HDCloudSyncPipelineStage.h"

@interface HDCloudSyncPipelineStageFetchShares : HDCloudSyncPipelineStage

@property (nonatomic) BOOL fetchAllShares; // ivar: _fetchAllShares
@property (readonly, copy, nonatomic) NSArray *shares; // ivar: _shares


-(void)main;


@end


#endif
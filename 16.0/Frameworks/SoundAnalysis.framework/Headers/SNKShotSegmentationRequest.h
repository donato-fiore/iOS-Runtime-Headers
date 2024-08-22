// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNKSHOTSEGMENTATIONREQUEST_H
#define SNKSHOTSEGMENTATIONREQUEST_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SNKShotSegmentationRequest : NSObject

@property float backgroundEnergyPercentile; // ivar: _backgroundEnergyPercentile
@property NSArray *fileURLs; // ivar: _fileURLs
@property float foregroundEnergyPercentile; // ivar: _foregroundEnergyPercentile
@property ? hangoverDuration; // ivar: _hangoverDuration
@property ? minSegmentDuration; // ivar: _minSegmentDuration
@property float similarityThreshold; // ivar: _similarityThreshold


-(id)init;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIGNPOSTRENDERSERVERRENDERINTERVAL_H
#define SIGNPOSTRENDERSERVERRENDERINTERVAL_H

@class NSNumber, NSMutableArray, NSString;


#import "SignpostAnimationSubInterval.h"

@interface SignpostRenderServerRenderInterval : SignpostAnimationSubInterval

@property (readonly, nonatomic) NSNumber *cachingLayersRerenderCount; // ivar: _cachingLayersRerenderCount
@property (retain, nonatomic) NSMutableArray *clientDrawableIntervals; // ivar: _clientDrawableIntervals
@property (readonly, nonatomic) BOOL didSkipRender;
@property (readonly, nonatomic) unsigned int displayID; // ivar: _displayID
@property (readonly, nonatomic) NSUInteger displayRefreshIntervalMachContinuousTime; // ivar: _displayRefreshIntervalMachContinuousTime
@property (readonly, nonatomic) NSNumber *fallbackShaderDrawCount; // ivar: _fallbackShaderDrawCount
@property (readonly, nonatomic) unsigned int frameSeed; // ivar: _frameSeed
@property (readonly, nonatomic) BOOL hasOffScreenPassCount; // ivar: _hasOffScreenPassCount
@property (retain, nonatomic) NSMutableArray *imageQueueSampleEvents; // ivar: _imageQueueSampleEvents
@property (readonly, nonatomic) unsigned int offScreenPassCount; // ivar: _offScreenPassCount
@property (readonly, nonatomic) int renderServerPID; // ivar: _renderServerPID
@property (readonly, nonatomic) NSUInteger renderServerTID; // ivar: _renderServerTID
@property (readonly, nonatomic) NSString *renderSkipReason; // ivar: _renderSkipReason
@property (readonly, nonatomic) NSNumber *synchronousMetalShaderCompileCount; // ivar: _synchronousMetalShaderCompileCount


-(id)initWithRenderServerRenderInterval:(id)arg0 ;


@end


#endif
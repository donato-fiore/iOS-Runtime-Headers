// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SISCENESEGMENTATIONNETWORKCONFIGURATION_H
#define SISCENESEGMENTATIONNETWORKCONFIGURATION_H



#import "SINetworkConfiguration.h"

@interface SISceneSegmentationNetworkConfiguration : SINetworkConfiguration

@property (nonatomic) BOOL isResampleOutput; // ivar: _isResampleOutput
@property (nonatomic) NSInteger modelConfig; // ivar: _modelConfig
@property (nonatomic) NSInteger networkModeEnum; // ivar: _networkModeEnum
@property (nonatomic) float uncertaintyThreshold; // ivar: _uncertaintyThreshold


-(id)init;


@end


#endif
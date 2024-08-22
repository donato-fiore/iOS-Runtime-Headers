// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYTIMELINEPRODUCERCONFIGURATION_H
#define PXSTORYTIMELINEPRODUCERCONFIGURATION_H

@protocol PXStoryErrorReporter, PXStoryLoadingCoordinator, PXStoryTimelineSpec, PXStoryStyle;

#import <Foundation/Foundation.h>

#import "PXStoryResourcesDataSource.h"

@interface PXStoryTimelineProducerConfiguration : NSObject

@property (readonly, nonatomic) NSObject<PXStoryErrorReporter> *errorReporter; // ivar: _errorReporter
@property (readonly, nonatomic) NSObject<PXStoryLoadingCoordinator> *loadingCoordinator; // ivar: _loadingCoordinator
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (nonatomic) _NSRange rangeOfPrioritizedDisplayAssetResources; // ivar: _rangeOfPrioritizedDisplayAssetResources
@property (readonly, nonatomic) PXStoryResourcesDataSource *resourcesDataSource; // ivar: _resourcesDataSource
@property (copy, nonatomic) id *scorerFactory; // ivar: _scorerFactory
@property (readonly, nonatomic) NSObject<PXStoryTimelineSpec> *spec; // ivar: _spec
@property (readonly, nonatomic) NSObject<PXStoryStyle> *style; // ivar: _style


-(id)init;
-(id)initWithResourcesDataSource:(id)arg0 style:(id)arg1 spec:(id)arg2 options:(NSUInteger)arg3 loadingCoordinator:(id)arg4 errorReporter:(id)arg5 ;


@end


#endif
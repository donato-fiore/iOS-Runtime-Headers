// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPLACESMAPPIPELINEFACTORY_H
#define PXPLACESMAPPIPELINEFACTORY_H


#import <Foundation/Foundation.h>


@interface PXPlacesMapPipelineFactory : NSObject



+(id)defaultPipelineForDataSource:(id)arg0 ;
+(id)pinPipelineForDataSource:(id)arg0 ;
+(id)thumbnailPipelineForDataSource:(id)arg0 extendedTraitCollection:(id)arg1 geotaggableInfo:(id)arg2 ;
+(id)thumbnailPipelineForDataSource:(id)arg0 extendedTraitCollection:(id)arg1 geotaggableInfo:(id)arg2 popoverImageType:(NSUInteger)arg3 popoverImageOptions:(NSUInteger)arg4 ;


@end


#endif
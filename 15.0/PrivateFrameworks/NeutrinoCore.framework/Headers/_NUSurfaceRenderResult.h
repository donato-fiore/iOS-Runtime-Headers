// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NUSURFACERENDERRESULT_H
#define _NUSURFACERENDERRESULT_H

@class NUImageRenderResult, NSString;
@protocol NUSurfaceRenderResult, NUSurfaceImage, NURenderStatistics;


#import "NUImageGeometry.h"
#import "NURegion.h"

@interface _NUSurfaceRenderResult : NUImageRenderResult <NUSurfaceRenderResult>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NUImageGeometry *geometry;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<NUSurfaceImage> *image; // ivar: _image
@property (readonly) NURegion *region;
@property (readonly) NSObject<NURenderStatistics> *statistics;
@property (readonly) Class superclass;




@end


#endif
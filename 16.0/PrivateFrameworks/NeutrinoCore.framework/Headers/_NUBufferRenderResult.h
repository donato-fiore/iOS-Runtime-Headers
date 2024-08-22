// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NUBUFFERRENDERRESULT_H
#define _NUBUFFERRENDERRESULT_H

@class NUImageRenderResult, NSString;
@protocol NUBufferRenderResult, NUBufferImage, NURenderStatistics;


#import "NUImageGeometry.h"
#import "NURegion.h"

@interface _NUBufferRenderResult : NUImageRenderResult <NUBufferRenderResult>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NUImageGeometry *geometry;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<NUBufferImage> *image; // ivar: _image
@property (readonly) NURegion *region;
@property (readonly) NSObject<NURenderStatistics> *statistics;
@property (readonly) Class superclass;




@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVASYNCHRONOUSCIIMAGEFILTERINGREQUESTINTERNAL_H
#define AVASYNCHRONOUSCIIMAGEFILTERINGREQUESTINTERNAL_H

@class CIImage;

#import <Foundation/Foundation.h>

#import "AVAsynchronousVideoCompositionRequest.h"

@interface AVAsynchronousCIImageFilteringRequestInternal : NSObject

@property (copy, nonatomic) id *cancellationTest; // ivar: _cancellationTest
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) AVAsynchronousVideoCompositionRequest *compositingRequest; // ivar: _compositingRequest
@property (copy, nonatomic) id *defaultCIContextProvider; // ivar: _defaultCIContextProvider
@property (retain, nonatomic) CIImage *sourceCIImage; // ivar: _sourceCIImage
@property (retain, nonatomic) *__CVBuffer sourcePBuf; // ivar: _sourcePBuf


-(void)_willDeallocOrFinalize;
-(void)dealloc;


@end


#endif
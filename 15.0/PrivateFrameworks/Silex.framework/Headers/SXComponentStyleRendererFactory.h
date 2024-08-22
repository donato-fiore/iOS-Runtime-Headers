// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXCOMPONENTSTYLERENDERERFACTORY_H
#define SXCOMPONENTSTYLERENDERERFACTORY_H

@class NSString;
@protocol SXComponentStyleRendererFactory, SXGradientFactory, SXImageFillViewFactory, SXRepeatableImageFillViewFactory, SXVideoFillViewFactory;

#import <Foundation/Foundation.h>

#import "SXViewport.h"

@interface SXComponentStyleRendererFactory : NSObject <SXComponentStyleRendererFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SXGradientFactory> *gradientFactory; // ivar: _gradientFactory
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXImageFillViewFactory> *imageFillViewFactory; // ivar: _imageFillViewFactory
@property (readonly, nonatomic) NSObject<SXRepeatableImageFillViewFactory> *repeatableImageFillViewFactory; // ivar: _repeatableImageFillViewFactory
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<SXVideoFillViewFactory> *videoFillViewFactory; // ivar: _videoFillViewFactory
@property (readonly, nonatomic) SXViewport *viewport; // ivar: _viewport


-(id)componentStyleRendererForComponentStyle:(id)arg0 ;
-(id)initWithImageFillViewFactory:(id)arg0 videoFillViewFactory:(id)arg1 gradientFactory:(id)arg2 repeatableImageFillViewFactory:(id)arg3 viewport:(id)arg4 ;


@end


#endif
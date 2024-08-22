// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGVIEWTEXTURECONVERTER_H
#define PXGVIEWTEXTURECONVERTER_H

@class NSString;
@protocol PXGTextureConverter, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PXGImageTexture.h"

@interface PXGViewTextureConverter : NSObject <PXGTextureConverter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL lowMemoryMode; // ivar: _lowMemoryMode
@property (readonly, nonatomic) int presentationType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // ivar: _processingQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // ivar: _requestQueue
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger supportedContentTypes;
@property (readonly, nonatomic) PXGImageTexture *transparentTexture;


-(id)applyAdjustment:(id)arg0 toTexture:(id)arg1 options:(struct ? )arg2 ;
-(id)createAtlasForTextureAtlasManager:(id)arg0 ;
-(id)createPayloadTextureFromPayload:(id)arg0 ;
-(id)createTextureAtlasManagerForImageDataSpec:(struct ? )arg0 ;
-(id)createTextureFromCGImage:(struct CGImage *)arg0 transform:(struct ? )arg1 options;
-(id)createTextureFromCVPixelBuffer:(struct __CVBuffer *)arg0 transform:(struct ? )arg1 options:(*id)arg2 error;


@end


#endif
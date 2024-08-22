// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVASSETWRITERINPUTPIXELBUFFERADAPTOR_H
#define AVASSETWRITERINPUTPIXELBUFFERADAPTOR_H

@class NSString, NSDictionary;
@protocol AVWeakObservable, AVKeyPathDependencyHost;

#import <Foundation/Foundation.h>

#import "AVAssetWriterInputPixelBufferAdaptorInternal.h"
#import "AVAssetWriterInput.h"

@interface AVAssetWriterInputPixelBufferAdaptor : NSObject <AVWeakObservable, AVKeyPathDependencyHost>

 {
    AVAssetWriterInputPixelBufferAdaptorInternal *_internal;
}


@property (readonly, nonatomic) AVAssetWriterInput *assetWriterInput;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *__CVPixelBufferPool pixelBufferPool;
@property (readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property (readonly) Class superclass;


+(id)assetWriterInputPixelBufferAdaptorWithAssetWriterInput:(id)arg0 sourcePixelBufferAttributes:(id)arg1 ;
-(BOOL)appendPixelBuffer:(struct __CVBuffer *)arg0 withPresentationTime:(struct ? )arg1 ;
-(id)init;
-(id)initWithAssetWriterInput:(id)arg0 sourcePixelBufferAttributes:(id)arg1 ;
-(void)addCallbackToCancelDuringDeallocation:(id)arg0 ;
-(void)dealloc;
-(void)declareKeyPathDependenciesWithRegistry:(id)arg0 ;


@end


#endif
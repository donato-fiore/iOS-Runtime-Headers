// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLSERVICETHUMBNAILRENDERER_H
#define QLSERVICETHUMBNAILRENDERER_H

@protocol QLThumbnailServiceSurfaceGeneratorProtocol;

#import <Foundation/Foundation.h>

#import "QLThumbnailReply.h"
#import "QLFileThumbnailRequest.h"

@interface QLServiceThumbnailRenderer : NSObject

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) QLThumbnailReply *reply; // ivar: _reply
@property (retain, nonatomic) QLFileThumbnailRequest *request; // ivar: _request
@property (retain, nonatomic) NSObject<QLThumbnailServiceSurfaceGeneratorProtocol> *surfaceGenerator; // ivar: _surfaceGenerator


-(BOOL)_canCreateContextOfSize:(struct CGSize )arg0 forRequest:(id)arg1 ;
-(id)_thumbnailDataDestructionConcurrenQueue;
// -(id)initWithRequest:(id)arg0 reply:(id)arg1 completionHandler:(id)arg2 surfaceGenerator:(unk)arg3  ;
-(struct CGSize )_IOSurfaceSizeFromThumbnailReply:(id)arg0 ;
-(void)_afterGeneratingIOSurfaceThumbnail:(BOOL)arg0 surface:(id)arg1 ;
-(void)_didGenerateThumbnailWithData:(id)arg0 bitmapFormat:(id)arg1 drawingContextSize:(struct CGSize )arg2 ;
-(void)_didReceiveThumbnailURL:(id)arg0 ;
-(void)_drawInContextOfSize:(struct CGSize )arg0 colorSpace:(struct CGColorSpace *)arg1 drawingBlock:(id)arg2 ;
-(void)_drawInCurrentContextOfSize:(struct CGSize )arg0 colorSpace:(struct CGColorSpace *)arg1 drawingBlock:(id)arg2 ;
-(void)_drawInIOSurface;
-(void)_executeCompletionHandlerWithThumbnailData:(id)arg0 thumbnailURL:(id)arg1 ioSurface:(id)arg2 drawingContextSize:(struct CGSize )arg3 bitmapFormat:(id)arg4 didGenerateThumbnail:(BOOL)arg5 error:(id)arg6 ;
-(void)_thumbnailGenerationDidFailWithError:(id)arg0 ;
-(void)generateThumbnailAndPerformCompletionHandler;


@end


#endif
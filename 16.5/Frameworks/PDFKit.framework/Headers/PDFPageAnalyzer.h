// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFPAGEANALYZER_H
#define PDFPAGEANALYZER_H

@class VKImageAnalyzer, NSMutableSet;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface PDFPageAnalyzer : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_analyzerCallbackQueue;
    VKImageAnalyzer *_imageAnalyzer;
    NSObject<OS_dispatch_semaphore> *_workloadSemaphore;
    NSMutableSet *_requestedPages;
    mutex _requestedPagesMutex;
    CGFloat _imageScale;
    BOOL _drawQuads;
}


@property (retain) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue


+(id)sharedInstance;
-(id)init;
-(struct CGPoint )_testPixelsFromPoint:(struct CGPoint )arg0 toPoint:(struct CGPoint )arg1 compare:(id)arg2 ;
-(struct UIEdgeInsets )_computeEdgeInsetsForQuad:(id)arg0 inImage:(struct CGImage *)arg1 background:(unsigned char)arg2 glyphCount:(NSUInteger)arg3 ;
-(void)_addTextFromAnalysis:(id)arg0 ofImage:(id)arg1 toPDFPage:(id)arg2 ;
-(void)_drawTextFromAnalysis:(id)arg0 ofImage:(id)arg1 intoContext:(struct CGContext *)arg2 withBounds:(struct CGRect )arg3 ;
-(void)processPage:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif
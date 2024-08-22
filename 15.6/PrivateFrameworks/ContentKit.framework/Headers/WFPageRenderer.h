// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFPAGERENDERER_H
#define WFPAGERENDERER_H

@class UIPrintPageRenderer;

#import <Foundation/Foundation.h>


@interface WFPageRenderer : NSObject

@property (nonatomic) BOOL includeMargin; // ivar: _includeMargin
@property (nonatomic) CGSize inputSize; // ivar: _inputSize
@property (readonly, nonatomic) CGFloat margin;
@property (nonatomic) BOOL matchInputSize; // ivar: _matchInputSize
@property (readonly, nonatomic) UIPrintPageRenderer *renderer; // ivar: _renderer


-(id)renderToImage;
-(struct CGSize )sizeForPageAtIndex:(NSInteger)arg0 ;
-(void)_renderToPDF:(id)arg0 startingAtPage:(NSInteger)arg1 endingAtPage:(NSInteger)arg2 completionHandler:(id)arg3 ;
// -(void)renderPDFPageIndex:(NSInteger)arg0 pages:(NSInteger)arg1 measuredIndicesByFormatter:(id)arg2 drawnIndicesByFormatter:(id)arg3 linkMetricsByWebView:(id)arg4 y:(CGFloat)arg5 paperSize:(struct CGSize )arg6 shouldDrawPageAtIndexHandler:(id)arg7 completionHandler:(unk)arg8  ;
-(void)renderToPDF:(id)arg0 startingAtPage:(NSInteger)arg1 endingAtPage:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)updateRendererSize;


@end


#endif
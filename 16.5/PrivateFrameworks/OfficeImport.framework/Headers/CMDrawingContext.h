// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMDRAWINGCONTEXT_H
#define CMDRAWINGCONTEXT_H

@class NSMutableArray, NSAffineTransform;

#import <Foundation/Foundation.h>

#import "CMDrawableMapper.h"

@interface CMDrawingContext : NSObject {
    NSMutableArray *_actions;
    CGRect _frame;
    CGRect _finalFrame;
    *__CFData _data;
    *CGDataConsumer _dataConsumer;
    *CGContext _cgContext;
    NSAffineTransform *_currentTransform;
    NSMutableArray *_transforms;
    *CGImage _fillImage;
}


@property (weak) CMDrawableMapper *mapper; // ivar: _mapper


-(float)currentScaleFactor;
-(id)copyPDF;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGAffineTransform )currentTransform;
-(struct CGContext *)_cgContext;
-(struct CGRect )_transformRect:(struct CGRect )arg0 withTransform:(id)arg1 ;
-(struct CGRect )frame;
-(struct CGRect )pdfFrame;
-(struct CGRect )transformRectToGroup:(struct CGRect )arg0 ;
-(struct CGRect )transformRectToPage:(struct CGRect )arg0 ;
-(void)_addTransform:(id)arg0 ;
-(void)_applyTransform:(id)arg0 ;
-(void)_closeContext;
-(void)_copyCGContext;
-(void)_playbackActions;
-(void)_restoreLastTransform;
-(void)addDebugPath:(struct CGPath *)arg0 ;
-(void)addPath:(struct CGPath *)arg0 ;
-(void)addTransform:(id)arg0 ;
-(void)dealloc;
-(void)restoreLastTransform;
-(void)setFillColor:(struct CGColor *)arg0 ;
-(void)setFillImage:(struct CGImage *)arg0 ;
-(void)setLineDash:(id)arg0 ;
-(void)setLineWidth:(float)arg0 ;
-(void)setStrokeColor:(struct CGColor *)arg0 ;


@end


#endif
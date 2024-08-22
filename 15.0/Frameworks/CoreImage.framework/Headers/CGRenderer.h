// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CGRENDERER_H
#define CGRENDERER_H

@class NSString;
@protocol CIGVRenderer;

#import <Foundation/Foundation.h>


@interface CGRenderer : NSObject <CIGVRenderer>

 {
    *CGContext context;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property int direction; // ivar: direction
@property BOOL drawEdgesFirst; // ivar: drawEdgesFirst
@property BOOL drawWithSplines; // ivar: drawWithSplines
@property (readonly) NSUInteger hash;
@property CGSize separation; // ivar: separation
@property (readonly) Class superclass;


-(BOOL)setCanvasWidth:(unsigned int)arg0 height:(unsigned int)arg1 ;
-(id)init;
-(struct CGColor *)_colorForNodeColor:(int)arg0 ;
-(void)_drawCubicSpline:(id)arg0 ;
-(void)_drawNodeBadge:(id)arg0 ;
-(void)_drawNodeContent:(id)arg0 ;
-(void)_drawPolyline:(id)arg0 ;
-(void)dealloc;
-(void)drawEdge:(id)arg0 withPath:(id)arg1 ;
-(void)drawNode:(id)arg0 ;
-(void)flushRender;
-(void)hyperlinkEdge:(id)arg0 from:(struct CGPoint )arg1 to:(struct CGPoint )arg2 ;
-(void)setFileTitle:(id)arg0 ;
-(void)setFileURL:(id)arg0 ;


@end


#endif
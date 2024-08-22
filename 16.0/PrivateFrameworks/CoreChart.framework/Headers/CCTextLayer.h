// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CCTEXTLAYER_H
#define CCTEXTLAYER_H

@class CALayer, NSArray;



@interface CCTextLayer : CALayer {
    NSArray *_lineContents;
}


@property (nonatomic) int align; // ivar: _align
@property (nonatomic) int baseline; // ivar: _baseline
@property (nonatomic) CGAffineTransform combinedCTMHint; // ivar: _combinedCTMHint
@property (retain, nonatomic) id *fillColor; // ivar: _fillColor
@property (retain, nonatomic) id *font; // ivar: _font
@property (nonatomic) CGFloat lineHeight; // ivar: _lineHeight
@property (retain, nonatomic) NSArray *lines; // ivar: _lines
@property (retain, nonatomic) id *strokeColor; // ivar: _strokeColor
@property (nonatomic) CGFloat strokeWidth; // ivar: _strokeWidth
@property (nonatomic) CGFloat textAngle; // ivar: _textAngle
@property (nonatomic) CGPoint textPosition; // ivar: _textPosition


+(id)layer;
-(id)init;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)renderInContext:(struct CGContext *)arg0 ;
-(void)updateTextContents;


@end


#endif
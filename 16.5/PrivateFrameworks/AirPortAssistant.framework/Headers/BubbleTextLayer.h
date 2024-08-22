// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BUBBLETEXTLAYER_H
#define BUBBLETEXTLAYER_H

@class CALayer, NSMutableArray;



@interface BubbleTextLayer : CALayer {
    CGSize _textSize;
    CGSize _leftImageLayerSize;
    CGSize _rightAccessoryLayerSize;
    CGSize _contentSize;
    CGSize _bubbleSize;
    CGRect _textFrame;
    CGRect _bubbleFrame;
    CGSize _boundsSizeConstraint;
    *void _font;
    *__CTFont _curCTFont;
    *__CTLine _theLine;
    CGFloat _descent;
    CGFloat _ascent;
    CGFloat _leading;
    CGRect _fontBounds;
    NSMutableArray *_annotationPoints;
    *CGColor _generalShadowColor;
    *CGColor _whiteShadowColor;
    CALayer *_leftImageLayer;
    CALayer *_rightAccessoryLayer;
    id *_owningView;
}


@property (nonatomic) CGSize boundsSizeConstraint;
@property (retain, nonatomic) *CGColor fillColor;
@property (retain, nonatomic) *CGColor fillColor2;
@property (nonatomic) CGFloat fontSize;
@property (retain, nonatomic) *CGColor foregroundColor;
@property (retain, nonatomic) *CGColor frameColor;
@property (nonatomic) CGFloat frameWidth;
@property (retain, nonatomic) *CGImage image;
@property (nonatomic) id *owningView;
@property (retain, nonatomic) CALayer *rightAccessoryLayer;
@property (retain, nonatomic) id *string;
@property (readonly, nonatomic) CGFloat textBaselineOffset;
@property (readonly, nonatomic) CGRect textFrame;


+(BOOL)needsDisplayForKey:(id)arg0 ;
-(BOOL)isAnnotationBubble;
-(id)initWithOwningView:(id)arg0 ;
-(struct CGSize )calculatePreferredSubframeSizes;
-(struct CGSize )getImagePreferredSize;
-(struct CGSize )getRightAccessoryLayerPreferredSize;
-(struct CGSize )preferredFrameSize;
-(struct CGSize )textPreferredFrameSizeForLayerSize:(struct CGSize )arg0 ;
-(void)addAnnotationPoint:(struct CGPoint )arg0 ;
-(void)dealloc;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)layoutSublayers;
-(void)setFont:(id)arg0 ;


@end


#endif
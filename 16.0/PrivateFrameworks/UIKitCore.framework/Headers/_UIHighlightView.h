// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIHIGHLIGHTVIEW_H
#define _UIHIGHLIGHTVIEW_H

@class NSArray, NSMutableArray;


#import "UIView.h"
#import "UIColor.h"

@interface _UIHighlightView : UIView {
    UIColor *_color;
    CGFloat _cornerRadius;
    CGRect _invertedHighlightClipRect;
    NSArray *_cornerRadii;
    NSMutableArray *_innerBounds;
    NSMutableArray *_innerQuads;
    BOOL _invertHighlight;
}




-(id)hitTest:(struct CGPoint )arg0 forEvent:(struct __GSEvent *)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)cleanUp;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)setColor:(id)arg0 ;
-(void)setCornerRadii:(id)arg0 ;
-(void)setCornerRadius:(CGFloat)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setFrames:(id)arg0 boundaryRect:(struct CGRect )arg1 ;
-(void)setInvertHighlight:(BOOL)arg0 clipRect:(struct CGRect )arg1 ;
-(void)setQuads:(id)arg0 boundaryRect:(struct CGRect )arg1 ;


@end


#endif
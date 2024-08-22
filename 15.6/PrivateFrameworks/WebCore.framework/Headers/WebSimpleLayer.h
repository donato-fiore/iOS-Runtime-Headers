// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBSIMPLELAYER_H
#define WEBSIMPLELAYER_H

@class CALayer;



@interface WebSimpleLayer : CALayer

@property (readonly, nonatomic) BOOL isRenderingInContext; // ivar: _isRenderingInContext


-(id)actionForKey:(id)arg0 ;
-(void)display;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)renderInContext:(struct CGContext *)arg0 ;
-(void)setNeedsDisplay;
-(void)setNeedsDisplayInRect:(struct CGRect )arg0 ;


@end


#endif
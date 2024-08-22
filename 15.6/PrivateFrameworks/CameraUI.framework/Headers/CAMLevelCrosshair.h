// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMLEVELCROSSHAIR_H
#define CAMLEVELCROSSHAIR_H

@class UIView;



@interface CAMLevelCrosshair : UIView

@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted


+(void)_drawCrosshairInContext:(struct CGContext *)arg0 withBounds:(struct CGRect )arg1 strokeWidth:(CGFloat)arg2 color:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_commonCAMLevelCrosshairInitialization;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LEGACYTILELAYER_H
#define LEGACYTILELAYER_H

@class CALayer;



@interface LegacyTileLayer : CALayer

@property (readonly, nonatomic) BOOL isRenderingInContext; // ivar: _isRenderingInContext
@property (nonatomic) unsigned int paintCount; // ivar: _paintCount
@property (nonatomic) *void tileGrid; // ivar: _tileGrid


-(id)actionForKey:(id)arg0 ;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)layoutSublayers;
-(void)renderInContext:(struct CGContext *)arg0 ;
-(void)setNeedsDisplayInRect:(struct CGRect )arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGDEBUGHUDLAYER_H
#define PXGDEBUGHUDLAYER_H

@class CALayer, NSArray;



@interface PXGDebugHUDLayer : CALayer

@property (copy, nonatomic) NSArray *graphLayers; // ivar: _graphLayers
@property (nonatomic) *CGColor green; // ivar: _green
@property (nonatomic) *CGColor red; // ivar: _red
@property (nonatomic) *CGColor yellow; // ivar: _yellow


-(id)init;
-(void)dealloc;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)updateDebugHUDWithStats:(struct ? *)arg0 ;
-(void)updateLayerAtIndex:(NSInteger)arg0 time:(CGFloat)arg1 redZone:(CGFloat)arg2 yellowZone:(CGFloat)arg3 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MKRESIZINGLAYER_H
#define _MKRESIZINGLAYER_H

@class CALayer, NSMutableArray, NSArray;



@interface _MKResizingLayer : CALayer {
    NSMutableArray *_sizedLayers;
}


@property (nonatomic) BOOL needsLayoutOnBoundsChange; // ivar: _needsLayoutOnBoundsChange
@property (readonly, copy, nonatomic) NSArray *sizeToBoundsLayers;


-(void)setBounds:(struct CGRect )arg0 ;
-(void)setContentsScale:(CGFloat)arg0 ;
-(void)setMask:(id)arg0 ;
-(void)sizeSublayerToBounds:(id)arg0 ;


@end


#endif
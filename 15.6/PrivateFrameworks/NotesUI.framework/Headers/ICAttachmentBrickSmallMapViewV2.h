// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICATTACHMENTBRICKSMALLMAPVIEWV2_H
#define ICATTACHMENTBRICKSMALLMAPVIEWV2_H

@class CALayer;


#import "ICAttachmentBrickImageViewV2.h"

@interface ICAttachmentBrickSmallMapViewV2 : ICAttachmentBrickImageViewV2

@property (retain, nonatomic) CALayer *borderLayer; // ivar: _borderLayer
@property (retain, nonatomic) CALayer *effectsLayer; // ivar: _effectsLayer


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setContentsScale:(CGFloat)arg0 ;
-(void)setCornerRadius:(CGFloat)arg0 ;
-(void)updateSublayersBounds:(struct CGRect )arg0 ;


@end


#endif
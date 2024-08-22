// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUMUTABLEBRUSHSTROKE_H
#define NUMUTABLEBRUSHSTROKE_H



#import "NUBrushStroke.h"

@interface NUMutableBrushStroke : NUBrushStroke

@property (nonatomic) float opacity;
@property (nonatomic) NSInteger pressureMode;
@property (nonatomic) float radius;
@property (nonatomic) float softness;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRadius:(float)arg0 softness:(float)arg1 opacity:(float)arg2 clipRect:(struct ? )arg3 pressureMode:(NSInteger)arg4 ;
-(id)points;
-(void)appendPoint:(struct ? )arg0 ;
-(void)appendPoints:(struct ? *)arg0 pointCount:(NSInteger)arg1 ;
-(void)applyTransform:(struct CGAffineTransform )arg0 ;


@end


#endif
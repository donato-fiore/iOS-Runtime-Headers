// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUMUTABLEREGION_H
#define NUMUTABLEREGION_H



#import "NURegion.h"

@interface NUMutableRegion : NURegion



-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)addRect:(struct ? )arg0 ;
-(void)addRegion:(id)arg0 ;
-(void)applyAffineTransform:(struct CGAffineTransform )arg0 roundPolicy:(NSInteger)arg1 ;
-(void)applyOrientation:(NSInteger)arg0 imageSize:(struct ? )arg1 ;
-(void)clear;
-(void)clipToRect:(struct ? )arg0 ;
-(void)clipToRegion:(id)arg0 ;
-(void)diffWithRect:(struct ? )arg0 ;
-(void)diffWithRegion:(id)arg0 ;
-(void)flipInRect:(struct ? )arg0 ;
-(void)growBy:(struct ? )arg0 ;
-(void)growBy:(struct ? )arg0 inRect:(struct ? )arg1 ;
-(void)removeRect:(struct ? )arg0 ;
-(void)removeRegion:(id)arg0 ;
-(void)scaleBy:(struct CGPoint )arg0 withRounding:(NSInteger)arg1 ;
-(void)setRegion:(id)arg0 ;
-(void)shrinkBy:(struct ? )arg0 ;
-(void)shrinkBy:(struct ? )arg0 inRect:(struct ? )arg1 ;
-(void)translateBy:(struct ? )arg0 ;


@end


#endif
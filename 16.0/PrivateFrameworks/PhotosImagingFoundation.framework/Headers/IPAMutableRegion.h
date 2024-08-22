// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IPAMUTABLEREGION_H
#define IPAMUTABLEREGION_H



#import "IPARegion.h"

@interface IPAMutableRegion : IPARegion



-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)addRect:(struct CGRect )arg0 ;
-(void)addRectArray:(id)arg0 ;
-(void)addRegion:(id)arg0 ;
-(void)applyAffineTransform:(struct CGAffineTransform )arg0 ;
-(void)applyOrientation:(NSInteger)arg0 imageSize:(struct CGSize )arg1 ;
-(void)clear;
-(void)clipToRect:(struct CGRect )arg0 ;
-(void)clipToRectArray:(id)arg0 ;
-(void)clipToRegion:(id)arg0 ;
-(void)diffWithRect:(struct CGRect )arg0 ;
-(void)diffWithRegion:(id)arg0 ;
-(void)flipInRect:(struct CGRect )arg0 ;
-(void)growBy:(struct CGPoint )arg0 ;
-(void)growBy:(struct CGPoint )arg0 inRect:(struct CGRect )arg1 ;
-(void)removeRect:(struct CGRect )arg0 ;
-(void)removeRectArray:(id)arg0 ;
-(void)removeRegion:(id)arg0 ;
-(void)roundDown;
-(void)roundUp;
-(void)scaleBy:(struct CGPoint )arg0 ;
-(void)setRegion:(id)arg0 ;
-(void)shrinkBy:(struct CGPoint )arg0 ;
-(void)shrinkBy:(struct CGPoint )arg0 inRect:(struct CGRect )arg1 ;
-(void)translateBy:(struct CGPoint )arg0 ;


@end


#endif
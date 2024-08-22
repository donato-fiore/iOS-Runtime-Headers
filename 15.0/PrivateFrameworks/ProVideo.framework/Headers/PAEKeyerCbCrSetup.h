// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PAEKEYERCBCRSETUP_H
#define PAEKEYERCBCRSETUP_H

@class NSMutableArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PAEKeyerCbCrSetup : NSObject <NSSecureCoding>

 {
    NSNumber" _tolPieX;
    NSNumber" _tolPieY;
    NSNumber" _softPieX;
    NSNumber" _softPieY;
    NSMutableArray *_splineVertex;
    *void _keyer2DSatSpline;
    *void _keyer2DTolPie;
    *void _keyer2DSoftPie;
    BOOL _initialized;
}




+(BOOL)supportsSecureCoding;
-(*void)getKeyer2DSatSpline;
-(*void)getKeyer2DSoftPie;
-(*void)getKeyer2DTolPie;
-(BOOL)isEqualTo:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)interpolateBetween:(id)arg0 withWeight:(float)arg1 ;
-(struct Vec2f )polarToCartesian:(struct Vec2f )arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)interpPieWithWeight:(float)arg0 currentDirectionCorrection:(float)arg1 nextDirectionCorrection:(float)arg2 interpolatedCenter:(struct Vec2f )arg3 currentCenter:(struct Vec2f )arg4 currentPolar:(struct Vec2f *)arg5 nextCenter:(struct Vec2f )arg6 nextPolar:(struct Vec2f *)arg7 interpolationType:(int)arg8 interpolatedPie:(*void)arg9 ;
-(void)interpVec2f:(float)arg0 left:(struct Vec2f )arg1 right:(struct Vec2f )arg2 interpolated:(struct Vec2f *)arg3 ;
-(void)offsetPie:(struct Vec2f *)arg0 offsetDegrees:(float)arg1 ;
-(void)pieToPolarForPie:(*void)arg0 polar:(struct Vec2f *)arg1 ;
-(void)pieToPolarForPie:(*void)arg0 softPie:(*void)arg1 tolPolar:(struct Vec2f *)arg2 softPolar:(struct Vec2f *)arg3 ;
-(void)setSoftPieX:(id)arg0 indice:(int)arg1 ;
-(void)setSoftPieY:(id)arg0 indice:(int)arg1 ;
-(void)setTolPieX:(id)arg0 indice:(int)arg1 ;
-(void)setTolPieY:(id)arg0 indice:(int)arg1 ;
-(void)toPolar:(struct Vec2f *)arg0 polar:(struct Vec2f *)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PVCOLORSPACE_H
#define PVCOLORSPACE_H


#import <Foundation/Foundation.h>


@interface PVColorSpace : NSObject {
    int _type;
}




+(id)extendedDisplayP3ColorSpace;
+(id)extendedLinearSRGBColorSpace;
+(id)extendedSRGBColorSpace;
+(id)p3HLGGammaColorSpace;
+(id)p3PQGammaColorSpace;
+(id)p3d65GammaColorSpace;
+(id)preferredDisplayColorSpace;
+(id)preferredExportColorSpace;
+(id)pvColorSpaceForCVPixelBuffer:(struct __CVBuffer *)arg0 ;
+(id)pvColorSpaceFromCGColorSpace:(struct CGColorSpace *)arg0 ;
+(id)rec2020GammaColorSpace;
+(id)rec2020HLGColorSpace;
+(id)rec2020LinearColorSpace;
+(id)rec2020PQColorSpace;
+(id)rec2100HLGColorSpace;
+(id)rec2100PQColorSpace;
+(id)rec601GammaColorSpace;
+(id)rec601_1_1_6_GammaColorSpace;
+(id)rec601_EBU_3213_GammaColorSpace;
+(id)rec601_SMPTE_C_GammaColorSpace;
+(id)rec709GammaColorSpace;
+(id)rec709LinearColorSpace;
+(id)sRGBColorSpace;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCGColorSpace:(struct CGColorSpace *)arg0 ;
-(BOOL)isExtendedDisplayP3ColorSpace;
-(BOOL)isExtendedLinearSRGBColorSpace;
-(BOOL)isExtendedSRGBColorSpace;
-(BOOL)isHDRSpace;
-(BOOL)isP3HLGGammaColorSpace;
-(BOOL)isP3PQGammaColorSpace;
-(BOOL)isP3d65GammaColorSpace;
-(BOOL)isRec2020GammaColorSpace;
-(BOOL)isRec2020HLGColorSpace;
-(BOOL)isRec2020LinearColorSpace;
-(BOOL)isRec2020PQColorSpace;
-(BOOL)isRec2100HLGColorSpace;
-(BOOL)isRec2100PQColorSpace;
-(BOOL)isRec601GammaColorSpace;
-(BOOL)isRec601_1_1_6_GammaColorSpace;
-(BOOL)isRec601_EBU_3213_GammaColorSpace;
-(BOOL)isRec601_SMPTE_C_GammaColorSpace;
-(BOOL)isRec709GammaColorSpace;
-(BOOL)isRec709LinearColorSpace;
-(BOOL)isSRGBColorSpace;
-(BOOL)isWideGamutSpace;
-(NSUInteger)hash;
-(id)description;
-(id)initWithType:(int)arg0 ;
-(id)name;
-(id)nclcTriplet;
-(struct CGColorSpace *)cgColorSpace;


@end


#endif
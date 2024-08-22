// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIBILATERALGRIDHASH_H
#define CIBILATERALGRIDHASH_H


#import <Foundation/Foundation.h>


@interface CIBilateralGridHash : NSObject {
    int _n_dims;
    int _width;
    int _height;
    int _sigma_s;
    int _sigma_r_luma;
    int _sigma_r_chroma;
    NSUInteger _max_hash_table_size;
    unsigned int _hash_table_size;
    *BGHashMapContext _hash_map;
    *? _hash_table;
    *unsigned int _hash_matrix_data;
    *unsigned int _blur_indices;
    *unsigned int _coord_indices;
    *unsigned int _coord_table;
    *unsigned int _coord_indices_off;
    *unsigned int _interp_indices;
    *unsigned int _interp_table;
    char * _interp_pad;
}




-(*unsigned int)blur_indices:(int)arg0 n_blur_indices:(*int)arg1 ;
-(*unsigned int)blur_table;
-(*unsigned int)coord_indices;
-(*unsigned int)coord_table;
-(*unsigned int)hash_matrix;
-(*unsigned int)interp_indices;
-(*unsigned int)interp_table;
-(*void)hash_table;
-(BOOL)_hashMapFindKey:(NSUInteger)arg0 to:(*unsigned int)arg1 ;
-(char *)interp_pad;
-(id)initWithWidth:(int)arg0 height:(int)arg1 maxHashTableSize:(NSUInteger)arg2 ;
-(int)_addHashKeyAtX:(int)arg0 Y:(int)arg1 key:(NSUInteger)arg2 isKeyExist:(*BOOL)arg3 ;
-(int)_computeBilateralSpaceYCC444:(struct __IOSurface *)arg0 region:(struct CGRect )arg1 cropRect:(struct CGRect )arg2 sigma_s:(int)arg3 sigma_r_luma:(int)arg4 sigma_r_chroma:(int)arg5 ;
-(int)_createWithSurface:(struct __IOSurface *)arg0 region:(struct CGRect )arg1 cropRect:(struct CGRect )arg2 sigma_s:(int)arg3 sigma_r_luma:(int)arg4 sigma_r_chroma:(int)arg5 ;
-(int)countDims;
-(int)countVertices;
-(int)createWithSurface:(struct __IOSurface *)arg0 region:(struct CGRect )arg1 cropRect:(struct CGRect )arg2 sigma_s:(int)arg3 sigma_r_luma:(int)arg4 sigma_r_chroma:(int)arg5 ;
-(int)height;
-(int)sigma_r_chroma;
-(int)sigma_r_luma;
-(int)sigma_s;
-(int)width;
-(void)_computeBlurIndices;
-(void)_computeCoordIndices;
-(void)_computeInterpIndices;
-(void)_hashMapAddKey:(NSUInteger)arg0 andValue:(unsigned int)arg1 ;
-(void)blur:(*float)arg0 pout:(*float)arg1 ;
-(void)blur_n:(*float)arg0 ;
-(void)blur_ones:(*float)arg0 ;
-(void)clear;
-(void)dealloc;
-(void)normalize:(*float)arg0 pout:(*float)arg1 ;
-(void)normalize_blur:(*float)arg0 pout:(*float)arg1 ;
-(void)slice:(*float)arg0 outPixelBuffer:(struct __CVBuffer *)arg1 ;
-(void)slice_trilinear:(struct __IOSurface *)arg0 pin:(*float)arg1 pout:(struct __CVBuffer *)arg2 ;
-(void)splat:(struct __CVBuffer *)arg0 pout:(*float)arg1 ;
-(void)splat_ones:(*float)arg0 ;
-(void)splat_w_mul_x:(struct __CVBuffer *)arg0 inPixelBuffer:(struct __CVBuffer *)arg1 pout:(*float)arg2 ;


@end


#endif
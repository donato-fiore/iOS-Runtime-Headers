// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUIMAGETRANSFORMORIENTATION_H
#define NUIMAGETRANSFORMORIENTATION_H



#import "NUImageTransform.h"

@interface NUImageTransformOrientation : NUImageTransform {
    ? _inputImageSize;
    ? _inputImageOrigin;
}


@property (readonly) NSInteger orientation; // ivar: _orientation


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToGeometryTransformOrientation:(id)arg0 ;
-(BOOL)isIdentityImageTransform;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithOrientation:(NSInteger)arg0 imageSize:(struct ? )arg1 ;
-(id)initWithOrientation:(NSInteger)arg0 imageSize:(struct ? )arg1 imageOrigin:(struct ? )arg2 ;
-(id)inverseTransform;
-(struct ? )transformMatrix:(struct ? )arg0 ;
-(struct CGPoint )transformPoint:(struct CGPoint )arg0 ;
-(void)nu_updateDigest:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IPAIMAGETRANSFORM_H
#define IPAIMAGETRANSFORM_H

@protocol IPAImageTransform, IPAImageGeometry;

#import <Foundation/Foundation.h>


@interface IPAImageTransform : NSObject <IPAImageTransform>

 {
    id<IPAImageGeometry> *_inputGeometry;
    id<IPAImageGeometry> *_intrinsicGeometry;
}




+(id)compositeTransforms:(id)arg0 ;
+(id)identityTransformForGeometry:(id)arg0 ;
-(BOOL)canAlignToPixelsExactly;
-(id)description;
-(id)init;
-(id)initWithInputGeometry:(id)arg0 intrinsicGeometry:(id)arg1 ;
-(id)inputGeometry;
-(id)intrinsicGeometry;
-(id)inverseTransform;
-(struct CGPoint )mapPoint:(struct CGPoint )arg0 ;
-(struct Vector2d )mapVector:(struct Vector2d )arg0 ;


@end


#endif
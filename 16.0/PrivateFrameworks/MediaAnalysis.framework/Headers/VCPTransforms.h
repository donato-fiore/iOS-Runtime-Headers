// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPTRANSFORMS_H
#define VCPTRANSFORMS_H


#import <Foundation/Foundation.h>


@interface VCPTransforms : NSObject {
    int _minSize;
    int _transformedImageWidth;
    int _transformedImageHeight;
}




-(id)initImageTransform:(int)arg0 transformedImageWidth:(int)arg1 transformedImageHeight:(int)arg2 ;
-(struct __CVBuffer *)cropAndScale:(struct __CVBuffer *)arg0 regionCrop:(struct CGRect )arg1 ;


@end


#endif
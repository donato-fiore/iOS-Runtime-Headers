// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSHOTFLOWHELPERS_H
#define AXSHOTFLOWHELPERS_H


#import <Foundation/Foundation.h>


@interface AXShotflowHelpers : NSObject



+(id)resizeImage:(id)arg0 byX:(float)arg1 andY:(float)arg2 ;
+(id)resizeImage:(id)arg0 to:(struct CGSize )arg1 ;
+(id)resizeImage:(id)arg0 toWidth:(NSUInteger)arg1 andHeight:(NSUInteger)arg2 ;
+(id)setCIContext;
+(id)setCIContext:(id)arg0 ;
+(struct shared_ptr<CGImage> )getCGImageFromCIImage:(id)arg0 ;
+(struct vImage_Buffer *)createVImageBuffer:(id)arg0 ;


@end


#endif
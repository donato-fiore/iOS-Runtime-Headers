// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARIMAGECROPPINGTECHNIQUE_H
#define ARIMAGECROPPINGTECHNIQUE_H



#import "ARTechnique.h"

@interface ARImageCroppingTechnique : ARTechnique {
    *OpaqueVTPixelTransferSession _vtPixelTransferSession;
    *__CVPixelBufferPool _croppedPixelBufferPool;
    CGRect _cropRect;
    BOOL _isCropToTargetResolution;
}


@property (readonly, nonatomic) CGSize croppedImageSize; // ivar: _croppedImageSize


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)requiredSensorDataTypes;
-(id)initWithCroppedImageSize:(struct CGSize )arg0 ;
-(id)initWithCroppedImageSize:(struct CGSize )arg0 centerCropToTargetResolution:(BOOL)arg1 ;
-(id)processData:(id)arg0 ;
-(void)dealloc;


@end


#endif
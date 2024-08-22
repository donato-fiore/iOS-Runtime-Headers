// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARIMAGEDETECTIONRESULT_H
#define ARIMAGEDETECTIONRESULT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ARReferenceImage.h"

@interface ARImageDetectionResult : NSObject <NSCopying>



@property (nonatomic) CGFloat estimatedScaleFactor; // ivar: _estimatedScaleFactor
@property (nonatomic) *void imageContext; // ivar: _imageContext
@property (nonatomic) NSUInteger odtObjectIdentifer; // ivar: _odtObjectIdentifer
@property (retain, nonatomic) ARReferenceImage *referenceImage; // ivar: _referenceImage
@property (nonatomic) ? visionTransform; // ivar: _visionTransform
@property (nonatomic) ? worldTrackingCameraTransformAtDetection; // ivar: _worldTrackingCameraTransformAtDetection


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
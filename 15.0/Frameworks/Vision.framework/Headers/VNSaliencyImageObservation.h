// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNSALIENCYIMAGEOBSERVATION_H
#define VNSALIENCYIMAGEOBSERVATION_H

@class NSArray;


#import "VNPixelBufferObservation.h"

@interface VNSaliencyImageObservation : VNPixelBufferObservation {
    CGSize _mOriginalImageSize;
    CGRect _mSalientRegion;
    CGRect _mHighlySalientRegion;
    os_unfair_lock_s _mComputeBoundingBoxesLock;
    NSArray *_mSalientObjects;
}


@property (readonly, nonatomic) CGRect boundingBox;
@property (readonly, nonatomic) CGRect narrowedBoundingBox;
@property (readonly, nonatomic) NSArray *salientObjects;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginatingRequestSpecifier:(id)arg0 rawSaliencyImage:(struct __CVBuffer *)arg1 originalImageSize:(struct CGSize )arg2 salientObjectBoundingBoxes:(id)arg3 ;
-(id)salientObjectsAndReturnError:(*id)arg0 ;
-(id)vn_cloneObject;
-(struct __CVBuffer *)createSaliencyImageAndReturnError:(*id)arg0 ;
-(void)_computeBoundingBoxes;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNFACESEGMENTS_H
#define VNFACESEGMENTS_H

@class NSDictionary, NSData;
@protocol NSSecureCoding, NSCopying, VNRequestRevisionProviding;

#import <Foundation/Foundation.h>


@interface VNFaceSegments : NSObject <NSSecureCoding, NSCopying, VNRequestRevisionProviding>

 {
    vector<float, std::allocator<float>> _probabilityNormSums;
}


@property (readonly, nonatomic) CGRect boundingBox; // ivar: _boundingBox
@property (readonly, nonatomic) NSDictionary *faceSegmentLabelToProbabilityMap; // ivar: _faceSegmentLabelToProbabilityMap
@property (readonly, nonatomic) NSUInteger numberOfFaceSegments; // ivar: _numberOfFaceSegments
@property (readonly, nonatomic) NSData *outputBufferData; // ivar: _outputBufferData
@property (readonly, nonatomic) NSUInteger outputBufferHeight; // ivar: _outputBufferHeight
@property (readonly, nonatomic) NSUInteger outputBufferWidth; // ivar: _outputBufferWidth
@property (readonly, nonatomic) NSUInteger requestRevision; // ivar: _requestRevision


+(BOOL)supportsSecureCoding;
+(NSUInteger)faceSegmentsPixelSizeInBytes;
+(id)faceSegmentIndexToFlagMap;
+(id)faceSegmentToSegmentMaskGrayLevelDictionary;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestRevision:(NSUInteger)arg0 outputBufferWidth:(NSUInteger)arg1 outputBufferHeight:(NSUInteger)arg2 outputBufferData:(id)arg3 numberOfFaceSegments:(NSUInteger)arg4 faceSegmentBBox:(struct CGRect )arg5 faceSegmentLabelToProbabilityMap:(id)arg6 ;
-(struct CGRect )_normalizeRegion:(struct CGRect )arg0 ;
-(struct __CVBuffer *)_createFaceSegmentProabilityDataPixelBufferWithSize:(struct CGSize )arg0 error:(*id)arg1 ;
-(struct __CVBuffer *)createMaskImageOfFaceSegments:(NSUInteger)arg0 error:(*id)arg1 ;
-(struct __CVBuffer *)createProbabilityImageOfFaceSegment:(NSUInteger)arg0 error:(*id)arg1 ;
-(struct __CVBuffer *)createProbabilityImageOfFaceSegment:(NSUInteger)arg0 region:(struct CGRect )arg1 normalize:(BOOL)arg2 error:(*id)arg3 ;
-(struct vImage_Buffer )_makeFaceSegmentProbabilityDataImageBuffer:(id)arg0 rect:(struct CGRect )arg1 ;
-(void)_calculateProbabilityNormalSumsForRect:(struct CGRect )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIPARALLAXINFILLREQUEST_H
#define PIPARALLAXINFILLREQUEST_H

@class NURenderRequest, NUColorSpace, NUPixelFormat;
@protocol NUScalePolicy, NUImageBuffer;



@interface PIParallaxInfillRequest : NURenderRequest

@property (retain, nonatomic) NUColorSpace *colorSpace; // ivar: _colorSpace
@property (retain, nonatomic) NUPixelFormat *pixelFormat; // ivar: _pixelFormat
@property (retain, nonatomic) NSObject<NUScalePolicy> *scalePolicy; // ivar: _scalePolicy
@property (retain, nonatomic) NSObject<NUImageBuffer> *segmentationMatte; // ivar: _segmentationMatte
@property (nonatomic) BOOL shouldInfillForeground; // ivar: _shouldInfillForeground


-(NSInteger)mediaComponentType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithComposition:(id)arg0 ;
-(id)newRenderJob;
-(void)submit:(id)arg0 ;


@end


#endif
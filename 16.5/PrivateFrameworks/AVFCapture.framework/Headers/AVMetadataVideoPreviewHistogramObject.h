// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVMETADATAVIDEOPREVIEWHISTOGRAMOBJECT_H
#define AVMETADATAVIDEOPREVIEWHISTOGRAMOBJECT_H

@class NSData;
@protocol NSCopying;


#import "AVMetadataObject.h"

@interface AVMetadataVideoPreviewHistogramObject : AVMetadataObject <NSCopying>



@property (readonly) NSUInteger lumaHistogramBinCount;
@property (readonly) NSData *lumaHistogramData; // ivar: _lumaHistogramData


+(id)videoPreviewHistogramObjectWithLumaHistogramData:(id)arg0 input:(id)arg1 time:(struct ? )arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg0 withTransform:(struct CGAffineTransform )arg1 isVideoMirrored:(BOOL)arg2 rollAdjustment:(CGFloat)arg3 ;
-(id)initWithLumaHistogramData:(id)arg0 time:(struct ? )arg1 sourceCaptureInput:(id)arg2 ;
-(void)dealloc;


@end


#endif
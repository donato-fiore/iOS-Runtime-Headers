// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVMETADATASALIENCYHEATMAP_H
#define AVMETADATASALIENCYHEATMAP_H

@class NSData;
@protocol NSCopying;


#import "AVMetadataObject.h"

@interface AVMetadataSaliencyHeatMap : AVMetadataObject <NSCopying>



@property (readonly) NSInteger bytesPerRow; // ivar: _bytesPerRow
@property (readonly) NSData *heatMap; // ivar: _heatMap
@property (readonly) NSInteger height; // ivar: _height
@property (readonly) NSInteger width; // ivar: _width


+(id)saliencyHeatMapWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg0 input:(id)arg1 timeStamp:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg0 withTransform:(struct CGAffineTransform )arg1 isVideoMirrored:(BOOL)arg2 rollAdjustment:(CGFloat)arg3 ;
-(id)initWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg0 input:(id)arg1 timeStamp:(id)arg2 type:(id)arg3 ;
-(id)initWithHeatMap:(id)arg0 width:(NSInteger)arg1 height:(NSInteger)arg2 bytesPerRow:(NSInteger)arg3 time:(struct ? )arg4 duration:(struct ? )arg5 bounds:(struct CGRect )arg6 optionalInfoDict:(id)arg7 originalMetadataObject:(id)arg8 sourceCaptureInput:(id)arg9 ;
-(void)dealloc;


@end


#endif
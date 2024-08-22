// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVVIDEOCOMPOSITIONLAYERINSTRUCTION_H
#define AVVIDEOCOMPOSITIONLAYERINSTRUCTION_H

@protocol NSSecureCoding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "AVVideoCompositionLayerInstructionInternal.h"

@interface AVVideoCompositionLayerInstruction : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>

 {
    AVVideoCompositionLayerInstructionInternal *_layerInstruction;
}


@property (readonly, nonatomic) int trackID;


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(BOOL)getCropRectangleRampForTime:(struct ? )arg0 startCropRectangle:(struct CGRect *)arg1 endCropRectangle:(struct CGRect *)arg2 timeRange:(struct ? *)arg3 ;
-(BOOL)getOpacityRampForTime:(struct ? )arg0 startOpacity:(*float)arg1 endOpacity:(*float)arg2 timeRange:(struct ? *)arg3 ;
-(BOOL)getTransformRampForTime:(struct ? )arg0 startTransform:(struct CGAffineTransform *)arg1 endTransform:(struct CGAffineTransform *)arg2 timeRange:(struct ? *)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentationWithTimeRange:(struct ? )arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)_setCropRectangleRampFromStartCropRectangle:(struct CGRect )arg0 toEndCropRectangle:(struct CGRect )arg1 timeRange:(struct ? )arg2 selector:(SEL)arg3 ;
-(void)_setCropRectangleRamps:(id)arg0 ;
-(void)_setOpacityRampFromStartOpacity:(float)arg0 toEndOpacity:(float)arg1 timeRange:(struct ? )arg2 selector:(SEL)arg3 ;
-(void)_setOpacityRamps:(id)arg0 ;
-(void)_setTransformRampFromStartTransform:(struct CGAffineTransform )arg0 toEndTransform:(struct CGAffineTransform )arg1 timeRange:(struct ? )arg2 selector:(SEL)arg3 ;
-(void)_setTransformRamps:(id)arg0 ;
-(void)_setValuesFromDictionary:(id)arg0 timeRange:(struct ? )arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setCropRectangle:(struct CGRect )arg0 atTime:(struct ? )arg1 ;
-(void)setCropRectangleRampFromStartCropRectangle:(struct CGRect )arg0 toEndCropRectangle:(struct CGRect )arg1 timeRange:(struct ? )arg2 ;
-(void)setOpacity:(float)arg0 atTime:(struct ? )arg1 ;
-(void)setOpacityRampFromStartOpacity:(float)arg0 toEndOpacity:(float)arg1 timeRange:(struct ? )arg2 ;
-(void)setTransform:(struct CGAffineTransform )arg0 atTime:(struct ? )arg1 ;
-(void)setTransformRampFromStartTransform:(struct CGAffineTransform )arg0 toEndTransform:(struct CGAffineTransform )arg1 timeRange:(struct ? )arg2 ;


@end


#endif
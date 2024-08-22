// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PVTRANSFORMANIMATION_H
#define PVTRANSFORMANIMATION_H

@class NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PVTransformAnimation : NSObject <NSSecureCoding, NSCopying>

 {
    *PVTransformAnimationInfo _liveTransform;
}


@property (readonly, nonatomic) NSArray *animationData; // ivar: _animationData
@property (nonatomic) CGFloat aspectRatio; // ivar: _aspectRatio
@property (nonatomic) ? presentationTimeRange; // ivar: _presentationTimeRange


+(BOOL)getTransformInfoFromAnimation:(id)arg0 atLocalTime:(struct ? )arg1 outInfo:(struct PVTransformAnimationInfo *)arg2 ;
+(BOOL)getTransformInfoFromAnimation:(id)arg0 atLocalTime:(struct ? )arg1 renderSize:(struct CGSize )arg2 contentMode:(int)arg3 invertY:(BOOL)arg4 outInfo:(struct PVTransformAnimationInfo *)arg5 ;
+(BOOL)getTransformInfoFromAnimation:(id)arg0 atTime:(struct ? )arg1 outInfo:(struct PVTransformAnimationInfo *)arg2 ;
+(BOOL)getTransformInfoFromAnimation:(id)arg0 atTime:(struct ? )arg1 renderSize:(struct CGSize )arg2 contentMode:(int)arg3 invertY:(BOOL)arg4 outInfo:(struct PVTransformAnimationInfo *)arg5 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)animationInfoFromData:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataFromAnimationInfo:(id)arg0 ;
-(id)description;
-(id)initWithAnimation:(id)arg0 ;
-(id)initWithAnimation:(id)arg0 liveTransform:(struct PVTransformAnimationInfo *)arg1 presentationTimeRange:(struct ? )arg2 ;
-(id)initWithAnimation:(id)arg0 simplify:(BOOL)arg1 tolerance:(CGFloat)arg2 smoothness:(unsigned int)arg3 ;
-(id)initWithAnimationInfo:(struct PVTransformAnimationInfo )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLiveTransform:(struct PVTransformAnimationInfo *)arg0 ;
-(struct CGSize )basisForRenderSize:(struct CGSize )arg0 contentMode:(int)arg1 ;
-(struct CGSize )basisForRenderSize:(struct CGSize )arg0 contentMode:(int)arg1 invertY:(BOOL)arg2 ;
-(struct PVTransformAnimationInfo )transformInfoAtLocalTime:(struct ? )arg0 ;
-(struct PVTransformAnimationInfo )transformInfoAtTime:(struct ? )arg0 ;
-(void)_commonInit:(id)arg0 liveTransform:(struct PVTransformAnimationInfo *)arg1 presentationTimeRange:(struct ? )arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
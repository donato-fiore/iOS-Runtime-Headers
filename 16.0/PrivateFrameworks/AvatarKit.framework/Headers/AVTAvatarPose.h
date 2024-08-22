// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTAVATARPOSE_H
#define AVTAVATARPOSE_H

@class NSMutableDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface AVTAvatarPose : NSObject <NSCopying>

 {
    BOOL _hasNeckPosition;
    BOOL _hasNeckOrientation;
    NSMutableDictionary *_weights;
    ? _neckPosition;
}


@property (nonatomic) CGFloat bakedAnimationBlendFactor; // ivar: _bakedAnimationBlendFactor
@property (nonatomic) ? neckOrientation; // ivar: _neckOrientation
@property ? neckPosition;


+(id)posesForAnimojiNamed:(id)arg0 inPosePack:(id)arg1 ;
+(id)posesForMemojiInPosePack:(id)arg0 ;
+(id)posesInPosePack:(id)arg0 ;
+(id)posesInPosePack:(id)arg0 avatarSelectionBlock:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPose:(id)arg0 ;
-(CGFloat)weightForBlendShapeNamed:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithScene:(id)arg0 ;
-(id)initWithWeights:(id)arg0 neckPosition:(struct ? **)arg1 neckOrientation:(CGFloat)arg2 bakedAnimationBlendFactor;
-(id)poseByMergingPose:(id)arg0 ;


@end


#endif
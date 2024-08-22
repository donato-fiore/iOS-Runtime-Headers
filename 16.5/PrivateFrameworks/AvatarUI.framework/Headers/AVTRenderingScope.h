// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTRENDERINGSCOPE_H
#define AVTRENDERINGSCOPE_H

@class NSString, AVTAvatarPose;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AVTRenderingScope : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *framingMode; // ivar: _framingMode
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) AVTAvatarPose *pose; // ivar: _pose
@property (readonly, nonatomic) NSInteger renderingType; // ivar: _renderingType
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly, nonatomic) CGSize size; // ivar: _size
@property (readonly, nonatomic) float sizeModifier; // ivar: _sizeModifier


+(BOOL)supportsSecureCoding;
+(CGFloat)extraMagnifyingFactorForFramingMode:(id)arg0 ;
+(CGFloat)thumbnailHeightRatioForFramingMode:(id)arg0 ;
+(CGFloat)widthForRenderingType:(NSInteger)arg0 options:(NSUInteger)arg1 ;
+(NSUInteger)scopeOptionsForEnvironment:(id)arg0 ;
+(id)funCamCarouselThumbnailScope;
+(id)gridThumbnailScope;
+(id)largeThumbnailScope;
+(id)listControllerThumbnailScope;
+(id)simplePickerThumbnailScope;
+(id)thumbnailScope;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)cacheableResourceAssociatedCost;
-(NSUInteger)hash;
-(id)adaptedFramingModeForObjectType:(NSInteger)arg0 ;
-(id)cacheableResourceAssociatedIdentifier;
-(id)copyApplyingPoseOverride:(id)arg0 ;
-(id)copyWithFramingMode:(id)arg0 ;
-(id)copyWithPose:(id)arg0 ;
-(id)copyWithSize:(struct CGSize )arg0 framingMode:(id)arg1 ;
-(id)copyWithSizeModifier:(float)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRenderingType:(NSInteger)arg0 scale:(CGFloat)arg1 ;
-(id)initWithRenderingType:(NSInteger)arg0 scale:(CGFloat)arg1 options:(NSUInteger)arg2 ;
-(id)initWithRenderingType:(NSInteger)arg0 scale:(CGFloat)arg1 options:(NSUInteger)arg2 framingMode:(id)arg3 pose:(id)arg4 ;
-(id)initWithRenderingType:(NSInteger)arg0 scale:(CGFloat)arg1 options:(NSUInteger)arg2 framingMode:(id)arg3 pose:(id)arg4 size:(struct CGSize )arg5 ;
-(id)initWithRenderingType:(NSInteger)arg0 scale:(CGFloat)arg1 options:(NSUInteger)arg2 framingMode:(id)arg3 pose:(id)arg4 sizeModifier:(float)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
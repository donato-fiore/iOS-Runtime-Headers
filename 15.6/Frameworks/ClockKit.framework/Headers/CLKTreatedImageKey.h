// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLKTREATEDIMAGEKEY_H
#define CLKTREATEDIMAGEKEY_H

@class UIImage;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CLKTreatedImageKey : NSObject <NSCopying>



@property (readonly, nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, nonatomic) NSInteger maskMode; // ivar: _maskMode
@property (readonly, nonatomic) CGSize maxDeviceSize; // ivar: _maxDeviceSize
@property (readonly, nonatomic) CGSize maxSDKSize; // ivar: _maxSDKSize
@property (readonly, nonatomic) UIImage *rawImage; // ivar: _rawImage
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly, nonatomic) NSInteger scaleMode; // ivar: _scaleMode
@property (readonly, nonatomic) CGFloat sdkDeviceScale; // ivar: _sdkDeviceScale


+(id)keyWithRawImage:(id)arg0 maxSDKSize:(struct CGSize )arg1 maxDeviceSize:(struct CGSize )arg2 cornerRadius:(CGFloat)arg3 ;
+(id)keyWithRawImage:(id)arg0 maxSDKSize:(struct CGSize )arg1 maxDeviceSize:(struct CGSize )arg2 maskMode:(NSInteger)arg3 ;
+(id)keyWithRawImage:(id)arg0 scale:(CGFloat)arg1 sdkDeviceScale:(CGFloat)arg2 cornerRadius:(CGFloat)arg3 ;
+(id)keyWithRawImage:(id)arg0 scale:(CGFloat)arg1 sdkDeviceScale:(CGFloat)arg2 maskMode:(NSInteger)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
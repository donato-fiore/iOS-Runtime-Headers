// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLKFULLCOLORIMAGEPROVIDER_H
#define CLKFULLCOLORIMAGEPROVIDER_H

@class NSString, UIImage, NSDictionary, UIColor;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CLKImageProvider.h"

@interface CLKFullColorImageProvider : NSObject <NSSecureCoding, NSCopying>

 {
    BOOL _applyScalingAndCircularMasking;
    BOOL _finalized;
}


@property (readonly, nonatomic) Class ImageViewClass; // ivar: _ImageViewClass
@property (retain, nonatomic) NSString *accessibilityLabel; // ivar: _accessibilityLabel
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (nonatomic) NSInteger monochromeFilterType; // ivar: _monochromeFilterType
@property (nonatomic) BOOL prefersFilterOverTransition; // ivar: _prefersFilterOverTransition
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (retain, nonatomic) CLKImageProvider *tintedImageProvider; // ivar: _tintedImageProvider
@property (readonly, nonatomic, getter=tritium_isTritiumInactiveFullColorImageProvider) BOOL tritium_inactiveFullColorImageProvider; // ivar: _tritium_inactiveFullColorImageProvider


+(BOOL)supportsSecureCoding;
+(id)fullColorImageProviderWithImageViewClass:(Class)arg0 ;
+(id)fullColorImageProviderWithJSONObjectRepresentation:(id)arg0 bundle:(id)arg1 ;
+(id)new;
+(id)providerWithFullColorImage:(id)arg0 ;
+(id)providerWithFullColorImage:(id)arg0 applyScalingAndCircularMasking:(BOOL)arg1 ;
+(id)providerWithFullColorImage:(id)arg0 monochromeFilterType:(NSInteger)arg1 ;
+(id)providerWithFullColorImage:(id)arg0 monochromeFilterType:(NSInteger)arg1 applyScalingAndCircularMasking:(BOOL)arg2 ;
+(id)providerWithFullColorImage:(id)arg0 tintedImageProvider:(id)arg1 ;
+(id)providerWithFullColorImage:(id)arg0 tintedImageProvider:(id)arg1 applyScalingAndCircularMasking:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)validate;
-(NSUInteger)hash;
-(id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initPrivate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFullColorImage:(id)arg0 ;
-(id)initWithFullColorImage:(id)arg0 applyScalingAndCircularMasking:(BOOL)arg1 ;
-(id)initWithFullColorImage:(id)arg0 monochromeFilterType:(NSInteger)arg1 ;
-(id)initWithFullColorImage:(id)arg0 monochromeFilterType:(NSInteger)arg1 applyScalingAndCircularMasking:(BOOL)arg2 ;
-(id)initWithFullColorImage:(id)arg0 tintedImageProvider:(id)arg1 ;
-(id)initWithFullColorImage:(id)arg0 tintedImageProvider:(id)arg1 applyScalingAndCircularMasking:(BOOL)arg2 ;
-(id)initWithJSONObjectRepresentation:(id)arg0 bundle:(id)arg1 ;
-(void)_resizeImagesIfNecessaryWithMaxSDKSize:(struct CGSize )arg0 maxDeviceSize:(struct CGSize )arg1 cornerRadius:(CGFloat)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finalizeWithMaxSDKSize:(struct CGSize )arg0 maxDeviceSize:(struct CGSize )arg1 cornerRadius:(CGFloat)arg2 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLKIMAGEPROVIDER_H
#define CLKIMAGEPROVIDER_H

@class NSString, UIImage, UIColor;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CLKImageProvider : NSObject <NSSecureCoding, NSCopying>

 {
    BOOL _finalized;
}


@property (retain, nonatomic) NSString *accessibilityLabel; // ivar: _accessibilityLabel
@property (retain, nonatomic) UIImage *foregroundAccentImage; // ivar: _foregroundAccentImage
@property (retain, nonatomic) UIColor *foregroundAccentImageColor; // ivar: _foregroundAccentImageColor
@property (nonatomic, getter=isForegroundAccentImageTinted) BOOL foregroundAccentImageTinted; // ivar: _foregroundAccentImageTinted
@property (copy, nonatomic) id *imageViewCreationHandler; // ivar: _imageViewCreationHandler
@property (readonly, nonatomic) CGSize maxSize; // ivar: _maxSize
@property (retain, nonatomic) UIImage *onePieceImage; // ivar: _onePieceImage
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (retain, nonatomic) UIImage *twoPieceImageBackground; // ivar: _twoPieceImageBackground
@property (retain, nonatomic) UIImage *twoPieceImageForeground; // ivar: _twoPieceImageForeground


+(BOOL)supportsSecureCoding;
+(id)imageProviderWithImageViewCreationHandler:(id)arg0 ;
+(id)imageProviderWithJSONObjectRepresentation:(id)arg0 bundle:(id)arg1 ;
+(id)imageProviderWithOnePieceImage:(id)arg0 ;
+(id)imageProviderWithOnePieceImage:(id)arg0 twoPieceImageBackground:(id)arg1 twoPieceImageForeground:(id)arg2 ;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)validate;
-(NSUInteger)hash;
-(id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initPrivate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithForegroundAccentImage:(id)arg0 ;
-(id)initWithJSONObjectRepresentation:(id)arg0 bundle:(id)arg1 ;
-(id)initWithOnePieceImage:(id)arg0 ;
-(id)initWithOnePieceImage:(id)arg0 twoPieceImageBackground:(id)arg1 twoPieceImageForeground:(id)arg2 ;
-(void)_resizeImagesIfNecessaryWithMaxSDKSize:(struct CGSize )arg0 andCornerRadius:(CGFloat)arg1 ;
-(void)_resizeImagesIfNecessaryWithMaxSDKSize:(struct CGSize )arg0 andMaskToCircle:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finalizeWithMaxSDKSize:(struct CGSize )arg0 maxDeviceSize:(struct CGSize )arg1 cornerRadius:(CGFloat)arg2 ;
-(void)finalizeWithMaxSDKSize:(struct CGSize )arg0 maxDeviceSize:(struct CGSize )arg1 maskToCircle:(BOOL)arg2 ;


@end


#endif
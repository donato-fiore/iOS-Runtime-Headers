// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIMONOGRAMDESCRIPTION_H
#define VUIMONOGRAMDESCRIPTION_H

@class UIColor, NSString, UIFont, NSURL, UIImage, NSDictionary;
@protocol NSCopying, VUINetworkRequestLoader;

#import <Foundation/Foundation.h>


@interface VUIMonogramDescription : NSObject <NSCopying>



@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) UIColor *borderColor; // ivar: _borderColor
@property (nonatomic) CGFloat borderWidth; // ivar: _borderWidth
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) CGSize defaultImageSize; // ivar: _defaultImageSize
@property (retain, nonatomic) UIColor *fillColor; // ivar: _fillColor
@property (readonly, copy, nonatomic) NSString *firstName; // ivar: _firstName
@property (readonly, copy, nonatomic) UIFont *font; // ivar: _font
@property (retain, nonatomic) UIColor *gradientEndColor; // ivar: _gradientEndColor
@property (retain, nonatomic) UIColor *gradientStartColor; // ivar: _gradientStartColor
@property (readonly, copy, nonatomic) NSURL *imageURL; // ivar: _imageURL
@property (readonly, copy, nonatomic) NSString *lastName; // ivar: _lastName
@property (nonatomic) BOOL optimizedImageRendering; // ivar: _optimizedImageRendering
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (retain, nonatomic) UIImage *placeholderImage; // ivar: _placeholderImage
@property (weak, nonatomic) NSObject<VUINetworkRequestLoader> *requestLoader; // ivar: _requestLoader
@property (nonatomic) NSInteger scaleMode; // ivar: _scaleMode
@property (nonatomic) BOOL shouldFallBackToSilhouette; // ivar: _shouldFallBackToSilhouette
@property (nonatomic) CGSize size; // ivar: _size
@property (retain, nonatomic) NSDictionary *specialOffsetByFirstLetter; // ivar: _specialOffsetByFirstLetter
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor
@property (nonatomic) CGFloat upscaleAdjustment; // ivar: _upscaleAdjustment


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)preferedMonogramType;
-(id)copyWithType:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithFirstName:(id)arg0 lastName:(id)arg1 imageURL:(id)arg2 font:(id)arg3 ;
-(struct CGPoint )specialOffsetForString:(id)arg0 ;


@end


#endif
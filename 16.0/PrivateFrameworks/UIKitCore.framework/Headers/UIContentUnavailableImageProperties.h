// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UICONTENTUNAVAILABLEIMAGEPROPERTIES_H
#define UICONTENTUNAVAILABLEIMAGEPROPERTIES_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UIImage.h"
#import "UIImageSymbolConfiguration.h"
#import "UIColor.h"

@interface UIContentUnavailableImageProperties : NSObject <NSCopying, NSSecureCoding>

 {
    ? _imageFlags;
    BOOL _accessibilityIgnoresInvertColors;
    UIImage *_image;
    UIImageSymbolConfiguration *_preferredSymbolConfiguration;
    UIColor *_tintColor;
    id *_tintColorTransformer;
    CGFloat _cornerRadius;
    NSInteger _tintColorTransformerIdentifier;
    CGSize _maximumSize;
}


@property (nonatomic) BOOL accessibilityIgnoresInvertColors;
@property (nonatomic) CGFloat cornerRadius;
@property (nonatomic) CGSize maximumSize;
@property (copy, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property (retain, nonatomic) UIColor *tintColor;
@property (copy, nonatomic) id *tintColorTransformer;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)resolvedTintColorForTintColor:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIGIFTTHEME_H
#define SKUIGIFTTHEME_H

@class UIColor, UIImage, NSURL, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SKUIGiftTheme : NSObject <NSCopying>



@property (copy, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (copy, nonatomic) UIColor *bodyTextColor; // ivar: _bodyTextColor
@property (retain, nonatomic) UIImage *headerImage; // ivar: _headerImage
@property (copy, nonatomic) NSURL *headerImageURL; // ivar: _headerImageURL
@property (copy, nonatomic) UIColor *primaryTextColor; // ivar: _primaryTextColor
@property (nonatomic) NSInteger themeIdentifier; // ivar: _themeIdentifier
@property (copy, nonatomic) NSString *themeName; // ivar: _themeName


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithThemeDictionary:(id)arg0 ;


@end


#endif
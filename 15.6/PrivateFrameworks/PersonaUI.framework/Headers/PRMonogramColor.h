// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRMONOGRAMCOLOR_H
#define PRMONOGRAMCOLOR_H

@class NSBundle, UIColor, NSString;

#import <Foundation/Foundation.h>


@interface PRMonogramColor : NSObject

@property (retain, nonatomic) NSBundle *bundle; // ivar: _bundle
@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (readonly, nonatomic) NSString *colorName; // ivar: _colorName
@property (retain, nonatomic) UIColor *gradientEndColor; // ivar: _gradientEndColor
@property (retain, nonatomic) UIColor *gradientStartColor; // ivar: _gradientStartColor
@property (retain, nonatomic) UIColor *selectedActiveColor; // ivar: _selectedActiveColor
@property (retain, nonatomic) UIColor *selectedActiveTextColor; // ivar: _selectedActiveTextColor
@property (retain, nonatomic) UIColor *selectedInactiveColor; // ivar: _selectedInactiveColor


+(id)availableColorNames;
+(id)availableColors;
+(id)colorWithName:(id)arg0 inBundle:(id)arg1 ;
+(id)defaultBundle;
+(id)defaultGradientEndColor;
+(id)defaultGradientStartColor;
+(id)defaultSelectedActiveColor;
+(id)defaultSelectedActiveTextColor;
+(id)defaultSelectedInactiveColor;
+(id)generateMonogramGradientColorsByNameDictionary;
+(id)gradientEndName:(id)arg0 ;
+(id)gradientStartColor:(id)arg0 ;
+(id)gradientStartName:(id)arg0 ;
+(id)monogramGradientColorNamed:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithColorName:(id)arg0 ;
-(id)initWithColorName:(id)arg0 inBundle:(id)arg1 ;
-(id)initWithRandomColor;


@end


#endif
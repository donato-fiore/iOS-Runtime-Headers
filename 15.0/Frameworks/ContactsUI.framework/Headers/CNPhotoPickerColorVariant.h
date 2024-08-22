// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNPHOTOPICKERCOLORVARIANT_H
#define CNPHOTOPICKERCOLORVARIANT_H

@class UIColor, NSString;

#import <Foundation/Foundation.h>


@interface CNPhotoPickerColorVariant : NSObject

@property (readonly, nonatomic) UIColor *color; // ivar: _color
@property (readonly, nonatomic) NSString *colorName; // ivar: _colorName


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithColor:(id)arg0 named:(id)arg1 ;


@end


#endif
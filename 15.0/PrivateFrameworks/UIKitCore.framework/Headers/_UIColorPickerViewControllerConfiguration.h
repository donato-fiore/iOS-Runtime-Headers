// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICOLORPICKERVIEWCONTROLLERCONFIGURATION_H
#define _UICOLORPICKERVIEWCONTROLLERCONFIGURATION_H

@class NSArray, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _UIColorPickerViewControllerConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL _isEmbedded; // ivar: __isEmbedded
@property (nonatomic) CGFloat _keyboardSpace; // ivar: __keyboardSpace
@property (nonatomic) BOOL _shouldUseDarkGridInDarkMode; // ivar: __shouldUseDarkGridInDarkMode
@property (copy, nonatomic) NSArray *_suggestedColors; // ivar: __suggestedColors
@property (nonatomic) NSInteger _userInterfaceStyleForGrid; // ivar: __userInterfaceStyleForGrid
@property (nonatomic) BOOL showsAlpha; // ivar: _showsAlpha
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
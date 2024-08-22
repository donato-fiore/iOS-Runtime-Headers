// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PREDITORCOLORPICKERVIBRANTMONOTONECOLOR_H
#define PREDITORCOLORPICKERVIBRANTMONOTONECOLOR_H

@class NSString, NSDictionary;
@protocol BSDescriptionStreamable, BSXPCSecureCoding, PREditorColorPickerColor, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PRPosterColor.h"

@interface PREditorColorPickerVibrantMonotoneColor : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, PREditorColorPickerColor, NSSecureCoding>



@property (copy, nonatomic) PRPosterColor *activeDisplayColor; // ivar: _activeDisplayColor
@property (readonly, copy, nonatomic) PRPosterColor *baseColor;
@property (readonly, nonatomic) PRPosterColor *color; // ivar: _color
@property (nonatomic) CGFloat contentsLuminance; // ivar: _contentsLuminance
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *displayColors; // ivar: _displayColors
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat initialVariation;
@property (readonly) BOOL isCustomColor;
@property (readonly) BOOL isVibrantColor;
@property (readonly, nonatomic) PRPosterColor *leftSliderColor;
@property (readonly, copy, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, nonatomic) PRPosterColor *rightSliderColor;
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
+(CGFloat)luminanceForPosterColor:(id)arg0 withAppliedVariation:(CGFloat)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)variationForAlpha:(CGFloat)arg0 ;
-(id)colorWithVariation:(CGFloat)arg0 ;
-(id)displayColorWithVariation:(CGFloat)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithColor:(id)arg0 displayColors:(id)arg1 ;
-(id)initWithColor:(id)arg0 displayColors:(id)arg1 localizedName:(id)arg2 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
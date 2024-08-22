// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSCOLORPROFILE_H
#define PKPASSCOLORPROFILE_H

@class UIColor;

#import <Foundation/Foundation.h>

#import "PKPassColorProfile.h"

@interface PKPassColorProfile : NSObject {
    CGFloat _backgroundLightness;
    CGFloat _foregroundLightness;
    CGFloat _labelLightness;
    PKPassColorProfile *_stripProfile;
}


@property (readonly, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) UIColor *foregroundColor; // ivar: _foregroundColor
@property (readonly, nonatomic) UIColor *highlightColor; // ivar: _highlightColor
@property (readonly, nonatomic) BOOL isLight;
@property (readonly, nonatomic) UIColor *labelColor; // ivar: _labelColor
@property (readonly, nonatomic) CGFloat overlayDarkeningAlpha; // ivar: _overlayDarkeningAlpha
@property (readonly, nonatomic) CGFloat overlayLighteningAlpha; // ivar: _overlayLighteningAlpha
@property (readonly, nonatomic) CGFloat regularDarkeningAlpha; // ivar: _regularDarkeningAlpha
@property (readonly, nonatomic) CGFloat regularLighteningAlpha; // ivar: _regularLighteningAlpha


+(id)profileForDisplayProfile:(id)arg0 ;
-(id)_imageForGlyph:(id)arg0 color:(id)arg1 ;
-(id)_initWithBackgroundColor:(id)arg0 foregroundColor:(id)arg1 labelColor:(id)arg2 ;
-(id)foregroundAttributesForFont:(id)arg0 ;
-(id)foregroundColorOverStrip:(BOOL)arg0 ;
-(id)foregroundImageForGlyph:(id)arg0 ;
-(id)labelAttributesForFont:(id)arg0 ;
-(id)labelColorOverStrip:(BOOL)arg0 ;
-(id)labelImageForGlyph:(id)arg0 ;
-(void)_calculateColorsWithBackgroundColor:(id)arg0 foregroundColor:(id)arg1 labelColor:(id)arg2 ;
-(void)dealloc;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKFACECOLORSCHEME_H
#define NTKFACECOLORSCHEME_H

@class NSMutableDictionary, UIColor, CLKDevice, NSArray;

#import <Foundation/Foundation.h>

#import "NTKFaceColorPalette.h"

@interface NTKFaceColorScheme : NSObject {
    NSMutableDictionary *_colorsByUnit;
}


@property (readonly, nonatomic) UIColor *accentColor;
@property (readonly, nonatomic) UIColor *activityTickColor;
@property (readonly, nonatomic) UIColor *alternativeTickColor;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL containsOverrideFaceColor; // ivar: _containsOverrideFaceColor
@property (readonly, nonatomic) CLKDevice *device; // ivar: _device
@property (retain, nonatomic) NTKFaceColorPalette *faceColorPalette; // ivar: _faceColorPalette
@property (retain, nonatomic) NSArray *faceColors; // ivar: _faceColors
@property (readonly, nonatomic) UIColor *foregroundColor;
@property (nonatomic) CGFloat multicolorAlpha; // ivar: _multicolorAlpha
@property (readonly, nonatomic) UIColor *secondaryForegroundColor;
@property (readonly, nonatomic) UIColor *shiftedBackgroundColor;
@property (readonly, nonatomic) UIColor *shiftedForegroundColor;
@property (readonly, nonatomic) UIColor *stackedImagesForegroundColor;
@property (readonly, nonatomic) UIColor *tickColor;
@property (readonly, nonatomic) NSUInteger units;
@property (readonly, nonatomic) UIColor *upNextTextColor;


+(id)colorSchemeForDevice:(id)arg0 withFaceColorPalette:(id)arg1 foregroundColor:(id)arg2 units:(NSUInteger)arg3 alternateHighlight:(BOOL)arg4 ;
+(id)colorSchemeForDevice:(id)arg0 withFaceColorPalette:(id)arg1 units:(NSUInteger)arg2 ;
+(id)interpolationForDevice:(id)arg0 fromFaceColorPalette:(id)arg1 toFaceColorPalette:(id)arg2 fraction:(CGFloat)arg3 units:(NSUInteger)arg4 brightenUnits:(NSUInteger)arg5 overrideColor:(id)arg6 alternateHighlight:(BOOL)arg7 ;
+(id)interpolationFrom:(id)arg0 to:(id)arg1 fraction:(CGFloat)arg2 ;
+(id)interpolationFrom:(id)arg0 to:(id)arg1 fraction:(CGFloat)arg2 brightenUnits:(NSUInteger)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_colorForUnit:(NSUInteger)arg0 ;
-(id)initForDevice:(id)arg0 ;
-(void)_setColor:(id)arg0 forUnit:(NSUInteger)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRPOSTERCOLOR_H
#define PRPOSTERCOLOR_H

@class UIColor, NSString;
@protocol BSDescriptionStreamable, BSXPCSecureCoding, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PRPosterColorValues.h"
#import "PRPosterColorHSLValues.h"

@interface PRPosterColor : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSSecureCoding, NSCopying>



@property (readonly, nonatomic) UIColor *color; // ivar: _color
@property (readonly, nonatomic) PRPosterColorValues *colorValues; // ivar: _colorValues
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) PRPosterColorValues *hsbValues;
@property (readonly) PRPosterColorHSLValues *hslValues;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, nonatomic) NSUInteger preferredStyle; // ivar: _preferredStyle
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isVibrantMaterialColor) BOOL vibrantMaterialColor;
@property (readonly, nonatomic, getter=isVibrantMonochromeColor) BOOL vibrantMonochromeColor;


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
+(id)identifierForColorWithValues:(id)arg0 style:(NSUInteger)arg1 ;
+(id)styleStringForStyle:(NSUInteger)arg0 ;
+(id)vibrantMaterialColor;
+(id)vibrantMonochromeColor;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLUTBackedColor;
-(id)copyWithAlpha:(CGFloat)arg0 ;
-(id)copyWithLuminance:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithColor:(id)arg0 ;
-(id)initWithColor:(id)arg0 preferredStyle:(NSUInteger)arg1 ;
-(id)initWithColor:(id)arg0 preferredStyle:(NSUInteger)arg1 localizedName:(id)arg2 ;
-(id)initWithHue:(CGFloat)arg0 saturation:(CGFloat)arg1 luminance:(CGFloat)arg2 alpha:(CGFloat)arg3 preferredStyle:(NSUInteger)arg4 ;
-(id)initWithHue:(CGFloat)arg0 saturation:(CGFloat)arg1 luminance:(CGFloat)arg2 alpha:(CGFloat)arg3 preferredStyle:(NSUInteger)arg4 localizedName:(id)arg5 ;
-(id)initWithIdentifier:(id)arg0 color:(id)arg1 colorValues:(id)arg2 preferredStyle:(NSUInteger)arg3 ;
-(id)initWithIdentifier:(id)arg0 color:(id)arg1 colorValues:(id)arg2 preferredStyle:(NSUInteger)arg3 localizedName:(id)arg4 ;
-(id)initWithIdentifier:(id)arg0 color:(id)arg1 preferredStyle:(NSUInteger)arg2 ;
-(id)initWithLUTIdentifier:(id)arg0 ;
-(id)initWithPosterColor:(id)arg0 ;
-(id)lutIdentifier;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
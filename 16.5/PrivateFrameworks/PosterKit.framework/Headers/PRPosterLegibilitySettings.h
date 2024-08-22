// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRPOSTERLEGIBILITYSETTINGS_H
#define PRPOSTERLEGIBILITYSETTINGS_H

@class _UILegibilitySettings, UIColor, NSString;
@protocol BSXPCSecureCoding, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PRPosterLegibilitySettings : NSObject <BSXPCSecureCoding, NSSecureCoding, NSCopying>

 {
    _UILegibilitySettings *_cachedLegibilitySettings;
    _UILegibilitySettings *_specifiedLegibilitySettings;
    CGFloat _shadowAlphaOverride;
    CGFloat _shadowRadiusMultiplier;
}


@property (copy, nonatomic) UIColor *contentColor; // ivar: _contentColor
@property (nonatomic) CGFloat contrast; // ivar: _contrast
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *primaryColor; // ivar: _primaryColor
@property (retain, nonatomic) UIColor *secondaryColor; // ivar: _secondaryColor
@property (retain, nonatomic) UIColor *shadowColor; // ivar: _shadowColor
@property (readonly, nonatomic) NSInteger source; // ivar: _source
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
+(id)legibilitySettingsForContentColor:(id)arg0 contrast:(CGFloat)arg1 ;
+(id)legibilitySettingsForStyle:(NSInteger)arg0 primaryColor:(id)arg1 secondaryColor:(id)arg2 shadowColor:(id)arg3 ;
+(id)legibilitySettingsWithUILegibilitySettings:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLegibilitySettings:(id)arg0 ;
-(id)convertToUILegibility;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 primaryColor:(id)arg1 secondaryColor:(id)arg2 shadowColor:(id)arg3 ;
-(id)legibilitySettingsByApplyingShadowRadiusMultiplier:(CGFloat)arg0 ;
-(id)legibilitySettingsByOverridingShadowAlpha:(CGFloat)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
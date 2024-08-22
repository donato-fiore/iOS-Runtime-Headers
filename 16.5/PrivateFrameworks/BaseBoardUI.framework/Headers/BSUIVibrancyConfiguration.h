// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSUIVIBRANCYCONFIGURATION_H
#define BSUIVIBRANCYCONFIGURATION_H

@class UIColor, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "BSUIVibrancyShadowValues.h"
#import "BSUIVibrancyEffectValues.h"
#import "BSUIVibrancyLUT.h"
#import "BSUIVibrancyConfiguration.h"

@interface BSUIVibrancyConfiguration : NSObject <NSCopying, NSSecureCoding>

 {
    BSUIVibrancyShadowValues *_shadowValues;
    BSUIVibrancyEffectValues *_effectValues;
}


@property (readonly, copy, nonatomic) BSUIVibrancyLUT *alternativeVibrancyEffectLUT; // ivar: _alternativeVibrancyEffectLUT
@property (readonly, nonatomic) NSInteger backgroundType; // ivar: _backgroundType
@property (readonly, nonatomic) CGFloat blendAmount; // ivar: _blendAmount
@property (readonly, copy, nonatomic) BSUIVibrancyConfiguration *blendConfiguration; // ivar: _blendConfiguration
@property (readonly, copy, nonatomic) UIColor *color; // ivar: _color
@property (readonly, nonatomic) NSInteger effectType; // ivar: _effectType
@property (readonly) BSUIVibrancyEffectValues *effectValues;
@property (readonly, copy, nonatomic) NSString *groupName; // ivar: _groupName
@property (readonly) BSUIVibrancyShadowValues *shadowValues;


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithAlternativeVibrancyEffectLUT:(id)arg0 ;
-(id)copyWithBlendAmount:(CGFloat)arg0 blendConfiguration:(id)arg1 ;
-(id)copyWithBlendAmount:(CGFloat)arg0 blendConfiguration:(id)arg1 alternativeVibrancyEffectLUT:(id)arg2 ;
-(id)copyWithEffectType:(NSInteger)arg0 color:(id)arg1 ;
-(id)copyWithGroupName:(id)arg0 ;
-(id)copyWithWithBackgroundType:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEffectType:(NSInteger)arg0 backgroundType:(NSInteger)arg1 color:(id)arg2 ;
-(id)initWithEffectType:(NSInteger)arg0 backgroundType:(NSInteger)arg1 color:(id)arg2 groupName:(id)arg3 ;
-(id)initWithEffectType:(NSInteger)arg0 backgroundType:(NSInteger)arg1 color:(id)arg2 groupName:(id)arg3 blendConfiguration:(id)arg4 blendAmount:(CGFloat)arg5 alternativeVibrancyEffectLUT:(id)arg6 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
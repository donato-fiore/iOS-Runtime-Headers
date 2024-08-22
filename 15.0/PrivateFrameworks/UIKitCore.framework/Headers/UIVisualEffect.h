// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIVISUALEFFECT_H
#define UIVISUALEFFECT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_UIVisualEffectConfig.h"
#import "_UIBackdropViewSettings.h"

@interface UIVisualEffect : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL _isATVStyle;
@property (readonly, nonatomic) BOOL _isAutomaticStyle;
@property (readonly, nonatomic) _UIVisualEffectConfig *effectConfig;
@property (readonly, nonatomic) _UIBackdropViewSettings *effectSettings;


+(BOOL)supportsSecureCoding;
+(id)_effectCopyingFromCaptureGroup:(id)arg0 ;
+(id)effectCombiningEffects:(id)arg0 ;
+(id)effectCompositingColor:(id)arg0 ;
+(id)effectCompositingColor:(id)arg0 withMode:(NSInteger)arg1 alpha:(CGFloat)arg2 ;
+(id)effectCompositingImage:(id)arg0 ;
+(id)effectCompositingImage:(id)arg0 withMode:(NSInteger)arg1 alpha:(CGFloat)arg2 ;
+(id)emptyEffect;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg0 toEnvironment:(id)arg1 usage:(NSInteger)arg2 ;
-(BOOL)_selectorOverridden:(SEL)arg0 ;
-(NSInteger)_expectedUsage;
-(id)_allEffects;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)effectConfigForQuality:(NSInteger)arg0 ;
-(id)effectForUserInterfaceStyle:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_enumerateEffects:(id)arg0 ;
-(void)_updateEffectDescriptor:(id)arg0 forEnvironment:(id)arg1 usage:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
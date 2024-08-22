// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRPOSTERTITLESTYLECONFIGURATION_H
#define PRPOSTERTITLESTYLECONFIGURATION_H

@class NSString, BSUIVibrancyConfiguration;
@protocol BSDescriptionStreamable, BSXPCSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PRPosterColor.h"
#import "PRPosterTimeFontConfiguration.h"

@interface PRPosterTitleStyleConfiguration : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, nonatomic, getter=isAlternateDateEnabled) BOOL alternateDateEnabled;
@property (readonly, nonatomic) CGFloat contentsLuminance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *effectiveTimeNumberingSystem;
@property (readonly, copy, nonatomic) PRPosterColor *effectiveTitleColor;
@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) PRPosterTimeFontConfiguration *timeFontConfiguration;
@property (readonly, copy, nonatomic) NSString *timeNumberingSystem;
@property (readonly, copy, nonatomic) PRPosterColor *titleColor;
@property (readonly, nonatomic, getter=isUserConfigured) BOOL userConfigured;
@property (readonly, copy, nonatomic) BSUIVibrancyConfiguration *vibrancyConfiguration; // ivar: _vibrancyConfiguration


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
+(CGFloat)defaultContentsLuminance;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)defaultTimeFont;
+(id)defaultTimeNumberingSystem;
+(id)defaultTitleColor;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isVisiblyEqualToTitleStyleConfiguration:(id)arg0 ;
-(Class)classForCoder;
-(id)_vibrancyConfigurationWithExtensionBundleURL:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)effectiveTimeFontWithExtensionBundle:(id)arg0 ;
-(id)effectiveTimeFontWithExtensionBundleURL:(id)arg0 ;
-(id)init;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimeFontConfiguration:(id)arg0 titleColor:(id)arg1 ;
-(id)initWithTimeFontConfiguration:(id)arg0 titleColor:(id)arg1 timeNumberingSystem:(id)arg2 ;
-(id)initWithTimeFontConfiguration:(id)arg0 titleColor:(id)arg1 timeNumberingSystem:(id)arg2 userConfigured:(BOOL)arg3 contentsLuminance:(CGFloat)arg4 alternateDateEnabled:(BOOL)arg5 groupName:(id)arg6 ;
-(id)initWithTitleStyleConfiguration:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)resolvedWithLookDefaultTitleStyleConfiguration:(id)arg0 allowTimeColorUpdates:(BOOL)arg1 allowTimeFontUpdates:(BOOL)arg2 ;
-(id)vibrancyConfigurationWithExtensionBundle:(id)arg0 ;
-(id)vibrancyConfigurationWithExtensionBundleURL:(id)arg0 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
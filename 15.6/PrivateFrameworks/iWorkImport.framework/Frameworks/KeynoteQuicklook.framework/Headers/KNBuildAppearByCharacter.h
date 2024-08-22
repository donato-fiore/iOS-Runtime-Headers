// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KNBUILDAPPEARBYCHARACTER_H
#define KNBUILDAPPEARBYCHARACTER_H

@class NSString;
@protocol KNAnimationPluginArchiving, KNAnimationPluginObsoleteNames, KNAnimationPluginAlternateArchiving;


#import "KNBuildAppear.h"

@interface KNBuildAppearByCharacter : KNBuildAppear <KNAnimationPluginArchiving, KNAnimationPluginObsoleteNames, KNAnimationPluginAlternateArchiving>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)shouldWarnOnUpgradeWithOldAnimationName:(id)arg0 version:(NSUInteger)arg1 ;
+(NSUInteger)p_legacyDirectionWithDirection:(NSUInteger)arg0 type:(NSInteger)arg1 ;
+(NSUInteger)p_textDeliveryOptionWithDirection:(NSUInteger)arg0 type:(NSInteger)arg1 isClassic:(BOOL)arg2 ;
+(id)animationFilter;
+(id)animationName;
+(id)customAttributes;
+(id)defaultAttributes;
+(id)localizedAnimationStringForUpgradeWarning:(NSInteger)arg0 ;
+(id)obsoleteAnimationNames;
+(void)downgradeAttributes:(*id)arg0 animationName:(*id)arg1 warning:(*id)arg2 type:(NSInteger)arg3 isToClassic:(BOOL)arg4 version:(NSUInteger)arg5 ;
+(void)upgradeAttributes:(*id)arg0 animationName:(id)arg1 oldAnimationName:(id)arg2 warning:(*id)arg3 type:(NSInteger)arg4 isFromClassic:(BOOL)arg5 version:(NSUInteger)arg6 ;


@end


#endif
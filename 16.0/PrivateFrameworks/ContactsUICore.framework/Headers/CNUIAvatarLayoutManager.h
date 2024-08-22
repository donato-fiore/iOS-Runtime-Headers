// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUIAVATARLAYOUTMANAGER_H
#define CNUIAVATARLAYOUTMANAGER_H


#import <Foundation/Foundation.h>


@interface CNUIAvatarLayoutManager : NSObject



+(NSInteger)maxAvatarCountForType:(NSUInteger)arg0 ;
+(id)avatarBadgeLayerForAvatarInRect:(struct CGRect )arg0 badgeType:(NSUInteger)arg1 isRTL:(BOOL)arg2 ;
+(id)avatarViewLayoutConfigurationsDictionaryForType:(NSUInteger)arg0 ;
+(id)avatarViewLayoutConfigurationsForType:(NSUInteger)arg0 ;
+(id)avatarViewLayoutItemConfigurations:(id)arg0 ;
+(id)identifierForLayoutType:(NSUInteger)arg0 ;
+(id)layoutConfigurationsForType:(NSUInteger)arg0 withItemCount:(NSInteger)arg1 ;
+(struct CGRect )avatarBadgeRectForAvatarInRect:(struct CGRect )arg0 badgeType:(NSUInteger)arg1 isRTL:(BOOL)arg2 ;
+(struct CGRect )frameForBadgeWithFrame:(struct CGRect )arg0 onAvatarFrame:(struct CGRect )arg1 withPosition:(NSInteger)arg2 mediaContextFrame:(struct CGRect )arg3 isRTL:(BOOL)arg4 ;
+(void)applyAvatarBadgeStylingToLayer:(id)arg0 badgeType:(NSUInteger)arg1 ;
+(void)cropAvatarBadgeLayer:(id)arg0 withCropStyle:(NSUInteger)arg1 ;


@end


#endif
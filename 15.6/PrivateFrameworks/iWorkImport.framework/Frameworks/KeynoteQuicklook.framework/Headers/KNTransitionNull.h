// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KNTRANSITIONNULL_H
#define KNTRANSITIONNULL_H

@class NSString;
@protocol KNTransitionCAAnimator;


#import "KNAnimationEffect.h"

@interface KNTransitionNull : KNAnimationEffect <KNTransitionCAAnimator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)animationCategory;
+(NSInteger)rendererTypeForAnimationContext:(id)arg0 ;
+(NSUInteger)directionType;
+(id)animationFilter;
+(id)animationName;
+(id)defaultAttributes;
+(id)localizedMenuString:(NSInteger)arg0 ;
+(id)supportedTypes;
+(id)thumbnailImageNameForType:(NSInteger)arg0 ;
+(void)fillLocalizedDirectionMenu:(id)arg0 forType:(NSInteger)arg1 ;
-(void)addAnimationsTo:(id)arg0 context:(id)arg1 ;


@end


#endif
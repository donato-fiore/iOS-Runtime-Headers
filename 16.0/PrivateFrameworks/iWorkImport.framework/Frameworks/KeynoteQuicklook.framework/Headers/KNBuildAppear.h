// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNBUILDAPPEAR_H
#define KNBUILDAPPEAR_H

@class NSString;
@protocol KNBuildCAAnimator;


#import "KNAnimationEffect.h"

@interface KNBuildAppear : KNAnimationEffect <KNBuildCAAnimator>



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
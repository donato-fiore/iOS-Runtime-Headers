// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNANIMATIONREGISTRY_H
#define KNANIMATIONREGISTRY_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface KNAnimationRegistry : NSObject {
    NSDictionary *_classesForTypeAndName;
    NSDictionary *_classesForTypeAndCategory;
    NSDictionary *_classesForTypeAndFilter;
    NSDictionary *_classesForTypeAndObsoleteName;
    NSDictionary *_alternateEffectIdentifiersForEffectIdentifierAndFilter;
    NSArray *_animationInfos;
}




+(id)animationsInBundle;
+(id)categoryNameForPluginClass:(Class)arg0 ;
+(id)instance;
+(id)localizedCategoryNameForCategory:(NSInteger)arg0 ;
+(id)localizedNameForUnsupportedAnimation:(id)arg0 ;
-(BOOL)canMapEffectIdentifier:(id)arg0 animationType:(NSInteger)arg1 toEffectIdentifier:(id)arg2 includeObsoleteNames:(BOOL)arg3 forDrawable:(id)arg4 ;
-(id)allAnimationInfos;
-(id)animationInfoForEffectIdentifier:(id)arg0 animationType:(NSInteger)arg1 ;
-(id)animationInfoForEffectIdentifier:(id)arg0 animationType:(NSInteger)arg1 includeObsoleteNames:(BOOL)arg2 ;
-(id)animationInfoForEffectIdentifier:(id)arg0 animationType:(NSInteger)arg1 includeObsoleteNames:(BOOL)arg2 drawable:(id)arg3 ;
-(id)animationInfosForAnimationType:(NSInteger)arg0 category:(id)arg1 ;
-(id)animationInfosForAnimationType:(NSInteger)arg0 filter:(id)arg1 ;
-(id)distinctCategoriesForType:(NSInteger)arg0 ;
-(id)init;
-(id)p_buildAlternateFilterMap;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDSLIDEBASE_H
#define PDSLIDEBASE_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "OADBackground.h"
#import "PDAnimation.h"
#import "PDTransition.h"
#import "OADTableStyle.h"

@interface PDSlideBase : NSObject {
    NSString *mName;
    NSArray *mDrawables;
    OADBackground *mBackground;
    PDAnimation *mAnimation;
    PDTransition *mTransition;
    PDTransition *mPpt2011Transition;
    OADTableStyle *mDefaultTableStyle;
    BOOL mIsHidden;
    BOOL mIsDoneWithContent;
}


@property (nonatomic) unsigned int slideId; // ivar: mSlideId


+(int)inheritedPlaceholderType:(int)arg0 ;
-(BOOL)hasPpt10Animations;
-(BOOL)hasPpt9Animations;
-(BOOL)isHidden;
-(id)animation;
-(id)background;
-(id)colorMap;
-(id)colorScheme;
-(id)defaultTableStyle;
-(id)defaultTextListStyle;
-(id)defaultTheme;
-(id)description;
-(id)drawables;
-(id)drawingTheme;
-(id)fontScheme;
-(id)inheritedTextStyleForPlaceholderType:(int)arg0 ;
-(id)init;
-(id)masterGraphicForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(BOOL)arg2 ;
-(id)name;
-(id)parentShapePropertiesForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(BOOL)arg2 ;
-(id)parentSlideBase;
-(id)parentTextBodyPropertiesForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(BOOL)arg2 ;
-(id)parentTextStyleForPlaceholderType:(int)arg0 placeholderTypeIndex:(int)arg1 defaultTextListStyle:(id)arg2 overrideIndex:(BOOL)arg3 ;
-(id)parentTextStyleForTables;
-(id)placeholderWithType:(int)arg0 placeholderTypeIndex:(int)arg1 overrideIndex:(BOOL)arg2 ;
-(id)placeholderWithType:(int)arg0 placeholderTypeIndex:(int)arg1 useBaseTypeMatch:(BOOL)arg2 overrideIndex:(BOOL)arg3 ;
-(id)placeholders;
-(id)ppt2011Transition;
-(id)styleMatrix;
-(id)transition;
-(void)addSlideNumberPlaceholder:(id)arg0 ;
-(void)doneWithContent;
-(void)generatePpt9Animations:(id)arg0 ;
-(void)removeUnnecessaryOverrides;
-(void)setBackground:(id)arg0 ;
-(void)setDefaultTableStyle:(id)arg0 ;
-(void)setDrawables:(id)arg0 ;
-(void)setDrawablesNoHierarchy:(id)arg0 ;
-(void)setIsHidden:(BOOL)arg0 ;
-(void)setName:(id)arg0 ;
-(void)setPpt2011Transition:(id)arg0 ;
-(void)setPpt9AnimationDataForCacheItem:(id)arg0 order:(int)arg1 state:(id)arg2 ;
-(void)setTransition:(id)arg0 ;
-(void)setUpDrawablePropertyHierarchy;
-(void)setUpPropertyHierarchyForDrawable:(id)arg0 ;
-(void)setUpPropertyHierarchyForDrawablePreservingEffectiveValues:(id)arg0 ;
-(void)setUpPropertyHierarchyPreservingEffectiveValues;


@end


#endif
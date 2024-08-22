// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGREUSABLEAXINFO_H
#define PXGREUSABLEAXINFO_H

@class NSArray, NSString, UIFocusEffect, UIView;
@protocol UIFocusItem, PXGAXInfo, PXReusableObject, PXDisplayAsset, PXAnonymousView, UIFocusItemContainer, UIFocusEnvironment;

#import <Foundation/Foundation.h>

#import "PXGBasicAXGroup.h"

@interface PXGReusableAXInfo : NSObject <UIFocusItem, PXGAXInfo, PXReusableObject>



@property (nonatomic) BOOL allowDecorations; // ivar: _allowDecorations
@property (nonatomic) NSInteger alternateUIVisibility; // ivar: _alternateUIVisibility
@property (nonatomic) BOOL axAccessibleWhenTransparent; // ivar: _axAccessibleWhenTransparent
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *axAsset;
@property (weak, nonatomic) PXGBasicAXGroup *axContainingGroup; // ivar: _axContainingGroup
@property (nonatomic) NSInteger axContentKind; // ivar: _axContentKind
@property (retain, nonatomic) NSArray *axDecorations; // ivar: _axDecorations
@property (readonly, nonatomic) CGRect axFrame;
@property (readonly, nonatomic) NSString *axImageName;
@property (readonly, nonatomic) BOOL axIsSelected;
@property (readonly, nonatomic) NSString *axSubtitle;
@property (readonly, nonatomic) NSString *axText;
@property (readonly, nonatomic) NSString *axTitle;
@property (readonly, nonatomic) NSObject<PXAnonymousView> *axView;
@property (readonly, nonatomic) BOOL canBecomeFocused;
@property (readonly, nonatomic) id *content; // ivar: _content
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) UIFocusEffect *focusEffect;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly, nonatomic) NSInteger focusGroupPriority;
@property (readonly, nonatomic) NSObject<UIFocusItemContainer> *focusItemContainer;
@property (nonatomic) NSInteger focusRingType; // ivar: _focusRingType
@property (readonly, nonatomic) CGRect frame;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isTransparentFocusItem;
@property (readonly, weak, nonatomic) NSObject<UIFocusEnvironment> *parentFocusEnvironment;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (nonatomic) ? spriteGeometry; // ivar: _spriteGeometry
@property (nonatomic) unsigned int spriteIndex; // ivar: _spriteIndex
@property (nonatomic) ? spriteStyle; // ivar: _spriteStyle
@property (nonatomic) ? spriteStyleCornerRadius; // ivar: _spriteStyleCornerRadius
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)_assetHasContentSourceInLayout:(id)arg0 atSpriteIndex:(unsigned int)arg1 ;
+(Class)_viewClassInLayout:(id)arg0 atSpriteIndex:(unsigned int)arg1 ;
+(id)_imageNameInLayout:(id)arg0 atSpriteIndex:(unsigned int)arg1 ;
+(id)_textInLayout:(id)arg0 atSpriteIndex:(unsigned int)arg1 ;
+(id)_titleSubtitleInLayout:(id)arg0 atSpriteIndex:(unsigned int)arg1 ;
+(id)sharedPool;
-(BOOL)_fillForKind:(NSInteger)arg0 withLayout:(id)arg1 spriteIndex:(unsigned int)arg2 ;
-(BOOL)_isEligibleForFocusInteraction;
-(BOOL)fillContentForContentKind:(NSInteger)arg0 inLayout:(id)arg1 atIndex:(unsigned int)arg2 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(id)_viewAtSpriteIndex:(unsigned int)arg0 ;
-(id)init;
-(void)applyToInfo:(id)arg0 ;
-(void)becomeReusable;
-(void)didHintFocusMovement:(id)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)prepareForReuse;
-(void)setNeedsFocusUpdate;
-(void)updateFocusIfNeeded;


@end


#endif
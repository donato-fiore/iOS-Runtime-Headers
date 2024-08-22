// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBMAINDISPLAYLAYOUTSTATE_H
#define SBMAINDISPLAYLAYOUTSTATE_H

@class NSString, NSDictionary;


#import "SBLayoutState.h"
#import "SBAppLayout.h"

@interface SBMainDisplayLayoutState : SBLayoutState {
    SBAppLayout *_cachedAppLayoutIfAny;
    SBAppLayout *_cachedFloatingAppLayoutIfAny;
}


@property (readonly, nonatomic) NSString *bundleIDShowingAppExpose; // ivar: _bundleIDShowingAppExpose
@property (readonly, nonatomic) NSInteger centerConfiguration; // ivar: _centerConfiguration
@property (readonly, nonatomic, getter=isCenterEntityModal) BOOL centerEntityModal; // ivar: _centerEntityModal
@property (readonly, copy, nonatomic) NSString *continuousExposeIdentifier; // ivar: _continuousExposeIdentifier
@property (readonly, nonatomic) NSInteger displayOrdinal; // ivar: _displayOrdinal
@property (readonly, copy, nonatomic) NSDictionary *elementIdentifiersToLayoutAttributes; // ivar: _elementIdentifiersToLayoutAttributes
@property (readonly, nonatomic) NSInteger floatingConfiguration; // ivar: _floatingConfiguration
@property (readonly, nonatomic, getter=isFloatingSwitcherVisible) BOOL floatingSwitcherVisible; // ivar: _floatingSwitcherVisible
@property (readonly, nonatomic) BOOL isFullScreen;
@property (readonly, nonatomic) BOOL isSplitView;
@property (readonly, nonatomic) NSInteger peekConfiguration; // ivar: _peekConfiguration
@property (readonly, nonatomic) NSInteger spaceConfiguration; // ivar: _spaceConfiguration
@property (readonly, nonatomic) NSInteger unlockedEnvironmentMode; // ivar: _unlockedEnvironmentMode
@property (readonly, nonatomic) NSInteger windowPickerRole; // ivar: _windowPickerRole


+(NSInteger)_defaultInterfaceOrientation;
+(id)_elementIdentifiersToLayoutAttributesForElements:(id)arg0 spaceConfiguration:(NSInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithLayoutElements:(id)arg0 interfaceOrientation:(NSInteger)arg1 interfaceOrientationByLayoutElement:(id)arg2 ;
-(id)_initWithLayoutElements:(id)arg0 interfaceOrientation:(NSInteger)arg1 interfaceOrientationByLayoutElement:(id)arg2 spaceConfiguration:(NSInteger)arg3 elementIdentifiersToLayoutAttributes:(id)arg4 floatingConfiguration:(NSInteger)arg5 unlockedEnvironmentMode:(NSInteger)arg6 floatingSwitcherVisible:(BOOL)arg7 centerConfiguration:(NSInteger)arg8 centerEntityModal:(BOOL)arg9 peekConfiguration:(NSInteger)arg10 bundleIDShowingAppExpose:(id)arg11 windowPickerRole:(NSInteger)arg12 displayOrdinal:(NSInteger)arg13 ;
-(id)_initWithLayoutElements:(id)arg0 interfaceOrientation:(NSInteger)arg1 interfaceOrientationByLayoutElement:(id)arg2 spaceConfiguration:(NSInteger)arg3 floatingConfiguration:(NSInteger)arg4 unlockedEnvironmentMode:(NSInteger)arg5 floatingSwitcherVisible:(BOOL)arg6 centerConfiguration:(NSInteger)arg7 centerEntityModal:(BOOL)arg8 peekConfiguration:(NSInteger)arg9 bundleIDShowingAppExpose:(id)arg10 windowPickerRole:(NSInteger)arg11 displayOrdinal:(NSInteger)arg12 ;
-(id)_initWithLayoutElements:(id)arg0 spaceConfiguration:(NSInteger)arg1 elementIdentifiersToLayoutAttributes:(id)arg2 floatingConfiguration:(NSInteger)arg3 unlockedEnvironmentMode:(NSInteger)arg4 floatingSwitcherVisible:(BOOL)arg5 centerConfiguration:(NSInteger)arg6 centerEntityModal:(BOOL)arg7 peekConfiguration:(NSInteger)arg8 bundleIDShowingAppExpose:(id)arg9 windowPickerRole:(NSInteger)arg10 displayOrdinal:(NSInteger)arg11 ;
-(id)_initWithLayoutElements:(id)arg0 spaceConfiguration:(NSInteger)arg1 floatingConfiguration:(NSInteger)arg2 unlockedEnvironmentMode:(NSInteger)arg3 floatingSwitcherVisible:(BOOL)arg4 centerConfiguration:(NSInteger)arg5 centerEntityModal:(BOOL)arg6 peekConfiguration:(NSInteger)arg7 bundleIDShowingAppExpose:(id)arg8 windowPickerRole:(NSInteger)arg9 displayOrdinal:(NSInteger)arg10 ;
-(id)_initWithLayoutState:(id)arg0 ;
-(id)_layoutAttributesForElementWithIdentifier:(id)arg0 ;
-(id)appLayout;
-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)floatingAppLayout;
-(id)floatingItem;
-(id)layoutAttributesForElement:(id)arg0 ;
-(id)visibleFloatingItem;
-(void)_applyElementInterfaceOrientationsToLayoutAttributes;
-(void)_updateSizingPoliciesForLayoutElements:(id)arg0 ;
-(void)setInterfaceOrientationByLayoutElementIdentifier:(id)arg0 ;


@end


#endif
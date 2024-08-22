// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBMAINDISPLAYLAYOUTSTATE_H
#define SBMAINDISPLAYLAYOUTSTATE_H

@class NSString;


#import "SBLayoutState.h"
#import "SBAppLayout.h"

@interface SBMainDisplayLayoutState : SBLayoutState {
    SBAppLayout *_cachedAppLayoutIfAny;
    SBAppLayout *_cachedFloatingAppLayoutIfAny;
}


@property (readonly, nonatomic) NSString *bundleIDShowingAppExpose; // ivar: _bundleIDShowingAppExpose
@property (readonly, nonatomic) NSInteger centerConfiguration; // ivar: _centerConfiguration
@property (readonly, nonatomic, getter=isCenterEntityModal) BOOL centerEntityModal; // ivar: _centerEntityModal
@property (readonly, nonatomic) NSInteger floatingConfiguration; // ivar: _floatingConfiguration
@property (readonly, nonatomic, getter=isFloatingSwitcherVisible) BOOL floatingSwitcherVisible; // ivar: _floatingSwitcherVisible
@property (readonly, nonatomic) NSInteger peekConfiguration; // ivar: _peekConfiguration
@property (readonly, nonatomic) NSInteger spaceConfiguration; // ivar: _spaceConfiguration
@property (readonly, nonatomic) NSInteger unlockedEnvironmentMode; // ivar: _unlockedEnvironmentMode
@property (readonly, nonatomic) NSInteger windowPickerRole; // ivar: _windowPickerRole


+(NSInteger)_defaultInterfaceOrientation;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)interfaceOrientation;
-(NSUInteger)hash;
-(id)_initWithLayoutElements:(id)arg0 interfaceOrientation:(NSInteger)arg1 elementInterfaceOrientation:(NSInteger)arg2 ;
-(id)_initWithLayoutElements:(id)arg0 interfaceOrientation:(NSInteger)arg1 elementInterfaceOrientation:(NSInteger)arg2 spaceConfiguration:(NSInteger)arg3 floatingConfiguration:(NSInteger)arg4 unlockedEnvironmentMode:(NSInteger)arg5 floatingSwitcherVisible:(BOOL)arg6 centerConfiguration:(NSInteger)arg7 centerEntityModal:(BOOL)arg8 peekConfiguration:(NSInteger)arg9 bundleIDShowingAppExpose:(id)arg10 windowPickerRole:(NSInteger)arg11 ;
-(id)appLayout;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)floatingAppLayout;
-(id)floatingItem;
-(id)visibleFloatingItem;


@end


#endif
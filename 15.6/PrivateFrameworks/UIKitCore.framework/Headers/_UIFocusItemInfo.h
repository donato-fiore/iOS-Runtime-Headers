// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFOCUSITEMINFO_H
#define _UIFOCUSITEMINFO_H

@class NSArray;
@protocol NSCopying, UIFocusItem;

#import <Foundation/Foundation.h>

#import "UIView.h"
#import "_UIFocusRegion.h"

@interface _UIFocusItemInfo : NSObject <NSCopying>

 {
    ? _flags;
}


@property (readonly, copy, nonatomic) NSArray *ancestorEnvironmentScrollableContainers; // ivar: _ancestorEnvironmentScrollableContainers
@property (readonly, weak, nonatomic) UIView *containingView; // ivar: _containingView
@property (readonly, nonatomic, getter=isFocusMovementFlippedHorizontally) BOOL focusMovementFlippedHorizontally; // ivar: _focusMovementFlippedHorizontally
@property (readonly, nonatomic) NSInteger focusSound; // ivar: _focusSound
@property (readonly, nonatomic) CGFloat focusSoundPan; // ivar: _focusSoundPan
@property (readonly, nonatomic) NSInteger focusTouchSensitivityStyle; // ivar: _focusTouchSensitivityStyle
@property (readonly, nonatomic) _UIFocusRegion *focusedRegion; // ivar: _focusedRegion
@property (readonly, nonatomic) NSInteger inheritedFocusMovementStyle; // ivar: _inheritedFocusMovementStyle
@property (readonly, weak, nonatomic) NSObject<UIFocusItem> *item; // ivar: _item
@property (readonly, nonatomic) BOOL itemIsKindOfView;


+(id)infoWithItem:(id)arg0 ;
+(id)infoWithItem:(id)arg0 useFallbackAncestorScroller:(BOOL)arg1 ;
+(id)infoWithView:(id)arg0 ;
-(id)_defaultCoordinateSpace;
-(id)_focusedRegionInCoordinateSpace:(id)arg0 ;
-(id)_initWithItem:(id)arg0 containingView:(id)arg1 useFallbackAncestorScroller:(BOOL)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(struct CGRect )focusedRectInCoordinateSpace:(id)arg0 ;
-(void)invalidateFocusedRegion;


@end


#endif
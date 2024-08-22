// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYCHROMEBUTTONCONFIGURATION_H
#define PXSTORYCHROMEBUTTONCONFIGURATION_H

@class NSString, NSArray, UIColor, UIMenu;
@protocol PXGViewUserData, NSObject, PXDisplayAsset, PXMenuDelegate;

#import <Foundation/Foundation.h>

#import "PXStoryChromeButtonSpec.h"

@interface PXStoryChromeButtonConfiguration : NSObject <PXGViewUserData>



@property (nonatomic) SEL action; // ivar: _action
@property (nonatomic) BOOL applyTintColorAsHierarchicalColor; // ivar: _applyTintColorAsHierarchicalColor
@property (copy, nonatomic) NSString *axLabel; // ivar: _axLabel
@property (nonatomic) BOOL backgroundColorAdaptsToHoveredState; // ivar: _backgroundColorAdaptsToHoveredState
@property (nonatomic) BOOL backgroundExtendsUnderLabel; // ivar: _backgroundExtendsUnderLabel
@property (nonatomic) NSInteger backgroundStyle; // ivar: _backgroundStyle
@property (nonatomic) CGFloat badgeBorderWidth; // ivar: _badgeBorderWidth
@property (nonatomic) NSUInteger badgeEdges; // ivar: _badgeEdges
@property (nonatomic) CGSize badgePadding; // ivar: _badgePadding
@property (copy, nonatomic) NSArray *badgeSystemImageColors; // ivar: _badgeSystemImageColors
@property (copy, nonatomic) NSString *badgeSystemImageName; // ivar: _badgeSystemImageName
@property (nonatomic) UIEdgeInsets contentEdgeInsets; // ivar: _contentEdgeInsets
@property (weak, nonatomic) NSObject<NSObject> *customContextMenuInteractionDelegate; // ivar: _customContextMenuInteractionDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSObject<PXDisplayAsset> *displayAsset; // ivar: _displayAsset
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) UIColor *focusedTintColor; // ivar: _focusedTintColor
@property (readonly, nonatomic) BOOL hasBadgeImageContent;
@property (readonly, nonatomic) BOOL hasPrimaryImageContent;
@property (readonly) NSUInteger hash;
@property (nonatomic) UIEdgeInsets hitTestEdgeOutsets; // ivar: _hitTestEdgeOutsets
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) UIMenu *menu; // ivar: _menu
@property (weak, nonatomic) NSObject<PXMenuDelegate> *menuDelegate; // ivar: _menuDelegate
@property (nonatomic) CGPoint offset; // ivar: _offset
@property (nonatomic) NSInteger pointerShape; // ivar: _pointerShape
@property (nonatomic) UIEdgeInsets pointerShapeInsets; // ivar: _pointerShapeInsets
@property (nonatomic) CGFloat preferredSystemImagePointSize; // ivar: _preferredSystemImagePointSize
@property (nonatomic) NSInteger preferredSystemImageWeight; // ivar: _preferredSystemImageWeight
@property (retain, nonatomic) UIColor *solidBackgroundColor; // ivar: _solidBackgroundColor
@property (retain, nonatomic) PXStoryChromeButtonSpec *spec; // ivar: _spec
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *systemImageName; // ivar: _systemImageName
@property (weak, nonatomic) id *target; // ivar: _target
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (nonatomic) CGAffineTransform transform; // ivar: _transform


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif
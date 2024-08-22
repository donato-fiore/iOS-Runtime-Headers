// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UITEXTINPUTASSISTANTITEM_H
#define UITEXTINPUTASSISTANTITEM_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "UIColor.h"
#import "UIBlurEffect.h"

@interface UITextInputAssistantItem : NSObject

@property (nonatomic) BOOL allowsHidingShortcuts; // ivar: _allowsHidingShortcuts
@property (copy, nonatomic, getter=_centerBarButtonGroups, setter=_setCenterBarButtonGroups:) NSArray *centerBarButtonGroups; // ivar: _centerBarButtonGroups
@property (retain, nonatomic, getter=_detachedBackgroundColor, setter=_setDetachedBackgroundColor:) UIColor *detachedBackgroundColor; // ivar: _detachedBackgroundColor
@property (copy, nonatomic, getter=_detachedBackgroundEffect, setter=_setDetachedBackgroundEffect:) UIBlurEffect *detachedBackgroundEffect; // ivar: _detachedBackgroundEffect
@property (retain, nonatomic, getter=_detachedTintColor, setter=_setDetachedTintColor:) UIColor *detachedTintColor; // ivar: _detachedTintColor
@property (readonly, nonatomic, getter=_hasItemsToDisplay) BOOL hasItemsToDisplay;
@property (nonatomic, getter=_independentGroupSizes, setter=_setIndependentGroupSizes:) BOOL independentGroupSizes; // ivar: _independentGroupSizes
@property (copy, nonatomic) NSArray *leadingBarButtonGroups; // ivar: _leadingBarButtonGroups
@property (nonatomic, getter=_marginOverride, setter=_setMarginOverride:) CGFloat marginOverride; // ivar: _marginOverride
@property (readonly, nonatomic, getter=_requiresPredictionDisabled) BOOL requiresPredictionDisabled;
@property (nonatomic, getter=_showsBarButtonItemsInline, setter=_setShowsBarButtonItemsInline:) BOOL showsBarButtonItemsInline; // ivar: _showsBarButtonItemsInline
@property (readonly, nonatomic, getter=_isSystemItem) BOOL systemItem;
@property (copy, nonatomic) NSArray *trailingBarButtonGroups; // ivar: _trailingBarButtonGroups


+(id)_keyboardDeleteItem;
-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIBARBUTTONITEMGROUP_H
#define UIBARBUTTONITEMGROUP_H

@class NSMutableArray, NSArray;
@protocol NSCoding, _UIBarButtonItemGroupOwner;

#import <Foundation/Foundation.h>

#import "UIBarButtonItem.h"
#import "_UIButtonGroupViewController.h"

@interface UIBarButtonItemGroup : NSObject <NSCoding>

 {
    NSMutableArray *_barButtonItems;
}


@property (copy, nonatomic) NSArray *barButtonItems;
@property (readonly, nonatomic, getter=isDisplayingRepresentativeItem) BOOL displayingRepresentativeItem;
@property (nonatomic, getter=_expandStyle, setter=_setExpandStyle:) NSUInteger expandStyle; // ivar: _expandStyle
@property (nonatomic, getter=_isHidden, setter=_setHidden:) BOOL hidden; // ivar: _hidden
@property (readonly, nonatomic, getter=_items) NSArray *items;
@property (nonatomic, getter=_isLocked, setter=_setLocked:) BOOL locked; // ivar: _locked
@property (nonatomic, getter=_minimumLeadingSpace, setter=_setMinimumLeadingSpace:) CGFloat minimumLeadingSpace; // ivar: _minimumLeadingSpace
@property (nonatomic, getter=_minimumTrailingSpace, setter=_setMinimumTrailingSpace:) CGFloat minimumTrailingSpace; // ivar: _minimumTrailingSpace
@property (weak, nonatomic, getter=_owner, setter=_setOwner:) NSObject<_UIBarButtonItemGroupOwner> *owner; // ivar: _owner
@property (nonatomic, getter=_priority, setter=_setPriority:) float priority; // ivar: _priority
@property (retain, nonatomic) UIBarButtonItem *representativeItem; // ivar: _representativeItem
@property (retain, nonatomic, getter=_representativeUI, setter=_setRepresentativeUI:) _UIButtonGroupViewController *representativeUI; // ivar: _representativeUI
@property (nonatomic, getter=_sendActionsBeforeDismiss, setter=_setSendActionsBeforeDismiss:) BOOL sendActionsBeforeDismiss; // ivar: _sendActionsBeforeDismiss
@property (nonatomic, getter=_shouldAlwaysCollapse, setter=_setShouldAlwaysCollapse:) BOOL shouldAlwaysCollapse; // ivar: _shouldAlwaysCollapse
@property (readonly, nonatomic, getter=_isSystemGroup) BOOL systemGroup;


-(id)description;
-(id)init;
-(id)initWithBarButtonItems:(id)arg0 representativeItem:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_removeBarButtonItem:(id)arg0 ;
-(void)_removeRepresentative:(id)arg0 ;
-(void)_validateAllItems;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
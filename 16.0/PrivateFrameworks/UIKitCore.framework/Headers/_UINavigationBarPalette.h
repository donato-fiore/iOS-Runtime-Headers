// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UINAVIGATIONBARPALETTE_H
#define _UINAVIGATIONBARPALETTE_H

@class NSString;
@protocol UIPointerInteractionDelegate, _UINavigationBarLayoutParticipating;


#import "UIView.h"
#import "_UIPointerInteractionAssistant.h"
#import "UINavigationItem.h"

@interface _UINavigationBarPalette : UIView <UIPointerInteractionDelegate, _UINavigationBarLayoutParticipating>



@property (nonatomic, setter=_setContentViewMarginType:) NSUInteger _contentViewMarginType; // ivar: __contentViewMarginType
@property (nonatomic, setter=_setDisplaysWhenSearchActive:) BOOL _displaysWhenSearchActive; // ivar: __displaysWhenSearchActive
@property (nonatomic, setter=_setLayoutPriority:) NSInteger _layoutPriority; // ivar: __layoutPriority
@property (weak, nonatomic) _UIPointerInteractionAssistant *assistant; // ivar: _assistant
@property (copy, nonatomic) NSString *assistantIdentifier; // ivar: _assistantIdentifier
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat minimumHeight; // ivar: _minimumHeight
@property (weak, nonatomic) UINavigationItem *owningNavigationItem; // ivar: _owningNavigationItem
@property (nonatomic, getter=isPinned) BOOL pinned; // ivar: _pinned
@property (nonatomic) CGFloat preferredHeight; // ivar: _preferredHeight
@property (readonly) Class superclass;
@property (nonatomic) BOOL transitioning; // ivar: _transitioning


-(id)init;
-(id)initWithContentView:(id)arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)_clearAssistants;
-(void)addSubview:(id)arg0 ;
-(void)layoutSubviews;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;
-(void)updateLayoutData:(id)arg0 layoutWidth:(CGFloat)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIINTERFACEACTIONGROUP_H
#define UIINTERFACEACTIONGROUP_H

@class NSArray, NSString, NSPointerArray;
@protocol UIInterfaceActionDisplayPropertyObserver, NSCopying;

#import <Foundation/Foundation.h>

#import "UIInterfaceAction.h"
#import "UIInterfaceActionVisualStyle.h"

@interface UIInterfaceActionGroup : NSObject <UIInterfaceActionDisplayPropertyObserver, NSCopying>



@property (readonly, nonatomic) NSArray *actions; // ivar: _actions
@property (readonly, nonatomic) NSArray *actionsBySection; // ivar: _actionsBySection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGSize leadingImageLayoutSize; // ivar: _leadingImageLayoutSize
@property (retain, nonatomic) UIInterfaceAction *preferredAction; // ivar: _preferredAction
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) CGSize trailingImageLayoutSize; // ivar: _trailingImageLayoutSize
@property (retain, nonatomic, getter=_visualStyle, setter=_setVisualStyle:) UIInterfaceActionVisualStyle *visualStyle; // ivar: _visualStyle
@property (readonly, nonatomic) NSPointerArray *weakDisplayPropertyObservers; // ivar: _weakDisplayPropertyObservers


+(BOOL)changedProperties:(id)arg0 containsAny:(id)arg1 ;
+(id)actionGroupWithActions:(id)arg0 ;
+(id)actionGroupWithActionsBySection:(id)arg0 ;
-(id)_deepCopyOfActionsBySection;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTitle:(id)arg0 actionsBySection:(id)arg1 ;
-(void)_addActionGroupDisplayPropertyObserver:(id)arg0 ;
-(void)_beginObservingActions;
-(void)_endObservingActions;
-(void)_notifyObserversDidChangeActionProperty:(id)arg0 ;
-(void)_notifyObserversVisualStyleDidChange;
-(void)_performWithActionObservingDisabled:(id)arg0 ;
-(void)_reloadImageLayoutSizesUsingExistingActionImages;
-(void)_removeActionGroupDisplayPropertyObserver:(id)arg0 ;
-(void)_updateActionImageLayoutSizes;
-(void)interfaceAction:(id)arg0 reloadDisplayedContentActionProperties:(id)arg1 ;
-(void)interfaceAction:(id)arg0 reloadDisplayedContentVisualStyle:(id)arg1 ;


@end


#endif